#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exerc�cio 2: Valor de Consulta M�dica.
Aluna: Helena Tubino Garbin*/

int main()
{
    setlocale(LC_ALL,"Portuguese");

    char especialidade;
    int turno;
    float valorconsulta = 300.00;
    float valorfinal;

    printf("\nBem vindo ao consult�rio com 24h de atendimento\n");

    printf("\nInforme qual especialidade deseja:\n");
    printf("\na)Oftalmologista\n");
    printf("b)Otorrinolaringologista\n");
    printf("c)Dermatologista\n");
    scanf("%s", &especialidade);

    switch(especialidade)
    {
    case 'a':
        printf("Oftalomologista\n");
        break;
    case 'b':
        printf("Otorrinolaringologista\n");
        break;
    case 'c':
        printf("Dermatologista\n");
        break;
    default:
        printf("Especialidade n�o encontrada!");
        break;
    }

    printf("\nO valor b�sico da consulta � R$300.00, podendo ter altera��es de acordo com o turno escolhido.\n");

    printf("\nInforme o turno que deseja ser atendido:\n");
    printf("1-manha\n");
    printf("2-noite\n");
    printf("3-madrugada\n");
    printf("4-tarde\n");
    scanf("%d", &turno);

    switch(turno) {
        case 1:
            printf("Turno da manh�");
            valorfinal = (valorconsulta * 1.10);
            break;
        case 2:
            printf("Turno da noite");
            valorfinal = (valorconsulta * 1.20);
            break;
        case 3:
            printf("Turno da madrugada");
            valorfinal = (valorconsulta * 1.30);
            break;
        case 4:
            printf("Turno da tarde");
            valorfinal = (valorconsulta);
            break;
        default:
            printf("Turno Inv�lido");
            break;
    }

    printf("\nO valor a ser pago �: %.1f\n", valorfinal);

    return 0;
}
