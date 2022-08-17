#include<stdio.h>
int main()
{
int h,m;

printf("Enter Time  in [HH:MM]format\n");
scanf("%d %d",&h,&m);
printf("%d:%d converted into %d Hour and %d Minuits",h,m,h,m);
return 0;
}
