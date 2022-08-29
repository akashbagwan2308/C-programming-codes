#include <stdio.h>

/*code for unit conversion */

int main()
{
    int a;
    printf("System of units:\n1.kms to miles\n2.inches to foot\n3.cms to inches\n4.inches to meters\n");
reset:
    printf("Choose System Of Units : ");
    scanf("%d", &a);

    if (a == 1)
    {
        float kms, miles;
        printf("Enter the number to convert : ");
        scanf("%f", &kms);
        miles = 0.621371 * kms;
        printf("%f kms = %f miles", kms, miles);
    }
    else if (a == 2)
    {
        float inches, foot;
        printf("Enter the number to convert : ");
        scanf("%f", &inches);
        foot = 0.0833333 * inches;
        printf("%f inches = %f foot", inches, foot);
    }
    else if (a == 3)
    {
        float cms, inches;
        printf("Enter the number to convert : ");
        scanf("%f", &cms);
        inches = 0.393701 * cms;
        printf("%f cms = %f inches", cms, inches);
    }
    else if (a == 4)
    {
        float inches, meters;
        printf("Enter the number to convert : ");
        scanf("%f", &inches);
        meters = 0.0254 * inches;
        printf("%f inches = %f meters", inches, meters);
    }
    
    
        int c;
        printf("\nEnter 1 to continue\nOr Enter 0 to exit\n");
        scanf("%d", &c);
        if (c == 0)
        {
             goto end;
        }

        else
    
            goto reset;  
        
    
    end:

    return 0;
}
