/*Example program to use string fuctions.*/
#include <stdio.h>
#include <string.h>
void main()
{
    char s1[20], s2[20], s3[20];
    int x, l1, l2, l3;
    printf("Enter the Strings");
    scanf("%s%s", s1, s2);
    x = strcmp(s1, s2);
    if (x != 0)
    {
        printf("\nStrings are not equal\n");
        strcat(s1, s2);
    }
    else
        printf("\n Strings are equal");
    strcpy(s3, s1);
    l1 = strlen(s1);
    l2 = strlen(s2);
    l3 = strlen(s3);
    printf("\n s1 = %s \t length = %d characters\n ", s1, l1);
    printf("\n s2 = %s \t length = %d characters\n ", s2, l2);
    printf("\n s3 = %s \t length = %d characters\n ", s3, l3);
}
