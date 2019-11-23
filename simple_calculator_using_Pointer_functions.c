#include<stdio.h>
void display(float s);
float add(int x,int y);//function declarations
float subtract(int x,int y);
float multiply(int x,int y);
float divide(int x,int y);
int main()
{
    int a,b;
    float ans;
    unsigned char c;
    while(1)
    {


    printf("enter the two numbers separating with single space:");
    scanf("%d%d",&a,&b);
    printf("enter the arithmetic operation (+,-,*,/):");
    scanf(" %c",&c);
    float (*ptr_op)(int,int);//declaration of pointer function
    void (*ptr_disp)(float);//declaration of pointer function
    ptr_disp=display;

     switch(c)//According to operation entered the function to be called is chosen
    {
        case '+':ptr_op=add;
        break;
        case '-':ptr_op=subtract;
        break;
        case '*':ptr_op=multiply;
        break;
        case '/':ptr_op=divide;
        break;
        default:printf("invalid operator");


    }

    ans=(*ptr_op)(a,b);//Pointer function call
    (*ptr_disp)(ans);
    }
    return 0;

}
void display(float s)//Function definition
{
    printf("\nAns: %f\n",s);
}
float add(int x,int y)//Function for addition operation
{
    return (x+y);
}
float subtract(int x,int y)//Function for subtraction operation
{
    return x-y;
}
float multiply (int x,int y)//Multiplication function
{

    return x*y;
}
float divide (int x,int y)//function for division
{
    if (y!=0)
        return (float)x/y;
    else return 0.0;
}
