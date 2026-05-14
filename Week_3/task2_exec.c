#include <stdio.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
     if (argc < 2)
          return 1;

     pid_t pid = fork();
     
     if (pid == 0)
     {
          execlp(argv[1], argv[1], NULL);
          perror("exec failed");
     }
     else if (pid > 0)
     {
          printf("Parent: waiting for command to finish\n");
          wait(NULL);
          printf("Parent: execution complete.\n");
     }
     return 0;
}