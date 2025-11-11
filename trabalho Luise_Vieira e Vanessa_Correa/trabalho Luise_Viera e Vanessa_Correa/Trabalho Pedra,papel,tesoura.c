#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("=============================================================================================================================================================\n");
    printf("                                                          BEM-VINDO AO JOGO PEDRA, PAPEL E TESOURA!         \n");
    printf("=============================================================================================================================================================\n\n");
    printf("O jogo Pedra,Papel,Tesoura tem como objetivo adivinhar qual posição de mão o seu oponente irá mostrar,para que você possa apresentar aquela que vencerá    \n");
    printf("=================================================================      REGRAS     ===========================================================================\n");
    printf("                                                 Papel ganha da pedra (papel pode embrulhar a pedra) \n");
    printf("                                                 Pedra ganha da tesoura (pedra pode amassar a tesoura) \n");
    printf("                                                 Tesoura ganha do papel (tesoura pode cortar o papel) \n");
    system("pause");
    system("cls");
    int modo, J1, J2, V1 = 0, V2 = 0, Empate = 0, opfinal;
    float jogadas;
    char nome1[50], nome2[50];
    do
    {
        system("cls");
        printf("Escolha o modo de jogo:\n");
        printf("1-Jogador X Jogador\n");
        printf("2-Jogador X Máquina\n");
        scanf("%d", &modo);

        if (modo == 1)
        {
            system("cls");
            printf("Modo de jogo: Jogador X Jogador selecionado\n");
            printf("Digite o nome do 1° jogador: ");
            scanf("%s", nome1);

            printf("Digite o nome do 2° jogador: ");
            scanf("%s", nome2);

            printf("Melhor de quantas? ");
            scanf("%f", &jogadas);

            do
            {
                system("cls");
                printf("1-Pedra");
                printf("\n2-Papel");
                printf("\n3-Tesoura");

                printf("\n%s, insira sua jogada: ", nome1);
                scanf("%d", &J1);
                system("cls");

                printf("1-Pedra");
                printf("\n2-Papel");
                printf("\n3-Tesoura");

                printf("\n%s, insira sua jogada: ", nome2);
                scanf("%d", &J2);

                system("cls");
                if (J1 == 1 && J2 == 3)
                {
                    V1 = V1 + 1;
                    printf("                  ######                                                            MM                                  \n");
                    printf("              ####      ########                              ##MM##::          ##########                              \n");
                    printf("   ############        ##    ####                            mm    ##############      ####                            \n");
                    printf(" mm##          ##    ::##      ##MM                        ##mm                ##      ::  ##########                  \n");
                    printf(" MM##          ##    ####      ##                            ##                ####    ##          ##                  \n");
                    printf(" MM##        ##      ##++########                            ++############      ##    ##--        ##                  \n");
                    printf(" MM##        ##    --##        --##                                      mm########      ##        ##                  \n");
                    printf(" MM##    ######    ##          MM##                            ############@@    ####    ##        ##                  \n");
                    printf(" MM##  mm##  ####################                            ##                    ##    ######@@  ##                  \n");
                    printf(" MM##        ##              ####                          ##::                --##########        ##                  \n");
                    printf(" MM##        ##--              ##                            ##    MM############        ##        ##                  \n");
                    printf(" MM##      ################  ####                            ########    ####          ######      ##                  \n");
                    printf(" MM##      ##            ..####                                          ##        ####..  ##      ##                  \n");
                    printf("  ##########              mm##                                          ##    ####        ..##    ##                  \n");
                    printf("            ########mm    ##                                              ####            ##########                  \n");
                    printf("                   ########                                              ##          ####                             \n");
                    printf("                                                                            ##  --####                                 \n");
                    printf("                                                                             ######                                     \n");

                    printf("\n\nJogador %s ganhou!", nome1);
                }
                else if (J1 == 2 && J2 == 1)
                {
                    V1 = V1 + 1;
                    printf("\n                  ##mm                                                                              ");
                    printf("\n                ##  ####                                                                           ");
                    printf("\n              ##      ##                                                                            ");
                    printf("\n            ##      --##                                                        ##                  ");
                    printf("\n          ##      ..##                                                      ####++####              ");
                    printf("\n  ########        ##    ################                            ##########        ####------    ");
                    printf("\n##              ##########            ##                            ##      ##::    ##  ############");
                    printf("\n##            ####                    ##                            ##        ##    ##            ##");
                    printf("\n##            ##              MM########                            ############      ##          ##");
                    printf("\n##            ##      ##########                                    ##--      ##::    ##          ##");
                    printf("\n##          ::##              MM##########                          ##          ##    ##          ##");
                    printf("\n##            ##      ##########                                    ##--      ##::    ##          ##");
                    printf("\n##          ::##              MM##########                          ##          ##    ##          ##");
                    printf("\n##      ######                          ##                          ##    ..######    ########    ##");
                    printf("\n##                    ..                ##                          ########      ######          ##");
                    printf("\n##                    ####################                          ##                ##          ## ");
                    printf("\n##                        ::####                                    MM##        ########@@        mm");
                    printf("\n##                              ######                                ##########::      ##        ## ");
                    printf("\n##########--        ####            ##..                                ##              ##        ## ");
                    printf("\n          ####        ########      ##..                                ##          --####@@@@####   ");
                    printf("\n            ####        ##########::##                                  ##############                        ");
                    printf("\n                ##        ####    ##                                                                ");
                    printf("\n                  ####    @@##                                                                      ");
                    printf("\n                    ####--##                                                                        ");
                    printf("\n                      ::##                                                                          ");
                    printf("Jogador %s ganhou!", nome1);
                }
                else if (J1 == 3 && J2 == 2)
                {
                    V1 = V1 + 1;
                    printf("\n                                                                                ########                ");
                    printf("\n                                                                                ##    @@##              ");
                    printf("\n                                                                                ##      ####            ");
                    printf("\n                 ######                                                            ##      ####          ");
                    printf("\n             ####      ##  ################                      ##############..    ##      ##########  ");
                    printf("\n  ##########          ####MM            ##                      ##          ++##########      MMMMMMMM## ");
                    printf("\n##            ##    ##                  ##                      ##                    ##              ## ");
                    printf("\n##          ##--    ##          ##########                      ########                ##            ##");
                    printf("\n##          ##      ############--                                    ############      ##            ##");
                    printf("\n##          ##    ##  ####mm########                          ############::            ##            ##");
                    printf("\n##      ######    ##              MM######                    ##                          ######      ##");
                    printf("\n##    ##    ######mm::                  ##                    ##                                      ##");
                    printf("\n##          ##      ##########          ##                    ####################                    ## ");
                    printf("\n##          ##          ####++############                              ######                        ##");
                    printf("\n##        ##..mm##          ##                                    mm####                              ##");
                    printf("\n##      ##        ####      ##                                  MM##            ####        mm##########");
                    printf("\n@@########..          ######                                    ##MM      ########        ####          ");
                    printf("\n          ####..        ##                                        ##  ##########        ####              ");
                    printf("\n              ####--    ##                                          ##    ####        ##                  ");
                    printf("\n                  ########                                                ##      ####                  ");
                    printf("\n                                                                              ####                       ");
                    printf("\n\nJogador %s ganhou!", nome1);
                }
                else if (J1 == 3 && J2 == 1)
                {
                    V2 = V2 + 1;
                    printf("\n          ######            ##                                ######          ");
                    printf("\n MMMMMM##      ##########    ##                      mm######      ####MMMMMM       ");
                    printf("\n##        ##                  ##                      ##      ##    ##        ##          ");
                    printf("\n##      ##    ##        ########                      ##    ####    ##        ##");
                    printf("\n##      ##    ####mm@@                                ####    --    ##        ##");
                    printf("\n##      ##            ########mm                      ##        ##    ++      ##");
                    printf("\n##  ##  ####mmmm              ##                      ################  ##    ##");
                    printf("\n##      ##      ########      ##                        ##          ##        ##");
                    printf("\n##    ####mm        ##    ####                          ##      ########      ##");
                    printf("\n##    MM    ####    ##                                  ######        ##      ##");
                    printf("\n####mmmm        ######                                                ##mm####");
                    printf("\n####      ##                                              ############");
                    printf("\n####  ##                                                  ");
                    printf("\nJogador %s ganhou!", nome2);
                }
                else if (J1 == 1 && J2 == 2)
                {
                    V2 = V2 + 1;
                    printf("\n                                                              ####                ");
                    printf("\n                                                            ##    ##              ");
                    printf("\n             ####                                            ##--    ##              ");
                    printf("\n         ####    ######mm                        ######MM      ##..    ##           ");
                    printf("\n########        mm    ##                        ##        ########      ######++ ");
                    printf("\n##      ::    ##      ##                        ##                ##          ## ");
                    printf("\n##      ##    ##  ######                        ::##########      ##          ##   ");
                    printf("\n##      ##    MM      ##                      ############MM      ##          ##");
                    printf("\n##  ######..########  ##                      ##                    ####      ##");
                    printf("\n##      ##          ..##                      ##      --######                ## ");
                    printf("\n##      ####          ##                        ##mm  @@####                  ##");
                    printf("\n##    ##      ########                            ++##                        ## ");
                    printf("\n##++++##            ##                          ##        --####      ########    ");
                    printf("\n        ########    @@                          ##    ########      ##                ");
                    printf("\n                                                   ####  ##      ####               ");
                    printf("\n                                                        ##    ##--                 ");
                    printf("\n                                                          ####                  ");
                    printf("\n\nJogador %s ganhou!", nome2);
                }
                else if (J1 == 2 && J2 == 3)
                {
                    V2 = V2 + 1;
                    printf("\n              ##                                                                 ");
                    printf("\n            ##  ##                                                              ");
                    printf("\n          ##    ##                                              ..              ");
                    printf("\n         ##    ##                                ######::      ##  ####           ");
                    printf("\n ########    ##--##############                mm        mm####++      ########  ");
                    printf("\n##          ##                mm              ##              ##    ##        ## ");
                    printf("\n##        ##              ####                  ##########@@  ##    ##        ##");
                    printf("\n##      ####                  ##              ######            ##    ####    ## ");
                    printf("\n##                            ##              ##              ########        ##");
                    printf("\n##              ################              ##  ############                ## ");
                    printf("\n##                    ####                              ##        ######      ##");
                    printf("\n##            ##@@        ####                          ##    ####      ##    ## ");
                    printf("\n        ##      ######      ##                            ####        ########  ");
                    printf("\n          ##      ############                            ##      ####          ");
                    printf("\n            ####    ##                                      ######               ");
                    printf("\n              MMmm  ##                                                          ");
                    printf("\n                  ##                                                            ");
                    printf("\n\nJogador %s ganhou!", nome2);
                }

                else if (J1 == 1 && J2 == 1)
                {
                    Empate = Empate + 1;
                    printf("\n                 ######                                                                          ");
                    printf("\n            ####      ########                                            ########              ");
                    printf("\n  ##########        --##    ++##                                  ##########    ++##@@          ");
                    printf("\n ##            ##    ##        ##                                ##        ##        ############");
                    printf("\n##          ##      ####++    ##                                ##        ##      ##          ##");
                    printf("\n##          ##      ####++    ##                                ##        ##      ##          ##");
                    printf("\n##          ##    ..##  ########                                ####..######..    ##          ## ");
                    printf("\n##          ##    ##          ##                                ######      ##    ##          ##");
                    printf("\n##    @@######    ##          ##                                ##          ##      ##        ##");
                    printf("\n##          ####################                                ##        ####..  ########    ##");
                    printf("\n##          ##              ##                                    ##########  ######          ##");
                    printf("\n##          ####            ##                                    ##              ##          ##");
                    printf("\n##        ##    ##############                                    ##          ########        ##");
                    printf("\n##        ##              ##                                      ############mm    ##        MM ");
                    printf("\n  ##########              ##                                        ##              ##--      ##");
                    printf("\n            ##########@@  ##                                        ##            ++####mm++##mm");
                    printf("\n                      ####                                          ################             ");
                    printf("\n\nEmpate!");
                }
                else if (J1 == 2 && J2 == 2)
                {
                    Empate = Empate + 1;
                    printf("\n                ######                                                      ######                ");
                    printf("\n               ####  ####                                                  ..##    ##              ");
                    printf("\n             ####      ##                                                  ##mm      ##            ");
                    printf("\n          ####      ##                                                      ##      --##          ");
                    printf("\n        ####      ##            MM##MM                      ########          ##      ++##        ");
                    printf("\n ##########      ##################  ##--                    ##    MM##############      ##########");
                    printf("\n##            ####--                  ##                  ##@@                    ##            ##");
                    printf("\n##            ##                    ####                    ##                    ##            ##");
                    printf("\n##            ##      ..##############                        ##############      ##            ## ");
                    printf("\n##          ##@@    ####################                  ##################::      ##          ##");
                    printf("\n##      MM####                        ####              --##                        ######      ##");
                    printf("\n##      ##                              ##              ##@@                                    ##");
                    printf("\n##                  ############MM    ####                ##  ##MM############                  ##");
                    printf("\n##                      ######  ########                    ####    ######                      ##");
                    printf("\n##                          ######                            --####                            ##");
                    printf("\n##                ####            ####                      ####            ####                ##");
                    printf("\n############        ######          ##                      ##        --######        ##########@@");
                    printf("\n          mm##        ##########    ##                      ##@@  ##########        ##::          ");
                    printf("\n              ##++      @@##  ######                          ####..  ##mm      @@##              ");
                    printf("\n                  ####      ##                                          ##      ####                ");
                    printf("\n                  ####    ##                                          ####  ####                  ");
                    printf("\n                      mm##                                                                           ");
                    printf("\n\nEmpate!");
                }
                else if (J1 == 3 && J2 == 3)
                {
                    Empate = Empate + 1;
                    printf("                 ####                                                              mm                                \n");
                    printf("            ####    ##      --##########                    MM####mm          ########                              \n");
                    printf("  ############      ##########          ##                ##++    ##############      ####........                  \n");
                    printf("  ##          ..##    ##                  ##                mm                  ##          ##########                \n");
                    printf("  ##          ##      ##            ######mm                ####                ##      ##          ##                \n");
                    printf("  ##          ##    ##@@############++                        ::############++  ####    ##          ##                \n");
                    printf("  ##        --##    ######mm######                                        ##########    ##          ##                \n");
                    printf("  ##      mm##      ##          --########                    ############--      ##      ##        ##                \n");
                    printf("  ##    ####  ####mmMM                    ##                ##mm                  ####  ########    ##                \n");
                    printf("  ##          ##..  mm######++            ##                ##                MM##########          ##                \n");
                    printf("  ##        ####        @@################--                ####  ##############          ##        ##                \n");
                    printf("  ##      ####mm++          ####                              ####++      ##          ######        ##                \n");
                    printf("  ##      ##      ####--    ####                                        ##::      ######    ##      ##                \n");
                    printf(" ##########          ########                                            ##  ####MM        ##      ##                \n");
                    printf("          ####          ##                                              --##::          ##########                  \n");
                    printf("            --####      ##                                                ##        ####                            \n");
                    printf("                 ######mm                                                ####  ####                                \n");
                    printf("                                                                            ####                                    \n");
                    printf("\n\nEmpate!");
                }
                printf("\nVitórias do jogador %s: %d", nome1, V1);
                printf("\nVitórias do jogador %s: %d", nome2, V2);
                printf("\nEmpates de %s com %s: %d\n", nome1, nome2, Empate);
                system("pause");
            } while (V1 < jogadas / 2 && V2 < jogadas / 2);

            system("cls");
            if (V1 > V2)
            {
                printf("Jogador %s ganhou o melhor de %.0f com %d vitórias", nome1, jogadas, V1);
            }
            else
            {
                printf("Jogador %s ganhou o melhor de %.0f com %d vitórias", nome2, jogadas, V2);
            }
            V1 = 0;
            V2 = 0;
            Empate = 0;
        }
        else if (modo == 2)
        {
            system("cls");
            printf("Modo de jogo: Jogador X Máquina selecionado\n");
            printf("Digite o nome do jogador: ");
            scanf("%s", nome1);

            printf("Melhor de quantas? ");
            scanf("%f", &jogadas);

            do
            {
                system("cls");
                printf("1-Pedra");
                printf("\n2-Papel");
                printf("\n3-Tesoura");

                printf("\n%s, insira sua jogada: ", nome1);
                scanf("%d", &J1);
                system("cls");

                printf("1-Pedra");
                printf("\n2-Papel");
                printf("\n3-Tesoura");
                srand(time(NULL)); // Troca de numero aleatorio td vez que passa na linha de codigo
                J2 = rand() % 3 + 1;

                printf("\nJogada da máquina: %d\n", J2);
                system("pause");

                system("cls");
                if (J1 == 1 && J2 == 3)
                {
                    V1 = V1 + 1;
                    printf("                  ######                                                            MM                                  \n");
                    printf("              ####      ########                              ##MM##::          ##########                              \n");
                    printf("   ############        ##    ####                            mm    ##############      ####                            \n");
                    printf(" mm##          ##    ::##      ##MM                        ##mm                ##      ::  ##########                  \n");
                    printf(" MM##          ##    ####      ##                            ##                ####    ##          ##                  \n");
                    printf(" MM##        ##      ##++########                            ++############      ##    ##--        ##                  \n");
                    printf(" MM##        ##    --##        --##                                      mm########      ##        ##                  \n");
                    printf(" MM##    ######    ##          MM##                            ############@@    ####    ##        ##                  \n");
                    printf(" MM##  mm##  ####################                            ##                    ##    ######@@  ##                  \n");
                    printf(" MM##        ##              ####                          ##::                --##########        ##                  \n");
                    printf(" MM##        ##--              ##                            ##    MM############        ##        ##                  \n");
                    printf(" MM##      ################  ####                            ########    ####          ######      ##                  \n");
                    printf(" MM##      ##            ..####                                          ##        ####..  ##      ##                  \n");
                    printf("  ##########              mm##                                          ##    ####        ..##    ##                  \n");
                    printf("            ########mm    ##                                              ####            ##########                  \n");
                    printf("                   ########                                              ##          ####                             \n");
                    printf("                                                                            ##  --####                                 \n");
                    printf("                                                                             ######                                     \n");

                    printf("\n\nJogador %s ganhou!", nome1);
                }
                else if (J1 == 2 && J2 == 1)
                {
                    V1 = V1 + 1;
                    printf("\n                  ##mm                                                                              ");
                    printf("\n                ##  ####                                                                           ");
                    printf("\n              ##      ##                                                                            ");
                    printf("\n            ##      --##                                                        ##                  ");
                    printf("\n          ##      ..##                                                      ####++####              ");
                    printf("\n  ########        ##    ################                            ##########        ####------    ");
                    printf("\n##              ##########            ##                            ##      ##::    ##  ############");
                    printf("\n##            ####                    ##                            ##        ##    ##            ##");
                    printf("\n##            ##              MM########                            ############      ##          ##");
                    printf("\n##            ##      ##########                                    ##--      ##::    ##          ##");
                    printf("\n##          ::##              MM##########                          ##          ##    ##          ##");
                    printf("\n##            ##      ##########                                    ##--      ##::    ##          ##");
                    printf("\n##          ::##              MM##########                          ##          ##    ##          ##");
                    printf("\n##      ######                          ##                          ##    ..######    ########    ##");
                    printf("\n##                    ..                ##                          ########      ######          ##");
                    printf("\n##                    ####################                          ##                ##          ## ");
                    printf("\n##                        ::####                                    MM##        ########@@        mm");
                    printf("\n##                              ######                                ##########::      ##        ## ");
                    printf("\n##########--        ####            ##..                                ##              ##        ## ");
                    printf("\n          ####        ########      ##..                                ##          --####@@@@####   ");
                    printf("\n            ####        ##########::##                                  ##############                        ");
                    printf("\n                ##        ####    ##                                                                ");
                    printf("\n                  ####    @@##                                                                      ");
                    printf("\n                    ####--##                                                                        ");
                    printf("\n                      ::##                                                                          ");
                    printf("\n\nJogador %s ganhou!", nome1);
                }
                else if (J1 == 3 && J2 == 2)
                {
                    V1 = V1 + 1;
                    printf("\n                                                                                ########                ");
                    printf("\n                                                                                ##    @@##              ");
                    printf("\n                                                                                ##      ####            ");
                    printf("\n                 ######                                                            ##      ####          ");
                    printf("\n             ####      ##  ################                      ##############..    ##      ##########  ");
                    printf("\n  ##########          ####MM            ##                      ##          ++##########      MMMMMMMM## ");
                    printf("\n##            ##    ##                  ##                      ##                    ##              ## ");
                    printf("\n##          ##--    ##          ##########                      ########                ##            ##");
                    printf("\n##          ##      ############--                                    ############      ##            ##");
                    printf("\n##          ##    ##  ####mm########                          ############::            ##            ##");
                    printf("\n##      ######    ##              MM######                    ##                          ######      ##");
                    printf("\n##    ##    ######mm::                  ##                    ##                                      ##");
                    printf("\n##          ##      ##########          ##                    ####################                    ## ");
                    printf("\n##          ##          ####++############                              ######                        ##");
                    printf("\n##        ##..mm##          ##                                    mm####                              ##");
                    printf("\n##      ##        ####      ##                                  MM##            ####        mm##########");
                    printf("\n@@########..          ######                                    ##MM      ########        ####          ");
                    printf("\n          ####..        ##                                        ##  ##########        ####              ");
                    printf("\n              ####--    ##                                          ##    ####        ##                  ");
                    printf("\n                  ########                                                ##      ####                  ");
                    printf("\n                                                                              ####                       ");
                    printf("\n\nJogador %s ganhou!", nome1);
                }
                else if (J1 == 3 && J2 == 1)
                {
                    V2 = V2 + 1;
                    printf("\n          ######            ##                                ######          ");
                    printf("\n MMMMMM##      ##########    ##                      mm######      ####MMMMMM       ");
                    printf("\n##        ##                  ##                      ##      ##    ##        ##          ");
                    printf("\n##      ##    ##        ########                      ##    ####    ##        ##");
                    printf("\n##      ##    ####mm@@                                ####    --    ##        ##");
                    printf("\n##      ##            ########mm                      ##        ##    ++      ##");
                    printf("\n##  ##  ####mmmm              ##                      ################  ##    ##");
                    printf("\n##      ##      ########      ##                        ##          ##        ##");
                    printf("\n##    ####mm        ##    ####                          ##      ########      ##");
                    printf("\n##    MM    ####    ##                                  ######        ##      ##");
                    printf("\n####mmmm        ######                                                ##mm####");
                    printf("\n####      ##                                              ############");
                    printf("\n####  ##                                                  ");

                    printf("\n\nMáquina ganhou!");
                }
                else if (J1 == 1 && J2 == 2)
                {
                    V2 = V2 + 1;
                    printf("\n                                                              ####                ");
                    printf("\n                                                            ##    ##              ");
                    printf("\n             ####                                            ##--    ##              ");
                    printf("\n         ####    ######mm                        ######MM      ##..    ##           ");
                    printf("\n########        mm    ##                        ##        ########      ######++ ");
                    printf("\n##      ::    ##      ##                        ##                ##          ## ");
                    printf("\n##      ##    ##  ######                        ::##########      ##          ##   ");
                    printf("\n##      ##    MM      ##                      ############MM      ##          ##");
                    printf("\n##  ######..########  ##                      ##                    ####      ##");
                    printf("\n##      ##          ..##                      ##      --######                ## ");
                    printf("\n##      ####          ##                        ##mm  @@####                  ##");
                    printf("\n##    ##      ########                            ++##                        ## ");
                    printf("\n##++++##            ##                          ##        --####      ########    ");
                    printf("\n        ########    @@                          ##    ########      ##                ");
                    printf("\n                                                   ####  ##      ####               ");
                    printf("\n                                                        ##    ##--                 ");
                    printf("\n                                                          ####                  ");
                    printf("\n\nMáquina ganhou!");
                }
                else if (J1 == 2 && J2 == 3)
                {
                    V2 = V2 + 1;
                    printf("\n              ##                                                                 ");
                    printf("\n            ##  ##                                                              ");
                    printf("\n          ##    ##                                              ..              ");
                    printf("\n         ##    ##                                ######::      ##  ####           ");
                    printf("\n ########    ##--##############                mm        mm####++      ########  ");
                    printf("\n##          ##                mm              ##              ##    ##        ## ");
                    printf("\n##        ##              ####                  ##########@@  ##    ##        ##");
                    printf("\n##      ####                  ##              ######            ##    ####    ## ");
                    printf("\n##                            ##              ##              ########        ##");
                    printf("\n##              ################              ##  ############                ## ");
                    printf("\n##                    ####                              ##        ######      ##");
                    printf("\n##            ##@@        ####                          ##    ####      ##    ## ");
                    printf("\n        ##      ######      ##                            ####        ########  ");
                    printf("\n          ##      ############                            ##      ####          ");
                    printf("\n            ####    ##                                      ######               ");
                    printf("\n              MMmm  ##                                                          ");
                    printf("\n                  ##                                                            ");
                    printf("\n\nMáquina ganhou!");
                }

                else if (J1 == 1 && J2 == 1)
                {
                    Empate = Empate + 1;
                    printf("\n                 ######                                                                          ");
                    printf("\n            ####      ########                                            ########              ");
                    printf("\n  ##########        --##    ++##                                  ##########    ++##@@          ");
                    printf("\n ##            ##    ##        ##                                ##        ##        ############");
                    printf("\n##          ##      ####++    ##                                ##        ##      ##          ##");
                    printf("\n##          ##      ####++    ##                                ##        ##      ##          ##");
                    printf("\n##          ##    ..##  ########                                ####..######..    ##          ## ");
                    printf("\n##          ##    ##          ##                                ######      ##    ##          ##");
                    printf("\n##    @@######    ##          ##                                ##          ##      ##        ##");
                    printf("\n##          ####################                                ##        ####..  ########    ##");
                    printf("\n##          ##              ##                                    ##########  ######          ##");
                    printf("\n##          ####            ##                                    ##              ##          ##");
                    printf("\n##        ##    ##############                                    ##          ########        ##");
                    printf("\n##        ##              ##                                      ############mm    ##        MM ");
                    printf("\n  ##########              ##                                        ##              ##--      ##");
                    printf("\n            ##########@@  ##                                        ##            ++####mm++##mm");
                    printf("\n                      ####                                          ################             ");
                    printf("\n\nEmpate!");
                }
                else if (J1 == 2 && J2 == 2)
                {
                    Empate = Empate + 1;
                    printf("\n                ######                                                      ######                ");
                    printf("\n               ####  ####                                                  ..##    ##              ");
                    printf("\n             ####      ##                                                  ##mm      ##            ");
                    printf("\n          ####      ##                                                      ##      --##          ");
                    printf("\n        ####      ##            MM##MM                      ########          ##      ++##        ");
                    printf("\n ##########      ##################  ##--                    ##    MM##############      ##########");
                    printf("\n##            ####--                  ##                  ##@@                    ##            ##");
                    printf("\n##            ##                    ####                    ##                    ##            ##");
                    printf("\n##            ##      ..##############                        ##############      ##            ## ");
                    printf("\n##          ##@@    ####################                  ##################::      ##          ##");
                    printf("\n##      MM####                        ####              --##                        ######      ##");
                    printf("\n##      ##                              ##              ##@@                                    ##");
                    printf("\n##                  ############MM    ####                ##  ##MM############                  ##");
                    printf("\n##                      ######  ########                    ####    ######                      ##");
                    printf("\n##                          ######                            --####                            ##");
                    printf("\n##                ####            ####                      ####            ####                ##");
                    printf("\n############        ######          ##                      ##        --######        ##########@@");
                    printf("\n          mm##        ##########    ##                      ##@@  ##########        ##::          ");
                    printf("\n              ##++      @@##  ######                          ####..  ##mm      @@##              ");
                    printf("\n                  ####      ##                                          ##      ####                ");
                    printf("\n                  ####    ##                                          ####  ####                  ");
                    printf("\n                      mm##                                                                           ");
                    printf("\n\nEmpate!");
                }
                else if (J1 == 3 && J2 == 3)
                {
                    Empate = Empate + 1;
                    printf("                 ####                                                              mm                                \n");
                    printf("            ####    ##      --##########                    MM####mm          ########                              \n");
                    printf("  ############      ##########          ##                ##++    ##############      ####........                  \n");
                    printf("  ##          ..##    ##                  ##                mm                  ##          ##########                \n");
                    printf("  ##          ##      ##            ######mm                ####                ##      ##          ##                \n");
                    printf("  ##          ##    ##@@############++                        ::############++  ####    ##          ##                \n");
                    printf("  ##        --##    ######mm######                                        ##########    ##          ##                \n");
                    printf("  ##      mm##      ##          --########                    ############--      ##      ##        ##                \n");
                    printf("  ##    ####  ####mmMM                    ##                ##mm                  ####  ########    ##                \n");
                    printf("  ##          ##..  mm######++            ##                ##                MM##########          ##                \n");
                    printf("  ##        ####        @@################--                ####  ##############          ##        ##                \n");
                    printf("  ##      ####mm++          ####                              ####++      ##          ######        ##                \n");
                    printf("  ##      ##      ####--    ####                                        ##::      ######    ##      ##                \n");
                    printf(" ##########          ########                                            ##  ####MM        ##      ##                \n");
                    printf("          ####          ##                                              --##::          ##########                  \n");
                    printf("            --####      ##                                                ##        ####                            \n");
                    printf("                 ######mm                                                ####  ####                                \n");
                    printf("                                                                            ####                                    \n");
                    printf("\n\nEmpate!");
                }
                printf("\nVitórias do jogador %s: %d", nome1, V1);
                printf("\nVitórias da máquina : %d", V2);
                printf("\nEmpates de %s com máquina: %d\n", nome1, Empate);
                system("pause");
            } while (V1 < jogadas / 2 && V2 < jogadas / 2);

            system("cls");
            if (V1 > V2)
            {
                printf("Jogador %s ganhou o melhor de %.0f com %d vitórias", nome1, jogadas, V1);
            }
            else
            {
                printf("Máquina ganhou o melhor de %.0f com %d vitórias", jogadas, V2);
            }
            V1 = 0;
            V2 = 0;
            Empate = 0;
        }
        ("=============================================================================================================================================================\n");
        printf("\n\n1-Voltar para o menu");
        printf("\n2-Sair");
        printf("\nInsira a opção: ");
        scanf("%d", &opfinal);
        ("=============================================================================================================================================================\n");

    } while (opfinal != 2);

    printf("Obrigado(a) por jogar!");
    return 0;
}
