#include <stdio.h>

int main()
{
    char ch;

    ch='K';

    if(ch>='a'&&ch<='z'){
        printf("%c is lower case\n");

    }
    else if(ch>='A'&&ch<='Z'){
        printf("%c is upper case\n");
    }
    return 0;
}
