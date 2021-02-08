#include<stdio.h>
int main()
{
    int max,min,mid,a,b,c;
    char eng[3];

    scanf("%d %d %d",&a,&b,&c);
        gets(eng);
    if(a<100&&b<100&&c<100)
    {
    int num[3]={a,b,c};
    min=num[0];max=num[0];
    for(int i=0;i<3;i++)
    {
        if(max<num[i])
        {
            max=num[i];
        }
        if(min>num[i])
        {
            min=num[i];
        }
    }
    for(int i=0;i<3;i++)
     {
         if(num[i]<max&&num[i]>min)
        {
            mid=num[i];
        }
     }
     a=min;
     b=mid;
     c=max;
    if(eng[0]=='A'&&eng[1]=='B'&&eng[2]=='C')
    {
        printf("%d ",a);
        printf("%d ",b);
        printf("%d",max);
    }
    else if(eng[0]=='A'&&eng[1]=='C'&&eng[2]=='B')
    {
        printf("%d ",a);
        printf("%d ",max);
        printf("%d",b);
    }
    else if(eng[0]=='B'&&eng[1]=='A'&&eng[2]=='C')
    {
        printf("%d ",b);
        printf("%d ",a);
        printf("%d",max);
    }
    else if(eng[0]=='B'&&eng[1]=='C'&&eng[2]=='A')
    {
        printf("%d ",b);
        printf("%d ",max);
        printf("%d",a);
    }
     else if(eng[0]=='B'&&eng[1]=='C'&&eng[2]=='A')
    {
        printf("%d ",b);
        printf("%d ",max);
        printf("%d",a);
    }
     else if(eng[0]=='C'&&eng[1]=='A'&&eng[2]=='B')
    {
        printf("%d ",max);
        printf("%d ",a);
        printf("%d",b);
    }
     else if(eng[0]=='C'&&eng[1]=='B'&&eng[2]=='A')
    {
        printf("%d ",max);
        printf("%d ",b);
        printf("%d",a);
    }
    }
    return 0;
}
/*#include<stdio.h>
int main()
{
    int max,min,mid,a,b,c;
    char eng[3],z;
    scanf("%d %d %d",&a,&b,&c);
    if(a<100&&b<100&&c<100)
    {
    int num[3]={a,b,c};
    min=num[0];max=num[0];
    for(int i=0;i<3;i++)
    {
        if(max<num[i])
        {
            max=num[i];
        }
        if(min>num[i])
        {
            min=num[i];
        }
    }
    for(int i=0;i<3;i++)
     {
         if(num[i]<max&&num[i]>min)
        {
            mid=num[i];
        }
     }
     a=min;
     b=mid;
     c=max;
     scanf("%s",&z);
    if(z=="ABC")
    {
        printf("%d ",a);
        printf("%d ",b);
        printf("%d",max);
    }
    else if(z=="ACB")
    {
        printf("%d ",a);
        printf("%d ",max);
        printf("%d",b);
    }
    else if(z=="BAC")
    {
        printf("%d ",b);
        printf("%d ",a);
        printf("%d",max);
    }
    else if(z=="BCA")
    {
        printf("%d ",b);
        printf("%d ",max);
        printf("%d",a);
    }
     else if(z=="CAB")
    {
        printf("%d ",max);
        printf("%d ",a);
        printf("%d",b);
    }
     else if(z=="CBA")
    {
        printf("%d ",max);
        printf("%d ",b);
        printf("%d",a);
    }
    }
    return 0;
}
*/
