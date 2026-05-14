#include <stdio.h>
int main(int argc, char *argv[])
{
     if (argc < 2)
          return 1;
     int k = atoi(argv[1]);
     srand(time(NULL));
     for (int i = 0; i < k; i++)
     {
          if (fork() == 0)
          {
               sleep(rand() % 5);
               printf("child %d exiting...\n", getpid());
               exit(0);
          }
     }
     printf("Parent: Reviewing process state (look for <defunct>)\n");
     system("ps");

     for (int i = 0; i < k; i++)
     {wait(NULL);}

     printf("Parent: all children reaped\n");
     return 0;
}