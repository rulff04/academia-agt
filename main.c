#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int opcao;
    char adesao;
    int mensalidade;
    int funcional;
    int natacao;
    int musculacao;
    int seco;
    int molhado;
    char periodo;
    int valor;
    char pagamento[100], cliente[100], categoria[100], horario[100];

    printf("\n (1) Adesão\
            \n (2) Acompanhamento\
            \n (3) Agendamento de aula experimental\
            \n (4) Recisão de contratos\
            \n (5) Clientes\
            \n (6) Profissionais da academia");
    scanf("%i", &opcao);
    switch(opcao)
    {
        case 1:
            printf("\n a) Natação\
                    \n b) Musculação\
                    \n c) Treinamento Funcional\
                    \n d) Plano seco: musculação + funcional\
                    \n e) Plano molhado: musculação + natação");
            scanf("%c", &adesao);
            switch (adesao)
            {
                case 'a':
                    strcpy(categoria, "Natação");
                    printf("\n (1) Mensal R$ 220\
                            \n (2) Anual R$ 198");
                    scanf("%i", &natacao);
                    switch (natacao)
                    {
                        case 1:
                            mensalidade = 220;
                            strcpy(pagamento, "Mensal");
                        break;
                        case 2:
                            mensalidade = 198;
                            strcpy(pagamento, "Anual");
                        break;
                    }
                    printf("\n a) Dia\
                            \n b) Noite")
                    scanf("%c", &periodo);
                    switch (periodo);
                    {
                        case 'a':
                            strcpy(horario, "Dia");
                        break;
                        case 'b';
                            valor = mensalidade + 50;
                            strcpy(horario, "Noite");
                        break;
                    }
                    printf("\n Período:\
                            ")
                break;
                case 'b':
                    strcpy(categoria, "Musculação");
                    printf("\n (1) Mensal R$ 110\
                            \n (2) Anual R$ 100");
                    scanf("%i", &musculacao);
                    switch (musculacao);
                    {
                        case 1:
                            mensalidade = 110;
                            strcpy(pagamento, "Mensal");
                        break;
                        case 2;
                            mensalidade = 100;
                            strcpy(pagamento, "Anual");
                        break;
                    }
                break;
                case 'c':
                    strcpy(categoria, "Funcional");
                    printf("\n (1) Mensal R$ 200\
                            \n (2) Anual R$ 180");
                    scanf("%i", &funcional);
                    switch (funcional);
                    {
                        case 1:
                            mensalidade = 200;
                            strcpy(pagamento, "Mensal");
                        break;
                        case 2:
                            mensalidade = 180;
                            strcpy(pagamento, "Anual");
                        break;
                    }
                break;
                case 'd':
                    strcpy(categoria, "Plano Seco");
                    printf("\n (1) Não tem MENSAL\
                            \n (2) Anual R$ 100 + 180");
                    scanf("%i", &seco);
                    while (seco == 1);
                    {
                        printf("\nINDISPONÍVEL, ESCOLHER OUTRA OPÇÃO!");
                        printf("\n =============================================")
                        printf("\n (1) Não tem MENSAL\
                            \n (2) Anual R$ 100 + 180");
                        scanf("%i", &seco);
                    }
                    mensalidade = 280;
                    strcpy(pagamento, "Anual");
                        
                break;
                case 'e':
                    strcpy(categoria, "Plano Molhado");
                    printf("\n (1) Não tem MENSAL\
                            \n (2) Anual R$ 100 + 198");
                    scanf("%i", &molhado);
                    while (molhado == 1)
                    {
                        printf("\n INDISPONÍVEL, ESCOLHA OUTRA OPÇÃO!")
                        printf("\n (1) Não tem MENSAL\
                            \n (2) Anual R$ 100 + 198");
                        scanf("%i", &molhado);
                    }
                    mensalidade = 298;
                    strcpy(pagamento, "Anual");
                break;
                
            }
        break;
    }
    
    return 0;
}
