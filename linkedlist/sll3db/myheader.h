#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
typedef struct student
{
   char name[10];
   int cont;
   char id[10];
   struct student *next;
}NODE;
