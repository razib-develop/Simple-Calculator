#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int choice;
    float a,b;
    printf("\n 1. Addition:");
     printf("\n 2. subtraction:");
      printf("\n 3. Multiplication:");
       printf("\n 4. Division:");
        printf("\n 5. Remainder");
         printf("\n 6. Exponent:");
         printf("\n 7. All the above operations:");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    printf("\nEnter any two different number except zero:");
    scanf("%f %f",&a,&b);
    if(choice==1)
    {
        printf("Sum of the number is %f",a+b);
    }
    else if(choice==2)
    {
         printf("Difference of the number is %f",a-b);
    }
    else if(choice==3)
    {
         printf("Product of the number is %f",a*b);
    }
     else if(choice==4)
    {
         printf("Quotient of the number is %f",a/b);
    }
     else if(choice==5)
    {
         printf("Remainder of the number is %d\n", (int)a % (int)b);
    }
     else if(choice==6) 
    {
         printf("Exponential value of the number is %f\n",pow(a,b));
    }
     else if(choice==7)
     {
          printf("Sum of the number is %f\n",a+b);
          printf("Difference of the number is %f\n",a-b);
          printf("Product of the number is %f\n",a*b);
          printf("Quotient of the number is %f\n",a/b);
          printf("Remainder of the number is  %d\n", (int)a % (int)b);
          printf("Exponential value of the number is %f\n",pow(a,b));
     }
    else
    {
      printf("Invalid command");
    }
    return 0;                 
}