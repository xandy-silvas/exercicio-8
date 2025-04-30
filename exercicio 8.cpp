#include <stdio.h>
#include <string.h>

int eh_palindromo(char *str, int inicio, int fim) {
    // Caso base: string vazia ou de um caractere
    if (inicio >= fim)
        return 1;  // É palíndromo
    
    // Se os caracteres nas extremidades não forem iguais
    if (str[inicio] != str[fim])
        return 0;  // Não é palíndromo
    
    // Verifica o resto da string
    return eh_palindromo(str, inicio + 1, fim - 1);
}

// Função auxiliar para facilitar a chamada
int palindromo(char *str) {
    return eh_palindromo(str, 0, strlen(str) - 1);
}

int main() {
    char str[100];
    
    // Entrada de dados
    printf("Digite uma string: ");
    scanf("%99s", str);
    
    // Verifica se é um palíndromo
    if (palindromo(str))
        printf(""%s" é um palíndromo.\n", str);
    else
        printf(""%s" não é um palíndromo.\n", str);
    
    return 0;
}
