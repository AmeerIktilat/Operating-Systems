#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
     if (argc < 3)
          return 1;
     mode_t mode = strtol(argv[2], NULL, 8);
     if (chmod(argv[1], mode) < 0)
     {
          write(2, "Chmod failed.\n", 14);
          return 1;
     }
     return 0;
}