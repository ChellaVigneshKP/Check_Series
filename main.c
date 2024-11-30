#include<stdio.h>
int Check_AP(int a[],int n)
{
int d,i,flag;
d=a[1]-a[0];
for(i=0;i<n-1;i++)
{
if((a[i+1]-a[i])!=d)
{
flag=0;
break;
}
else
{
flag=1;
}
}
return flag;
}
int Check_GP(int a[],int n)
{
int r,i,flag;
r=a[1]/a[0];
for(i=0;i<n-1;i++)
{
if((a[i+1]/a[i])!=r)
{
flag=0;
break;
}
else
{
flag=2;
}
}
return flag;
}
int Check_FS(int a[],int n)
{
int i,flag,last,blast,ans;
for(i=0;i<n-2;i++)
{
last=a[i+2];
blast=a[i+1];
if((a[i]+blast)!=last)
{
flag=0;
break;
}
else
{
flag=3;
}
}
return flag;
}
void main()
{
int n,i,input2[100],d,last,blast,ans=0,flag,r;
printf("Enter the no.of input(Minimum 3 input):");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the Sequence:");
scanf("%d",&input2[i]);
}
last=input2[n-1];
blast=input2[n-2];
flag=Check_AP(input2,n);
if (flag==1)
{
d=input2[1]-input2[0];
ans=input2[n-1]+d;
printf("The next term of AP is: %d\n",ans);
}
if(flag!=1)
{
flag=Check_FS(input2,n);
}
if(flag==3)
{
ans=last+blast;
printf("The next Term of Fibonacci Sequence is: %d\n",ans);
}
if((flag!=1)&&(flag!=3))
{
flag=Check_GP(input2,n);
}
if(flag==2)
{
r=input2[1]/input2[0];
ans=input2[n-1]*r;
printf("The next term of GP is: %d\n",ans);
}
if(flag==0)
{
printf("No such progression found");
}
}
