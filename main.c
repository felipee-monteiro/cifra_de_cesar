#include <stdio.h>
#include <string.h>

void getWord(){
    int key = 0;
    char option, word[50];

    printf("1 - Criptografar\n2 - descriptografar\n\n>");
    scanf("%c", &option);

    switch (option){
        case '1':
            printf("Digite a chave:\n");
            scanf("%i", &key);
            printf("Digite uma palavra (maximo 50 letras):\n");
            scanf("%s", &word);
            for (int i = 0; i < strlen(word); i++){
               char letter = word[i];
               letter = letter + key;
               printf("%c", letter);
            }
            break;
        case '2':
            printf("Digite a chave:\n");
            scanf("%i", &key);
            printf("Digite uma palavra (maximo 50 letras):\n");
            scanf("%s", &word);
            for (int i = 0; i < strlen(word); i++){
               char letter = word[i];
               letter = letter - key;
               printf("%c", letter);
            }
            break;
        default:
            printf("Opçao invalida.");
    }
}

int main()
{
    getWord();
    return 0;
}
