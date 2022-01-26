#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a, sum=0;

    for(a=1; a<=100; a++)
    {
        sum=sum+a*(a+1);
    }

    printf("1*2+2*3+3*4+............+100(100+1) = %d",sum);


    getch();
    return 0;
}
