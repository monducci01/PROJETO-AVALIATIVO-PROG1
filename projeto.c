#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
void limparBuffer(){
    while(getchar() != '\n');
}
int lerinteiro(){
    int valor;
    while(scanf("%d", &valor) != 1){
        printf("Entrada inválida. Digite um número: ");
        limparBuffer();
    }
    return valor;
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int escolhajogo;
    while(1){
        system("cls");
        printf("----------FRISUPA---------\n");
        printf("|1: Perguntas e Respostas|\n");
        printf("|2: Cobra na Caixa       |\n");
        printf("|3: Gousmas War          |\n");
        printf("|4: Sair                 |\n");
		printf("--------------------------\n");
		printf("\n---------- ");
		printf("\n|Resposta: ");
        escolhajogo = lerinteiro();
        if(escolhajogo == 4){
            printf("\nSaindo do jogo...\n");
            break;
        }
        if(escolhajogo < 1 || escolhajogo > 4){
            printf("\nOpção inválida.\n");
            system("pause");
            continue;
        }
        if(escolhajogo == 1){
            int jogar = 1;
            while(jogar == 1){
                int resposta;
                printf("---------------------------------------------------------------\n");
                printf("|AS SEGUINTES PERGUNTAS SERÃO BASEADAS EM CONHECIMENTOS GERAIS|\n");
                printf("---------------------------------------------------------------\n");
                printf("\n1) QUEM PINTOU “A Persistencia da Memoria”?\n");
                printf("\n1) Pablo Picasso\n2) Salvador Dali\n3) Van Gogh\n4) Monet\n");
                printf("\n---------- ");
                printf("\n|Resposta: ");
                resposta = lerinteiro();
                while(resposta < 1 || resposta > 4){
    				printf("Opção inválida. Digite um número entre 1 e 4: ");
    				resposta = lerinteiro();
				}
				if(resposta == 2) printf("\nCORRETO!\n");
                else printf("\nERRADO! Alternativa correta: 2\n");
                printf("\n2) QUAL PAIS TEM MAIS FUSOS?\n");
                printf("\n1) Russia\n2) EUA\n3) Franca\n4) China\n");
                printf("\n---------- ");
                printf("\n|Resposta: ");
                resposta = lerinteiro();
                while(resposta < 1 || resposta > 4){
    				printf("Opção inválida. Digite um número entre 1 e 4: ");
    				resposta = lerinteiro();
				}
				if(resposta == 3) printf("\nCORRETO!\n");
                else printf("\nERRADO! Alternativa correta: 3\n");
                printf("\n3) MAIOR DESERTO?\n");
                printf("\n1) Saara\n2) Arabia\n3) Antartida\n4) Gobi\n");
                printf("\n---------- ");
                printf("\n|Resposta: ");
                resposta = lerinteiro();
                while(resposta < 1 || resposta > 4){
    				printf("Opção inválida. Digite um número entre 1 e 4: ");
    				resposta = lerinteiro();
				}
				if(resposta == 3) printf("\nCORRETO!\n");
                else printf("\nERRADO! Alternativa correta: 3\n");
                printf("\n4) LEIS DO MOVIMENTO PLANETARIO?\n");
                printf("\n1) Kepler\n2) Brahe\n3) Newton\n4) Copernico\n");
                printf("\n---------- ");
                printf("\n|Resposta: ");
                resposta = lerinteiro();
                while(resposta < 1 || resposta > 4){
    				printf("Opção inválida. Digite um número entre 1 e 4: ");
    				resposta = lerinteiro();
				}
				if(resposta == 1) printf("\nCORRETO!\n");
                else printf("\nERRADO! Alternativa correta: 1\n");
                printf("\n5) QUEM ESCREVEU “O CONTRATO SOCIAL”?\n");
                printf("\n1) Locke\n2) Rousseau\n3) Montesquieu\n4) Hobbes\n");
                printf("\n---------- ");
                printf("\n|Resposta: ");
                resposta = lerinteiro();
                while(resposta < 1 || resposta > 4){
    				printf("Opção inválida. Digite um número entre 1 e 4: ");
    				resposta = lerinteiro();
				}
				if(resposta == 2) printf("\nCORRETO!\n");
                else printf("\nERRADO! Alternativa correta: 2\n");
                printf("\n1) Jogar novamente\n2) Menu\nEscolha: ");
                jogar = lerinteiro();
                while(jogar != 1 && jogar != 2){
                    printf("Opção inválida! Digite 1 ou 2: ");
                    jogar = lerinteiro();
                }
            }
        }
        else if(escolhajogo == 2){
            int jogarnovamente = 1;
            while(jogarnovamente == 1){
                int nomep1, nomep2, i;
                char nomes[7][20] = {
                    "Zeus","Hera","Poseidon","Atena","Apolo","Artemis","Afrodite"
                };
                printf("\nJogador 1 escolha:\n");
                for(i = 0; i < 7; i++){
                    printf("(%d) %s\n", i+1, nomes[i]);
                }
                nomep1 = lerinteiro();
                while(nomep1 < 1 || nomep1 > 7){
                    printf("Escolha inválida! Digite 1 a 7: ");
                    nomep1 = lerinteiro();
                }
                printf("\n-----------------\n");
				printf("|Jogador 1: %s|", nomes[nomep1-1]);
                printf("\n-----------------\n");
                printf("\nJogador 2 escolha:\n");
                for(i = 0; i < 7; i++){
                    printf("(%d) %s\n", i+1, nomes[i]);
                }
                nomep2 = lerinteiro();
                while(nomep2 < 1 || nomep2 > 7 || nomep2 == nomep1){
                    printf("Inválido ou repetido. Escolha outro: ");
                    nomep2 = lerinteiro();
                }
                printf("\n-----------------\n");
				printf("|Jogador 2: %s|", nomes[nomep2-1]);
                printf("\n-----------------\n");
                int turno = rand() % 2;
                int botao = rand() % 5 + 1;
                int cobra;
                do{
                    cobra = rand() % 5 + 1;
                } while(cobra == botao);
                int caixas[6] = {0,0,0,0,0,0};
                int caixaescolhida;
                int fim = 0;
                while(!fim){
                    printf("\n==================================\n");
                    if(turno == 0)
                        printf("Vez de %s\n", nomes[nomep1-1]);
                    else
                        printf("Vez de %s\n", nomes[nomep2-1]);
                    printf("Escolha uma caixa (1 a 5): ");
                    caixaescolhida = lerinteiro();
                    while(caixaescolhida < 1 || caixaescolhida > 5 || caixas[caixaescolhida] == 1){
                        if(caixaescolhida < 1 || caixaescolhida > 5)
                            printf("Caixa inválida! Escolha 1 a 5: ");
                        else
                            printf("Caixa já aberta! Escolha outra: ");
                        caixaescolhida = lerinteiro();
                    }
                    caixas[caixaescolhida] = 1;
                    if(caixaescolhida == botao){
                        printf("\n>>> BOTAO! VOCE VENCEU!\n");
                        if(turno == 0)
                            printf("Vencedor: %s\n", nomes[nomep1-1]);
                        else
                            printf("Vencedor: %s\n", nomes[nomep2-1]);
                        fim = 1;
                    }
                    else if(caixaescolhida == cobra){
                        printf("\n>>> COBRA! VOCE PERDEU!\n");
                        if(turno == 0)
                            printf("Perdedor: %s\n", nomes[nomep1-1]);
                        else
                            printf("Perdedor: %s\n", nomes[nomep2-1]);
                        fim = 1;
                    }
                    else{
                        printf("\nCaixa vazia...\n");
                        turno = 1 - turno;
                    }
                }
                printf("\n1) Jogar novamente\n2) Menu\nEscolha: ");
                jogarnovamente = lerinteiro();
                while(jogarnovamente != 1 && jogarnovamente != 2){
                    printf("Opção inválida! Digite 1 ou 2: ");
                    jogarnovamente = lerinteiro();
                }
            }
        }
        else if(escolhajogo == 3){
            int jogarnovamente = 1;
            while(jogarnovamente == 1){
                int g1[2] = {1,1};
                int g2[2] = {1,1};
                int turno = rand() % 2;
                int acao, origem, alvo, valor;
                int fim = 0;
                while(!fim){
                    printf("\n============================\n");
                    printf("Jogador 1: G1(%d) G2(%d)\n", g1[0], g1[1]);
                    printf("Jogador 2: G1(%d) G2(%d)\n", g2[0], g2[1]);
                    if(turno == 0) printf("\nVez do Jogador 1\n");
                    else printf("\nVez do Jogador 2\n");
                    printf("1) Atacar\n2) Dividir\nEscolha: ");
                    acao = lerinteiro();
                    while(acao != 1 && acao != 2){
                        printf("Opção inválida! Escolha 1 ou 2: ");
                        acao = lerinteiro();
                    }
                    if(acao == 1){
                        if(turno == 0){
                            printf("Escolha sua Gousma (1 ou 2): ");
                            origem = lerinteiro() - 1;
                            while(origem < 0 || origem > 1 || g1[origem] <= 0){
                                printf("Inválido! Escolha 1 ou 2: ");
                                origem = lerinteiro() - 1;
                            }
                            printf("Escolha alvo inimigo (1 ou 2): ");
                            alvo = lerinteiro() - 1;
                            while(alvo < 0 || alvo > 1 || g2[alvo] <= 0){
                                printf("Inválido! Escolha 1 ou 2: ");
                                alvo = lerinteiro() - 1;
                            }
                            g2[alvo] += g1[origem];
                        }
                        else{
                            printf("Escolha sua Gousma (1 ou 2): ");
                            origem = lerinteiro() - 1;
                            while(origem < 0 || origem > 1 || g2[origem] <= 0){
                                printf("Inválido! Escolha 1 ou 2: ");
                                origem = lerinteiro() - 1;
                            }
                            printf("Escolha alvo inimigo (1 ou 2): ");
                            alvo = lerinteiro() - 1;
                            while(alvo < 0 || alvo > 1 || g1[alvo] <= 0){
                                printf("Inválido! Escolha 1 ou 2: ");
                                alvo = lerinteiro() - 1;
                            }
                            g1[alvo] += g2[origem];
                        }
                    }
                    else{
                        if(turno == 0){
                            printf("Escolha Gousma doadora (1 ou 2): ");
                            origem = lerinteiro() - 1;
                            while(origem < 0 || origem > 1 || g1[origem] <= 1){
                                printf("Inválida! Escolha novamente: ");
                                origem = lerinteiro() - 1;
                            }
                            printf("Escolha Gousma receptora (1 ou 2): ");
                            alvo = lerinteiro() - 1;
                            while(alvo < 0 || alvo > 1 || alvo == origem){
                                printf("Inválida! Escolha outra: ");
                                alvo = lerinteiro() - 1;
                            }
                            printf("Quanto transferir: ");
                            valor = lerinteiro();
                            while(valor < 1 || valor >= g1[origem]){
                                printf("Valor inválido! Digite novamente: ");
                                valor = lerinteiro();
                            }
                            g1[origem] -= valor;
                            g1[alvo] += valor;
                        }
                        else{
                            printf("Escolha Gousma doadora (1 ou 2): ");
                            origem = lerinteiro() - 1;
                            while(origem < 0 || origem > 1 || g2[origem] <= 1){
                                printf("Inválida! Escolha novamente: ");
                                origem = lerinteiro() - 1;
                            }
                            printf("Escolha Gousma receptora (1 ou 2): ");
                            alvo = lerinteiro() - 1;
                            while(alvo < 0 || alvo > 1 || alvo == origem){
                                printf("Inválida! Escolha outra: ");
                                alvo = lerinteiro() - 1;
                            }
                            printf("Quanto transferir: ");
                            valor = lerinteiro();
                            while(valor < 1 || valor >= g2[origem]){
                                printf("Valor inválido! Digite novamente: ");
                                valor = lerinteiro();
                            }
                            g2[origem] -= valor;
                            g2[alvo] += valor;
                        }
                    }
                    int i = 0;
                    while(i < 2){
                        if(g1[i] > 5){
                            printf("Gousma %d do Jogador 1 destruida!\n", i+1);
                            g1[i] = 0;
                        }
                        if(g2[i] > 5){
                            printf("Gousma %d do Jogador 2 destruida!\n", i+1);
                            g2[i] = 0;
                        }
                        i++;
                    }
                    if(g1[0] == 0 && g1[1] == 0){
                        printf("\nJogador 2 venceu!\n");
                        fim = 1;
                    }
                    else if(g2[0] == 0 && g2[1] == 0){
                        printf("\nJogador 1 venceu!\n");
                        fim = 1;
                    }
                    turno = 1 - turno;
                }
                printf("\n1) Jogar novamente\n2) Menu\nEscolha: ");
                jogarnovamente = lerinteiro();
                while(jogarnovamente != 1 && jogarnovamente != 2){
                    printf("Opção inválida! Digite 1 ou 2: ");
                    jogarnovamente = lerinteiro();
                }
            }
        }
    }

    return 0;
}
