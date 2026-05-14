#include <fcntl.h>

int main(int argc, char *argv[])
{
     if (argc < 3)
          return 1;
     int src = open(argv[1], O_RDONLY);
     if (src < 0)
          return 1;
     int dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
     if (dest < 0)
     {
          close(src);
          return 1;
     }
     char buffer[1024];
     int bytes;
     while ((bytes = read(src, buffer, 1024)) > 0)
     {
          write(dest, buffer, bytes);
     }
     close(src);
     close(dest);
     return 0;
}