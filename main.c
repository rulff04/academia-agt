#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int opcao;
    char adesao;
    int natacao;
    int mensalidade;
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
                    printf("\n (1) Mensal\
                            \n (2) Anual");
                    scanf("%i", &natacao);
                    case 1: 
                        mensalidade = 220;
                    case 2:
                        mensalidade = 198;
                        printf("");

                break;

            
            default:
                break;
            }
            break;
    }
    
    return 0;
}
