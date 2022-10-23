#include <stdio.h>
#include <string.h>

void getWord(char word[50], int key, char option){
    switch (option){
        case '1':
            for (int i = 0; i < strlen(word); i++){
               char letter = word[i];
               letter = letter + key;
               printf("%c", letter);
            }
            break;
        case '2':
            for (int i = 0; i < strlen(word); i++){
               char letter = word[i];
               letter = letter - key;
               printf("%c", letter);
            }
            break;
        default:
            printf("Invalid Operator.");
    }
}

int main()
{
    int key = 0;
    char word[50];
    char option;

    printf("1 - Criptografar\n2 - descriptografar\n>");
    scanf("%c", &option);

    printf("Digite a chave:\n");
    scanf("%i", &key);
    printf("Digite uma palavra (maximo 50 letras):\n");
    scanf("%s", &word);

    getWord(word, key, option);

    return 0;
}
