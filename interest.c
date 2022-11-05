/*Program Calculating compound interest
Using user defined function
Developed by Robert Chunga @2022*/

#include <stdio.h>
#include <math.h>

//function prototype
float interest(float a, float b, float c, float d);

int main()
{
    //variable declaration
    float p, r, n, t;
    int redo;

    do{
    system("cls");
    //getting input from user
    printf("COMPOUND INTEREST CALCULATOR\n\n");
    printf("Enter principal amount:\n>>");
    scanf("%f", &p);
    printf("Enter rate: \n>>");
    scanf("%f", &r);
    printf("Enter times a year: \n>>");
    scanf("%f", &t);
    printf("Enter number of years: \n>>");
    scanf("%f", &n);

    //printing results
    system("cls");
    printf("\nYour interest is K%.2f\n", interest(p,r,t,n)); //function calling
    printf("\nDo you want to perform another Calculation?\n\nPress 1 to continue or 2 to exit\n->>");
    scanf("%d", &redo);

    } while(redo != 2);
    system("cls");
    return 0;
}
//function definition
float interest(float a, float b, float c, float d)
{
    float coint = a * pow((1 + (b/c)),(c * d)); //"coint" forcompound interest

    return coint;
}
