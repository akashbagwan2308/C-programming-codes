#include<stdio.h>

/*code for switch case */
int main()
{  int age,marks;

    printf("Enter your age\n");
    scanf("%d",&age);
    printf("Enter your marks\n");
    scanf("%d",&marks);

    switch (age)
    {
    case 5:
        printf("Your Age is %d\n",age);
        switch (marks)
        {
        case 50:
            printf("Your grade is C");
            break;
        case 85:
            printf("Your grade is A");
            break;
        case 99:
            printf("Your grade is A+");
            break;    
        default:
            printf("Marks are not 50,85 or 99");
            break;
        }
        break;
    case 15:
        printf("Your Age is %d\n",age);
        switch (marks)
        {
        case 50:
            printf("Your grade is C");
            break;
        case 85:
            printf("Your grade is A");
            break;
        case 99:
            printf("Your grade is A+");
            break;    
        default:
            printf("Marks are not 50,85 or 99");
            break;
        }
        break;
    case 25:
        printf("Your Age is %d\n",age);
        switch (marks)
        {
        case 50:
            printf("Your grade is C");
            break;
        case 85:
            printf("Your grade is A");
            break;
        case 99:
            printf("Your grade is A+");
            break;    
        default:
            printf("Marks are not 50,85 or 99");
            break;
        }
        break;        
    
    default:
    printf("The age is not 5,15 or 25");
        break;
    }



    return 0;
}
