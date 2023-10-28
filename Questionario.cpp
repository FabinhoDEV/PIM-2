#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para armazenar as respostas do questionário
struct Resposta {
    char pergunta[100];
    char resposta[100];
};

// Função para verificar se a resposta é válida
int respostaValida(char resposta) {
    return (resposta == 'a' || resposta == 'b' || resposta == 'c' || resposta == 'd');
}

// Função para exibir uma pergunta com suas alternativas
void exibirPergunta(int exposicao, int pergunta) {
    switch (exposicao) {
        case 1:
            switch (pergunta) {
                case 1:
                    printf("1- Quando comecou o movimento da arte moderna e qual foi seu marco inicial?\n");
                    printf("a) Aproximadamente no final do seculo 18\n");
                    printf("b) Aproximadamente no final do seculo 19**\n");
                    printf("c) Aproximadamente no final do seculo 20\n");
                    printf("d) Aproximadamente no final do seculo 21\n");
                    break;
                case 2:
                    printf("2- Quem sao alguns dos artistas mais influentes associados a arte moderna?\n");
                    printf("a) Alberto Giacometti e Andre Breton\n");
                    printf("b) Antonin Artaud e Dora Maar\n");
                    printf("c) Marc Chagall e Paul Klee\n");
                    printf("d) Pablo Picasso e Salvador Dali**\n");
                    break;
                case 3:
                    printf("3- Quais sao algumas das caracteristicas distintivas da arte moderna?\n");
                    printf("a) Surrealismo e expressionismo\n");
                    printf("b) Musicas e artes\n");
                    printf("c) Rejeição da tradicao, uso de tecnologia e midias**\n");
                    printf("d) Partidos politicos e politica\n");
                    break;
                case 4:
                    printf("4- Qual foi o impacto da arte moderna no mundo da arte e na sociedade em geral ao longo de seus 100 anos de existencia?\n");
                    printf("a) A arte moderna abriu caminho para uma diversidade de estilos**\n");
                    printf("b) A arte moderna foi um fenomeno de curta duracao\n");
                    printf("c) A arte moderna teve um impacto negativo na sociedade\n");
                    printf("d) A influencia da arte moderna foi estritamente regional\n");
                    break;
            }
            break;
        case 2:
            switch (pergunta) {
                case 1:
                    printf("1- O que e o hip-hop?\n");
                    printf("a) O hip-hop e uma dieta extrema.\n");
                    printf("b) O hip-hop e uma forma de dança que se originou na Idade Media e era executada por cavaleiros em armaduras.\n");
                    printf("c) E uma forma de expressao artistica que abrange diversos elementos, incluindo: musica, danca, arte visual e girias.**\n");
                    printf("d) O hip-hop e um esporte de inverno praticado nas montanhas do Himalaia, onde os atletas esquiam usando patins de gelo.\n");
                    break;
                case 2:
                    printf("2- Qual a figura mais influente na historia do hip-hop?\n");
                    printf("a) Tupac Shakur\n");
                    printf("b) The Notorious B.I.G\n");
                    printf("c) Afrika Bambaataa\n");
                    printf("d) DJ Kool Herc, conhecido como pai do hip-hop**\n");
                    break;
                case 3:
                    printf("3- Como o hip-hop se tornou um fenomeno global?\n");
                    printf("a) O hip-hop se tornou um fenomeno global apos um acordo de paz historico em 1992, no qual lideres de todo o mundo adotaram o hip-hop como uma linguagem universal para resolver conflitos internacionais.\n");
                    printf("b) O hip-hop se tornou globalmente popular quando uma empresa de fast food lançou o 'Burger Rap', um sanduiche que cantava rap em vez de ser comido, atraindo a atenção de pessoas de todo o mundo.\n");
                    printf("c) Gracas a filmes sobre a cultura, musica e movimentos politicos e sociais.**\n");
                    printf("d) O hip-hop se espalhou globalmente quando um astronauta americano tocou uma batida de hip-hop em uma estacao espacial, fazendo com que alienigenas de outros planetas se apaixonassem pelo genero e o levassem de volta aos seus mundos.\n");
                    break;
                case 4:
                    printf("4- Quais sao alguns dos elementos essenciais da cultura hip-hop, alem da musica?\n");
                    printf("a) O grafite, dança, batalha de rap e moda.**\n");
                    printf("b) O grafite, pintura a oleo, ballet e trico.\n");
                    printf("c) O futebol, basquete, beisebol e natacao.\n");
                    printf("d) A politica, religiao, culinaria e jardinagem.\n");
                    break;
            }
            break;
        case 3:
            switch (pergunta) {
                case 1:
                    printf("1- Quem foi Santos Dumont?\n");
                    printf("a) Cientista da culinaria\n");
                    printf("b) Explorador do espaço\n");
                    printf("c) Jogador de futebol\n");
                    printf("d) Alberto Santos Dumont foi um aeronauta e inventor brasileiro**\n");
                    break;
                case 2:
                    printf("2- Qual foi o maior feito dele?\n");
                    printf("a) O primeiro ser humano a escalar o Monte Everest\n");
                    printf("b) Foi o voo bem-sucedido do 14-Bis**\n");
                    printf("c) O primeiro a viajar no tempo\n");
                    printf("d) Fez o primeiro foguete tripulado\n");
                    break;
                case 3:
                    printf("3- Como o legado de Santos Dumont influenciou o desenvolvimento da aviacao moderna?\n");
                    printf("a) Ele foi o primeiro a criar uma aeronave que funcionava a base de baloes de festa cheios de helio, o que se tornou a base da aviação moderna\n");
                    printf("b) Santos Dumont é conhecido por ter inventado a maquina do tempo, que permitiu que os aviadores modernos viajassem no tempo\n");
                    printf("c) Santos Dumont era famoso por usar roupas espaciais futuristas e capacetes a jato, inspirando assim o traje dos astronautas na era espacial\n");
                    printf("d) Santos Dumont provou que o voo controlado de uma aeronave mais pesada do que o ar era possivel**\n");
                    break;
                case 4:
                    printf("4- Onde e quando Santos Dumont realizou seu voo mais significativo?\n");
                    printf("a) Foi na França, em Paris**\n");
                    printf("b) Foi na Belgica\n");
                    printf("c) No Brasil\n");
                    printf("d) Nos Estados Unidos\n");
                    break;
            }
            break;
        case 4:
            switch (pergunta) {
                case 1:
                    printf("1- Você sabe qual e a edicao dessa Olimpiadas?\n");
                    printf("a) Edicao 32\n");
                    printf("b) Edicao 33**\n");
                    printf("c) Edicao 34\n");
                    printf("d) Edicao 35\n");
                    break;
                case 2:
                    printf("2- Quais sao os novos esportes que estarão presentes nas olimpiadas de paris?\n");
                    printf("a) Breaking Dance e Escalada esportiva**\n");
                    printf("b) Breaking Dance e Skate\n");
                    printf("c) Surfe e Futebol\n");
                    printf("d) Badminton e Esgrima\n");
                    break;
                case 3:
                    printf("3- Quando acontecera as olimpiadas de 2024?\n");
                    printf("a) Começo de julho de 2024, ate meio de agosto de 2024\n");
                    printf("b) Meio de julho de 2024, ate final de agosto de 2024\n");
                    printf("c) Final de julho de 2024, ate meio de agosto de 2024**\n");
                    printf("d) Final de julho de 2024, ate final de agosto de 2024\n");
                    break;
                case 4:
                    printf("4- Quando sera a abertura??\n");
                    printf("a) 26 de julho**\n");
                    printf("b) 27 de julho\n");
                    printf("c) 28 de julho\n");
                    printf("d) 29 de julho\n");
                    break;
            }
            break;
    }
}

