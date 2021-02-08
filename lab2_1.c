#include<stdio.h>
int main()
{
    int a,b,c,x;
    scanf("%d %d %d",&a,&b,&c);
    if(0<=a&&a<=30 && 0<=b&&b<=30 && 0<=c&&c<=40)
    {
        x=a+b+c;
        if(80<=x&&x<=100)
        {
            printf("A");
        }
        else if(75<=x&&x<=79)
        {
            printf("B+");
        }
         else if(70<=x&&x<=74)
        {
            printf("B");
        }
         else if(65<=x&&x<=69)
        {
            printf("C+");
        }
         else if(60<=x&&x<=64)
        {
            printf("C");
        }
         else if(55<=x&&x<=59)
        {
            printf("D+");
        }
         else if(50<=x&&x<=54)
        {
            printf("D");
        }
         else if(0<=x&&x<=49)
        {
            printf("F");
        }

        }
}

 /*switch(x)
        {
            case 80<=x<=100 : printf("A");break;
            case 75<=x<=79 : printf("B");break;
            case 70<=x<=74 : printf("C");break;
            case 65<=x<=69 : printf("D");break;
            case 60<=x<=64 : printf("F");break;
            default :*/
