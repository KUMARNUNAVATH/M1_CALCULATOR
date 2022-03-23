#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define note "please enter the valid operation"
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot(); // it is header file, conatins all function

int main()
{
    // variable declaration

    printf("\t\t\n!!!Welcome to the scientific_calculator!!!\n");
    int choice;
    printf("\n<--** press 0 for exit the program *-->\n\n");
    printf("Enter 1 for Addition:\n");
    printf("Enter 2 for Subtraction:\n");
    printf("Enter 3 for Multiplication:\n");
    printf("Enter 4 for Division:\n");
    printf("Enter 5 for Modulus:\n");
    printf("Enter 6 for Factorial:\n");
    printf("Enter 7 for Power:\n");
    printf("Enter 8 for Square:\n");
    printf("Enter 9 for Cube:\n");
    printf("Enter 10 for Squareroot:\n");
    while (1)
    {
        printf("\n\nEnter the operation do you perform:");
        scanf("%d",&choice);
       
       
        // switch statement
        switch (choice)
        {
          case 1:
              addition(); //calling addition function
              break;
          case 2:
              subtraction(); //calling subtraction function
              break;
          case 3:
              multiplication();  //calling multiplication function
              break;
          case 4:
              division(); //calling division function
              break;
          case 5:
              modulus(); //calling modulus function
              break;
          case 6:
              factorial(); //calling factorial function
              break;
          case 7:
              power(); //calling power function
              break;
          case 8:
              square(); //calling square function
              break;
          case 9:
              cube();
              break;  
          case 10:
              squareroot(); //calling squareroot function
              break;
          case 0:
              exit(0);
              break;

        // operator doesn't match any case constant
          default:
             printf("\n<--** %s **-->",note);
             break;
        }
    }
  return 0;
}
void addition()
{
    printf("Enter the numbers you want to add:");
    int a,b;
    scanf ("%d %d",&a,&b);
    printf("The sum of a and b is=%d\n",a+b); //returning  result to main funtion 
}
void subtraction()
{
    printf("Enter the numbers you want to subtract:");
    int a,b;
    scanf ("%d %d",&a,&b);
    printf("The subtraction of a and b is=%d\n",a-b); //returning  result to main funtion 
}
void multiplication()
{
    printf("Enter the numbers you want to multiply:");
    int a,b;
    scanf ("%d %d",&a,&b);
    printf("The multiply of a and b is=%d\n",a*b); //returning  result to main funtion 
}
void division()
{
    printf("Enter the numbers you want to divide:");
    int a,b;
    scanf ("%d %d",&a,&b);
    printf("The division of a and b is=%f\n",(float)a/(float)b); //returning  result to main funtion 
}
void modulus()
{
    printf("Enter the numbers you want to find mod of:");
    int a,b;
    scanf ("%d %d",&a,&b);
    printf("The modulus of a and b is=%d\n",a%b); //returning  result to main funtion 
}
void factorial()
{
    int n,fact;
    printf("Enter the numbers you want to factorial of:");
    scanf ("%d",&n);
    fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of %d is=%d\n",n,fact); //returning  result to main funtion 
}
void power()
{
    double a,b;
    printf("Enter the base and the power:");
    scanf ("%lf %lf",&a,&b);
    double e=pow(a,b);
    printf("The power is=%lf\n",e);//returning  result to main funtion 
}
void square()
{
    double a;
    printf("Enter the numbers you want to square:");
    scanf ("%lf",&a);
    double p=pow(a,2);
    printf("The square of %lf=%lf\n",a,p); //returning  result to main funtion 
}
void cube()
{
    double a;
    printf("Enter the numbers you want to cube:");
    scanf ("%lf",&a);
    double p=pow(a,3);
    printf("The square of %1f=%lf\n",a,p); //returning  result to main funtion 
}
void squareroot()
{
    double a;
    printf("Enter the numbers you want to squareroot:");
    scanf ("%lf",&a);
    double s=sqrt(a);
    printf("The square of %lf=%lf\n",a,s); //returning  result to main funtion 
}