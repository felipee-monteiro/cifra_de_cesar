#include <stdio.h>
#include <string.h>

int main(){
    int key = 0;
    char option, word[50];

    printf("1 - Criptografar\n2 - descriptografar\n\n>%c", 32);
    scanf("%c", &option);

    if (option != '1' && option != '2'){
        printf("Valor invalido.\n");
        return 1;
    } else {
        printf("Digite a chave:\n");
        scanf("%i", &key);
        printf("Digite uma palavra (maximo 50 letras):\n");
        scanf("%s", &word);
        for (int i = 0; i != strlen(word); i++){
            char letter = word[i];
            option == '1' ? (letter = letter + key) : (letter = letter - key);
            printf("%c", letter);
        }
        printf("\n");
        return 0;
    }
}
