#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    do
    {
        /* code */
    
    
    printf("\n\nenter the value of a nad b =");
    scanf("%d%d",&a,&b);
    printf("\n\n1.addition\n2.subtraction\n3.multiplication\n4.divition\n5.exit");
    printf("\nenter the case number = ");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
         printf("\naddition of %d and %d = %d",a,b,a+b);
        
          break;

         case 2:
          printf("\nsubtraction of %d and %d = %d",a,b,a-b);
          break;
 
         case 3:
          printf("\nmulti of %d and %d = %d",a,b,a*b);
          break;

         case 4:
          printf("\ndivi of %d and %d = %d",a,b,a/b);
          break;

         case 5:
          printf("exited sucssesfully");
          exit(1);
          

         default:
         printf("wrong choice");} 

          


    }while (c=5);
    return 0;
}
