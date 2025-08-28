#include <stdio.h>
int main()
{
   int a;
   printf("Enter a no.");
   scanf("%d",&a);
   if(a%7==0 || a%11==0)
   { 
     printf("Number is divisible by 7 or 11");
   }
   else{
     printf("Not divisible");
   }
   return 0;
   
}
