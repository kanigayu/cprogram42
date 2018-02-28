#include<stdio.h>
#include<string.h>
int main()
{
char k[100];
int count=1,i,n;
gets(k);
n=strlen(k);
for(i=0;i<=n;i++)
{
if(k[i]==' ')
{
count=count+1;
}
}
printf("%d",count);
return 0;
}
