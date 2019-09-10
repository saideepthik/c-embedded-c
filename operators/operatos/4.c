#include<stdio.h>
main()
{
  char v;
  v=getchar();
  putchar(v);
  (v>='A')&&(v<='Z')?printf("\nA---------Z\n"):(v>='a')&&(v<='z')?printf("\na---------z\n"):(v>='0')&&(v<='9')?printf("\n0 to 9\n"):printf("\nspecial character\n");
}
