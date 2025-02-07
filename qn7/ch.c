#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    switch(1) {
        case 1:
        if(ch>='A'&& ch<='Z')
        {
            printf("Upper case\n");
            break;
            }
        case 2:
           if(ch>='a'&& ch<='z')
        {
            printf("Lower case\n");
            break;
            }
        case 3:
            if(ch>='0'&& ch<='9')
        {
            printf("Digit\n");
            break;
            }
       
        default:
            printf("Special Character.\n");
            break;
    }

    return 0;
}
