#include<stdio.h>
#pragma pack(1)
struct Demo
{
 int a;
 char b;
 char c;
// char d;
// char e;

}obj;
int main()
{

   printf("%d",sizeof(obj));
    return 0;
}


