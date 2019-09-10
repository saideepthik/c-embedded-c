#include<stdio.h>
#include<stdlib.h>
int n=0;
int input(int *q)
{
int i;
scanf("%d",&n);
srand(getpid());
q=realloc(q,n*sizeof(int));
for(i=0;i<n;i++)
{
q[i]=rand()%100;
}
return q;
}
void print(int *q)
{
int i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("q[i]=%d\t",q[i]);
}
}
main()
{
int a[10];
int *p=0;
char v;
puts("enter choice");
printf("i\np\nf\n");
scanf(" %c",&v);
while(1)
{
switch(v)
{
case 'i':input(p);break;
case 'p':print(p);break;
case 'f':return;
}
}
}
