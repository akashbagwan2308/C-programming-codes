#include<stdio.h>
/* code for all type of operators */
int main()
{
    int a,b,A,B;
    a = 34;
    b = 34;
    A = 2;
    B = 3;
  /*arithmatic operator */
    printf("a+b = %d\n",a+b);
    printf("a-b = %d\n",a-b);
    printf("a*b = %d\n",a*b);
    printf("a/b = %d\n",a/b);
/*relational operator */
    printf("a rel b = %d\n",a==b);
    printf("a rel b = %d\n",a!=b);
 /* logical operator */
    printf("a and b = %d\n",a&&b);
    printf("a or b = %d\n",a||b);
    printf("not b = %d\n",!b);
 /* bitwise operator */
    printf("A and B =%d\n",A&B);   
    printf("A or B =%d\n",A|B); 
 /* assignment operators = ,+= ,-= ,*= ,/= */   
    return 0;
}
