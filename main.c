#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x;
    
    printf("Input an integer:");
    scanf("%d", &x);
    
    if (x>0)
       printf("positive number.\n");
    else if (x<0)
       printf("negative number.\n");
    else
        printf("0.\n");
    
    system("PAUSE");	
    return 0;
}