int main() {
    // Abrir o arquivo CSV para escrita
    FILE *arquivoCSV = fopen("respostas.csv", "w");
    if (arquivoCSV == NULL) {
        printf("Erro ao abrir o arquivo CSV.\n");
        return 1;
    }

    int exposicao, pergunta;
    char resposta;

    printf("Escolha uma exposicao:\n");
    printf("1- 100 Anos da Semana de Arte Moderna\n");
    printf("2- Hip Hop: A Cultura de Rua\n");
    printf("3- 150 Anos de Santos Dumont\n");
    printf("4- Jogos Olimpicos de Paris 2024\n");
    printf("Sua escolha: ");
    scanf("%d", &exposicao);

    if (exposicao < 1 || exposicao > 4) {
        printf("Escolha invalida.\n");
        fclose(arquivoCSV);
        return 1;
    }

    for (pergunta = 1; pergunta <= 4; pergunta++) {
        exibirPergunta(exposicao, pergunta);
        printf("Sua resposta: ");
        scanf(" %c", &resposta);

        // Verificar a validade da resposta
        if (!respostaValida(resposta)) {
            printf("Resposta invalida.\n");
            resposta = 'i'; // Opção inválida
        } else {
            // Armazenar a pergunta e resposta no arquivo CSV
            struct Resposta r;
            sprintf(r.pergunta, "Pergunta %d", pergunta);
            r.resposta[0] = resposta;
            r.resposta[1] = '\0';
            fprintf(arquivoCSV, "%s,%s\n", r.pergunta, r.resposta);

            // Verificar se a resposta está correta
            if (exposicao == 1 && pergunta == 2) {
                if (resposta == 'd') {
                    printf("Correto!\n");
                } else {
                    printf("Incorreto. A resposta correta e: d\n");
                }
            } else if (exposicao == 2 && pergunta == 2) {
                if (resposta == 'd') {
                    printf("Correto!\n");
                } else {
                    printf("Incorreto. A resposta correta e: d\n");
                }
            } else if (exposicao == 3 && pergunta == 2) {
                if (resposta == 'b') {
                    printf("Correto!\n");
                } else {
                    printf("Incorreto. A resposta correta e: b\n");
                }
            } else if (exposicao == 4 && pergunta == 1) {
                if (resposta == 'b') {
                    printf("Correto!\n");
                } else {
                    printf("Incorreto. A resposta correta e: b\n");
                }
            } else {
                printf("Correto!\n"); // Adicione mais verificações de respostas corretas conforme necessário
            }
        }
    }

    // Fechar o arquivo CSV
    fclose(arquivoCSV);

    return 0;
}