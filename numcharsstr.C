#include<stdio.h>
int main()
{
int count=0,i,n;
char str[70]="sandhiya7398";
n=strlen(str);
for(i=1;i<=n;i++)
{
if(str[i]>='0'&&str[i]<='9')
count=count+1;
}
printf("%d\n",count);
return 0;
}
