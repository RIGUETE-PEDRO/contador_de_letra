#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    int i, contador = 0;
    char letra_comparada;

    printf("digite a letra que vc quer contar");
    scanf("%c", &letra_comparada);
    // Entrada da string pelo usuário
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);


    // Contando a ocorrência de 'a' ou 'A'
    for (i = 0; i < strlen(texto); i++) {
        if (texto[i] == letra_comparada || texto[i] == 'A') {
            contador++;
        }
    }

    // Verificando a existência e exibindo o resultado
    if (contador > 0) {
        printf("A letra 'a' aparece %d vezes na string.\n", contador);
    } else {
        printf("A letra 'a' não aparece na string.\n");
    }

    return 0;
}
