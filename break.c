#include<stdio.h>

/*code for break and continue  */
int main()
{   int i ,age ;
    printf("Hello World\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d\nEnter Your Age\n",i);
        scanf("%d",&age);
        //if (age>10)
        //{
        //    break;
        //}
        if (age>7)
        {
            continue;
        }
        printf("You Are a child\n");
    }
    
    return 0;
}
