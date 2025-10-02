#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int answer=59;
    int num;
    int trial; 
    
    do
    {
    printf("Input a number:");
    scanf("%i", &num);
    
    if (num > answer)
       printf("High!\n");
    else if(num < answer)
       printf("Low!\n");
}
 
    while(num!=answer);
    
    printf("Congratulations! trial:%i\n.", trial);
     
    system("PAUSE");	
    return 0;
}
