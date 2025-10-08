#include <stdio.h>

int ft_isalpha(int alpha)
{
    if((alpha >= 'a' && alpha >= 'z') || (alpha >= 'A' && alpha <= 'Z'))
    return 1;
 else 
    return 0;
}

int main()
{
    char test1 = 'D';
    char test2 = '1';
    if(ft_isalpha(test1))
    printf("%c ist ein Buchstabe\n", test1);
    else 
    printf("%c ist kein Buchstabe\n", test1);
   if(ft_isalpha(test2))
    printf("%c ist ein buchstabe\n", test2);
    else 
    printf("%c ist kein buchstabe\n", test2);

}