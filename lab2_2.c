#include<stdio.h>
int main()
{
    float option,surplus,x;
    int test;
    char pro ;
    scanf("%c",&pro);
    fflush(stdin);
    scanf("%f",&option);
    if(pro=='A')
    {
        if(option>200)
        {
            test=option;
            x=option-test;
            surplus=((test)-200)*3+((x/0.6)*3.0)+199;
            printf("%.2f",surplus);
        }
        else if(option<=200)
        {
            printf("%d",199);
        }
    }
     else if(pro=='B')
    {
        if(option>400)
        {
            test=option;
            x=option-test;
            surplus=((test)-400)*2+((x/0.6)*2.0)+299;
            printf("%.2f",surplus);
        }
        else if(option<=400)
        {
            printf("%d",299);
        }
    }
}
