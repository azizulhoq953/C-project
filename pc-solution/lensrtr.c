#include <stdio.h>
#include <string.h>
main()
{
    char s1[20];
    int len;
    printf("\nEnter any string: ");
    gets(s1);
    len = strlen(s1);
    printf("\nLength of string: %d", len);
    return 0;
}