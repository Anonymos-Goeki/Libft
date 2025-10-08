#include <stdio.h>

int ft_isdigit(int digit){
    if(digit >= '0' && digit <= '9')
    return 1;
    else
    return 0;
}

int main()
{
    char test1 = '3';
    char test2 = 'A';

    if(ft_isdigit(test1))
        printf("%c ist eine Zahl\n", test1);
    else    
        printf("%c ist keine Zahl\n", test1);
    
    if(ft_isdigit(test2))
        printf("%c  ist eine Zahl\n", test2);
    else   
        printf("%c ist keine Zahl\n", test2);
}