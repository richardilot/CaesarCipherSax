#include <stdio.h>
#include <stdlib.h>

int main()
{
    int shift_count;
    char ciphertext[] = "Plisfkd moldoxjjfkd mrwwibp fp crk!";
    int index;
    char character;

    do
    {
        printf("Input : %s", ciphertext);
        printf("\nshift : ");
        scanf("%d", &shift_count);

        for(index = 0; ciphertext[index] != '\0'; ++index)
        {
            character = ciphertext[index];

            if(character >= 'a' && character <= 'z')
            {
                character = character - shift_count;
                if(character < 'a')
                {
                    character = character + 'z' - 'a' + 1;
                }
                ciphertext[index] = character;
            }
            else if(character >= 'A' && character <= 'Z')
            {
                character = character - shift_count;
                if(character < 'A')
                {
                    character = character + 'Z' - 'A' + 1;
                }
                ciphertext[index] = character;
            }
        }
        if(shift_count == 0)
            printf("QUIT PROGRAM.");
        else
            printf("%s\n\n", ciphertext);
    }
    while(shift_count != 0);
    return 0;
}
