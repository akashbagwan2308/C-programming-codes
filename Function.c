#include<stdio.h>

/*code for funtions  */
int sum(int a,int b);  //funtion(with argument and with return value )    function declaration        
void printstar(int n);  //funtion(with argument and without return value )    function declaration      
int takenumber();   //funtion(without argument and with return value )    function declaration
void checkPrimeNumber();   //funtion(without argument and without return value )    function declaration
 

int main()
{   int a, b, c, d;
    a = 9;
    b = 87;
    c = sum(a,b);   //function calling
    printf("The Sum is %d\n",c);
    printstar(9);   //function calling 
    d =takenumber();   //function calling
     printf("The number is %d\n",d);
    checkPrimeNumber();   //function calling 
    return 0;
}


int sum(int a,int b)  //funtion(with argument and with return value )  function definition
{
    return a+b;
}
void printstar(int n)  //funtion(with argument and without return value )  function definition
{
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*');
    }
    
} 
int takenumber()    //funtion(without argument and with return value )  function definition
{
    int i;
    printf("\nEnter a number=");
    scanf("%d",&i);
    return i;
}
void checkPrimeNumber()   //funtion(without argument and without return value )  function definition
{
    int n, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=2; i <= n/2; ++i)
    {
        if(n%i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 1)
        printf("%d is not a prime number.", n);
    else
        printf("%d is a prime number.", n);
}