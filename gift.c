#include<stdio.h>
#include<string.h>


/*code for gift distribution */
int main()
{  int a,b,c;
    char str[50];
    char str0[] = "Maths+Science", str1[] = "Maths", str2[] = "Science";
    printf("Subjects:-\n1.Maths+Science\n2.Maths\n3.Science\n");
    printf("Enter the subject you have passed\n");
    scanf("%s",str);
    printf("The subject you have passed is %s\n",str);
    a=strcmp(str,str0);
    b=strcmp(str,str1);
    c=strcmp(str,str2);
    if (a==0)
    {
        printf("You are gifted with Rs.45");
    }
    else if (b==0)
    {
        printf("You are gifted with Rs.15");
    }
    else if (c==0)
    {
        printf("You are gifted with Rs.15");
    }
    else
    {
        printf("Sorry!! We have no gift for you rightnow");
    }
    return 0;
}
