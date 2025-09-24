#include <stdio.h>
#include <string.h>

// Definindo constantes para o número máximo de territórios, tamanho máximo do nome e da cor
#define MAX_TERRITORIOS 5
#define MAX_NOME 30
#define MAX_COR 10

// Criando a estrutura Territorio
typedef struct{
    char nome[MAX_NOME];
    char cor[MAX_COR];
    int tropas;
} Territorio;

// Função para limpar o buffer do stdin
void clear_stdin(void){
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

// Função principal
int main(){
    printf("\n------Bem-vindo ao Jogo WAR! Vamos cadastrar 5 territorios------");
    
    // Declarando um array de estruturas Territorio com 5 elementos
    Territorio territorios[MAX_TERRITORIOS];

    // Loop para coletar informações dos territórios
    for(int i = 0; i < MAX_TERRITORIOS; i++){
        printf("\nDigite o nome do territorio %d: ", i+1);
        scanf("%s", territorios[i].nome);
        printf("Digite a cor do territorio %d: ", i+1);
        scanf("%s", territorios[i].cor);
        printf("Digite o numero de tropas do territorio %d: ", i+1);
        scanf("%d", &territorios[i].tropas);
        clear_stdin(); // Limpa o buffer do stdin após cada entrada
        printf("\n");
    }

    // Exibindo as informações dos territórios cadastrados
    printf("\n------Territórios cadastrados------\n");
    for(int i = 0; i < MAX_TERRITORIOS; i++){
        printf("\n");
        printf("Território %d:\n", i+1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor: %s\n", territorios[i].cor);
        printf("Numero de tropas: %d\n\n", territorios[i].tropas);
    }

    return 0;
}