#include <stdio.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
     if (argc < 2)
          return 1;
     int n = atoi(argv[1]);

     for (int i = 0; i < n; i++)
     {
          pid_t pid = fork();
          if (pid > 0)
          {
               wait(NULL);
               printf("Process [%d], my parent is [%d]\n", getpid(), getppid());
               exit(0);
          }
          else if (pid < 0)
          {
               exit(1);
          }
     }
     return 0;
}