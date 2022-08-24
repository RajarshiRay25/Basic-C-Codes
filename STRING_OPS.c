#include <stdio.h>
#include <string.h>
int main()
{
    char first[5];
    char second[5];
    char third[5];
    int i;
    printf("ENTER WORDS : \n");
    scanf("%s", first);
    scanf("%s", second);
    scanf("%s", third);

    for (i = 0; first[i] != '\0'; i++)
    {
        if (first[i] == 'a' || first[i] == 'e' || first[i] == 'i' || first[i] == 'o' || first[i] == 'u' || first[i] == 'A' || first[i] == 'E' || first[i] == 'I' || first[i] == 'O' || first[i] == 'U')
        {
            first[i] = '$';
        }
    }
    for (i = 0; second[i] != '\0'; i++)
    {
        if ((second[i] >= 'a' && second[i] <= 'z') || (second[i] >= 'A' && second[i] <= 'Z'))
        {
            if (second[i] != 'a' && second[i] != 'e' && second[i] != 'i' && second[i] != 'o' && second[i] != 'u' && second[i] != 'A' && second[i] != 'E' && second[i] != 'I' && second[i] != 'O' && second[i] != 'U')
            {
                second[i] = '#';
            }
        }
    }
    for(i = 0; third[i] != '\0'; i++)
    {
        if (third[i] >= 'a' && third[i] <= 'z')
        {
            third[i]= third[i]-32;
        }
    }
    printf("%s%s%s \n", first,second,third);
    return 0;
}