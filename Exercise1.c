#include <stdio.h>
/*
Print the multiplication table of the number entered by the user in prity form 
Example:
Input :
Enter the number you want multiplication table of :
6 
Output :
Table of 6 :
6*1=6
6*2=12
.
.
.
.
6*10=60
*/

int main()
{  int a;
    printf("Enter the number=");
    scanf("%d",&a);
    printf("Multiplication Table of %d is as follows:\n", a);
    for(int i=0;i<11;i++)
    {    
         printf("%d X %d = 5%d\n",a,i,a*i);
    }
    return 0;
}
