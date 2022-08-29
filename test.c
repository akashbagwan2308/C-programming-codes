#include<stdio.h>
#include<string.h>


/*code for basic syntax of c */
int main(int argc, char const *argv[])
{  char str1[]="Abcd",str2[]="Abcd",str3[]="abcd";
   int result;
   result=strcmp(str1,str2);
    printf("%d\n",result);
   result=strcmp(str3,str1);
    printf("%d\n",result);
  
    
    return 0;
}
