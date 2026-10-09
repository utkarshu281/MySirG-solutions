#include<stdio.h>
#include<ctype.h> //required for isdigit()
int main(void) {
    char x;
    scanf("%c",&x);
    if(x>='A' && x<='Z')
        printf("uppercase");
    else if(x>='a'&& x<='z')
        printf("lowercase");
    else if(isdigit(x))
        printf("digit");
    else
        printf("other symbols");
    return 0;
}