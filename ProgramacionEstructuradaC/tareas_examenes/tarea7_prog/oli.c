#include <stdio.h>
#include <ctype.h>

int main()
{
    char titulo[81], punt=0;
    int texto, c;

    scanf(" %[^\n]", titulo);

    for (int texto = 0; titulo[texto] != '\0'; texto++)
    {
        titulo[texto] = tolower(titulo[texto]);
    }
    titulo[0] = toupper(titulo[0]);
    {
        for (int texto = 1; texto < titulo[texto]; texto++)
        {   
            if (titulo[texto] == ' ')
            {
                c = 1;
            }
            else if (titulo[texto])
            {
                if (c == 1)
                {
                    titulo[texto] = toupper(titulo[texto]);
                    c = 0;
                }
                else
                {
                    titulo[texto] = tolower(titulo[texto]);
                }
            }
        }
    }

    for (int texto = 0; titulo[texto] != '\0'; texto++){
        
        if (titulo[texto] == 58)
            {
                printf("%c \"", titulo[texto]);
                texto++;
                punt = 1;

            }else
            {
                printf("%c", titulo[texto]);
            }
    }
    if (punt == 1)
    {
        printf("\"");
    }
    
    return 0;
}