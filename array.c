#include<stdio.h>

/*code for array */
int main()
{   int marks[2][4] = {{2,34,5,75},{23,77,9,56}};
      for (int i = 0; i < 2; i++)
      {
          for (int j = 0; j < 4; j++)
          {
              printf("The value of %d , %d member = %d\n",i,j,marks[i][j]);
              
          }
          
      }
  
    
    return 0;
}
