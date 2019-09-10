#include<stdio.h>
main()
{
volatile int a=1,b=2,c=1,d;
printf("a=%d,b=%d,c=%d\n",a,b,c);
d=a++ + b-- + --c + a-- + --a;
printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
d=++a + a-- + ++a + a++;
printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
d=b++ - b-- + --b + ++b;
printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
d=--a + b++ - c++ - --a;
printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
printf("\nsize of a:%lu",sizeof(a));
printf("\nsize of a:%lu",sizeof(b));
printf("\nsize of a:%lu",sizeof(c));
printf("\nsize of a:%lu\n",sizeof(d));
}

