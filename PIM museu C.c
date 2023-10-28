#include <stdio.h>
#include <stdlib.h>

// Define as constantes para os tipos de ingresso
#define INTEIRO 1
#define MEIA 2
#define ISENTO 3

// Define as constantes para as salas de cinema
#define SALA_ARTE_MODERNA 1
#define SALA_HIP_HOP 2
#define SALA_SANTOS_DRUMONT 3
#define SALA_OLIMPIADAS_2024 4
#define TODAS_SALAS 5

// Define as constantes para os métodos de pagamento
#define CREDITO 1
#define DEBITO 2
#define DINHEIRO 3
#define PIX 4

// Define os preços dos ingressos
#define PRECO_INTEIRA 12.00
#define PRECO_MEIA (PRECO_INTEIRA / 2.0)
#define PRECO_ISENTO 0.00

// Estrutura para um ingresso
typedef struct {
    int tipo;
    float preco;
} TipoIngresso;

// Estrutura para um ingresso selecionado
typedef struct {
    TipoIngresso ingresso;
    int sala;
} IngressoSelecionado;

// Função para exibir as salas de cinema disponíveis
void mostrar_salas_disponiveis() {
    printf("Selecione a sala:\n");
    printf("%d - Sala 100 anos da semana de Arte Moderna\n", SALA_ARTE_MODERNA);
    printf("%d - Sala Hip Hop\n", SALA_HIP_HOP);
    printf("%d - Sala 150 anos de Santos Drumont\n", SALA_SANTOS_DRUMONT);
    printf("%d - Sala Olimpiadas de Paris 2024\n", SALA_OLIMPIADAS_2024);
    printf("%d - Todas as salas\n", TODAS_SALAS);
}

// Função para exibir os tipos de ingresso disponíveis, incluindo os valores
void mostrar_tipos_ingresso() {
    printf("Selecione o tipo de ingresso:\n");
    printf("%d - Inteira | Preco: R$%.2f\n", INTEIRO, PRECO_INTEIRA);
    printf("%d - Meia | Preco: R$%.2f\n", MEIA, PRECO_MEIA);
    printf("%d - Gratis | Preco: R$%.2f\n", ISENTO, PRECO_ISENTO);
}

// Função para exibir os métodos de pagamento disponíveis
void mostrar_metodos_pagamento() {
    printf("Selecione o metodo de pagamento:\n");
    printf("%d - Credito\n", CREDITO);
    printf("%d - Debito\n", DEBITO);
    printf("%d - Dinheiro\n", DINHEIRO);
    printf("%d - Pix\n", PIX);
}

// Função para lidar com seleções inválidas
void opcao_invalida() {
    printf("Opcao invalida\n");
    while (getchar() != '\n'); // Limpa o buffer de entrada
}

// Função para comprar um ingresso individual
void comprar_ingresso(IngressoSelecionado *ingresso) {
    printf("------------------------------\n");
    printf("Bem-vindo a compra de ingressos\n");
    printf("------------------------------\n");

    int opcao;

    do {
        mostrar_salas_disponiveis();
        scanf("%d", &opcao);

        if (opcao < SALA_ARTE_MODERNA || opcao > TODAS_SALAS) {
            opcao_invalida();
        }
    } while (opcao < SALA_ARTE_MODERNA || opcao > TODAS_SALAS);

    ingresso->sala = opcao;

    do {
        mostrar_tipos_ingresso();
        scanf("%d", &opcao);

        if (opcao < INTEIRO || opcao > ISENTO) {
            opcao_invalida();
        }
    } while (opcao < INTEIRO || opcao > ISENTO);

    ingresso->ingresso.tipo = opcao;

    float preco_ingresso;

    switch (ingresso->ingresso.tipo) {
        case INTEIRO:
            preco_ingresso = PRECO_INTEIRA;
            break;
        case MEIA:
            preco_ingresso = PRECO_MEIA;
            break;
        case ISENTO:
            preco_ingresso = PRECO_ISENTO;
            break;
    }

    if (ingresso->sala == TODAS_SALAS) {
        preco_ingresso *= 4; // Preço para todas as salas
    }

    ingresso->ingresso.preco = preco_ingresso;
}

