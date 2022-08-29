#include<stdio.h>

/*code for fibonacci series */
int fab_recursion(int n)
{   
    
    if ( (n==1) || (n==2) )
     {return n;}
     else{
      return fab_recursion(n-1)+fab_recursion(n-2);}

}
int main()
{   int n;
    printf("Enter the term upto which fibonacci is required  n == \n");
    scanf("%d",&n);
    fab_recursion(n);
    printf("%d",fab_recursion(n));
    return 0;
}
