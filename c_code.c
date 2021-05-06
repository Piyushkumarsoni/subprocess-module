#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    setbuf(stdout,NULL);
    printf("Numers:-\n");

    scanf("%d%d",&a,&b);
    printf("sum= ");
    printf("%d",a+b);
    return 0;
}