#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x;
    int i;
    int sum=0;
    
    printf("Input an number:");
    scanf("%d", &x);
    
    if (x>0)
        printf("absolute is %i.\n", x);
    else
        printf("absolute is %i.\n", -x);
    for (i=1;i<=x;i++)
        sum = sum + i ;
   
    printf("sum  is %i\n.", sum);
     
  system("PAUSE");	
  return 0;
}
