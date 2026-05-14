#include <stdio.h>
#include <sys/wait.h>

int main()
{
     int x = 100;
     pid_t pid = fork();
     printf("flag --1 test after fork , donttt forget to delte");

     if (pid == 0)
     {
          x += 50;
          printf("My PID is %d: x = %d\n", getpid(), x);
     }
     else if (pid > 0)
     {
          printf("denug flag line 17");
          wait(NULL);
          printf("My PID is %d: x = %d\n", getpid(), x);
     }
     return 0;
}