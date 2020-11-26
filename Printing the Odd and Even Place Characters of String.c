#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char* Even(char *a, int L)
{
    char *Even;
    int i=0;
    for(i=0;i<=L;i=i+2)
    {
        Even = a+i;
        Even++;
    }
    return Even;
}
char* Odd(char *a, int L)
{
    char *Odd;
    int i=0;
    for(i=1;i<=L;i=i+2)
    {
        Odd = a+i;
        Odd++;
    }
    return Odd;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   char Initial, *even, *odd;
   int N,i,l;
   scanf("%d ", &N);
   for(i=0;i<N;i++)
   {
       fgets(Initial, 20, stdin);
       l=strlen(Initial);
       printf(" %d", l);
       even=Even(Initial, l);
       odd= Odd(Initial, l);
       printf("%s ",even);
       printf("%s", odd);
       printf("\n");
   }


    return 0;
}
