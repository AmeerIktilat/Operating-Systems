#include <sys/wait.h>

int main()
{
     int n1, n2, status;
     scanf("%d %d", &n1, &n2);

     pid_t p1 = fork();
     if (p1 == 0)
     {
          int sum = n1 + n2;
          printf("Child 1 (Sum): %d+%d=%d\n", n1, n2, sum);
          exit(sum);
     }

     pid_t p2 = fork();
     if (p2 == 0)
     {
          int mul = n1 * n2;
          printf("Child 2 (Mul): %d*%d=%d\n", n1, n2, mul);
          exit(mul);
     }

     waitpid(p1, &status, 0);
     printf("Parent: Child 1 result was %d\n", WEXITSTATUS(status));

     waitpid(p2, &status, 0);
     printf("Parent: Child 2 result was %d\n", WEXITSTATUS(status));

     printf("All computations done\n");
     return 0;
}