// Função para gerar um resumo da compra
void mostrar_resumo(const IngressoSelecionado *ingresso, const char *pagamento) {
    printf("------------------------------\n");
    printf("Nota do ingresso:\n");
    printf("------------------------------\n");
    printf("Sala: ");
    switch (ingresso->sala) {
        case SALA_ARTE_MODERNA:
            printf("Sala 100 anos da semana de Arte Moderna\n");
            break;
        case SALA_HIP_HOP:
            printf("Sala Hip Hop\n");
            break;
        case SALA_SANTOS_DRUMONT:
            printf("Sala 150 anos de Santos Drumont\n");
            break;
        case SALA_OLIMPIADAS_2024:
            printf("Sala Olimpiadas de Paris 2024\n");
            break;
        case TODAS_SALAS:
            printf("Todas as salas\n");
            break;
    }

    printf("Tipo de Ingresso: ");
    switch (ingresso->ingresso.tipo) {
        case INTEIRO:
            printf("Inteira\n");
            break;
        case MEIA:
            printf("Meia\n");
            break;
        case ISENTO:
            printf("Gratis\n");
            break;
    }

    printf("Preco: R$ %.2f\n", ingresso->ingresso.preco);
    printf("Metodo de pagamento: %s\n", pagamento);
    printf("------------------------------\n\n");
}

// Função para salvar a nota da compra em um arquivo CSV
void salvar_nota_compra(const IngressoSelecionado *ingresso, const char *pagamento) {
    FILE *arquivo;
    arquivo = fopen("compras.csv", "a"); // Abre o arquivo no modo de anexação

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de compras.\n");
        return;
    }

    fprintf(arquivo, "%d,%d,%.2f,%s\n", ingresso->sala, ingresso->ingresso.tipo, ingresso->ingresso.preco, pagamento);

    fclose(arquivo);
}

int main() {
    int opcao_principal;

    while (1) {
        printf("Escolha uma opcao:\n");
        printf("1 - Comprar ingressos\n");
        printf("2 - Sair\n");

        scanf("%d", &opcao_principal);

        if (opcao_principal == 1) {
            int quantidade_ingressos;
            printf("Quantos ingressos voce quer comprar?\n");
            scanf("%d", &quantidade_ingressos);

            if (quantidade_ingressos <= 0) {
                printf("Voltando para o menu principal...\n");
                continue;
            }

            IngressoSelecionado ingressos[quantidade_ingressos];

            for (int i = 0; i < quantidade_ingressos; i++) {
                comprar_ingresso(&ingressos[i]);
                const char *pagamento;

                mostrar_metodos_pagamento();
                int metodo_pagamento;

                do {
                    scanf("%d", &metodo_pagamento);

                    if (metodo_pagamento < CREDITO || metodo_pagamento > PIX) {
                        opcao_invalida();
                    }
                } while (metodo_pagamento < CREDITO || metodo_pagamento > PIX);

                switch (metodo_pagamento) {
                    case DINHEIRO:
                        pagamento = "Dinheiro";
                        break;
                    case CREDITO:
                        pagamento = "Credito";
                        break;
                    case DEBITO:
                        pagamento = "Debito";
                        break;
                    case PIX:
                        pagamento = "Pix";
                        break;
                }

                mostrar_resumo(&ingressos[i], pagamento);
                salvar_nota_compra(&ingressos[i], pagamento);
            }
            // Implemente o código para gerar um relatório aqui
        } else if (opcao_principal == 2) {
            printf("Saindo do programa...\n");
            break;
        } else {
            opcao_invalida();
        }
    }

    return 0;
}
