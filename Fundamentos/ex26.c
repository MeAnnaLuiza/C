/*Faça um programa que receba a idade e o peso de quinze pessoas, e que calcule e
mostre as médias dos pesos das pessoas da mesma faixa etária. As faixas etárias
são: de 1 a 10 anos, de 11 a 20 anos, de 21 a 30 anos e acima de 31 anos.*/

// Faixa1 = 1-10 anos
// Faxia2 = 11-20 anos
// Faixa3 = 21-30 anos
// Faixa4 = mais de 31 anos

#include <stdio.h>

int main(void)
{
    int idades[15];
    float pesos[15];
    float mediaFaixa1 = 0, mediaFaixa2 = 0, mediaFaixa3 = 0, mediaFaixa4 = 0;
    int countFaixa1 = 0, countFaixa2 = 0, countFaixa3 = 0, countFaixa4 = 0;

    for (int i = 0; i < 15; i++){
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);

        printf("Digite o peso da pessoa %d: ", i + 1);
        scanf("%f", &pesos[i]);

        if (idades[i] >= 1 && idades[i] <= 10){
            mediaFaixa1 += pesos[i];
            countFaixa1++;
        }
        else if (idades[i] >= 11 && idades[i] <= 20){
            mediaFaixa2 += pesos[i];
            countFaixa2++;
        }
        else if (idades[i] >= 21 && idades[i] <= 30){
            mediaFaixa3 += pesos[i];
            countFaixa3++;
        }
        else if (idades[i] > 30){
            mediaFaixa4 += pesos[i];
            countFaixa4++;
        }
    }

    printf("\n");

    if (countFaixa1 > 0){
        mediaFaixa1 /= countFaixa1;
        printf("Media de pesos das pessoas de 1 a 10 anos: %.2f\n", mediaFaixa1);
    }
    else{
        printf("Nao ha pessoas de 1 a 10 anos.\n");
    }

    if (countFaixa2 > 0){
        mediaFaixa2 /= countFaixa2;
        printf("Media de pesos das pessoas de 11 a 20 anos: %.2f\n", mediaFaixa2);
    }
    else{
        printf("Nao ha pessoas de 11 a 20 anos.\n");
    }

    if (countFaixa3 > 0){
        mediaFaixa3 /= countFaixa3;
        printf("Media de pesos das pessoas de 21 a 30 anos: %.2f\n", mediaFaixa3);
    }
    else{
        printf("Nao ha pessoas de 21 a 30 anos.\n");
    }

    if (countFaixa4 > 0){
        mediaFaixa4 /= countFaixa4;
        printf("Media de pesos das pessoas acima de 31 anos: %.2f\n", mediaFaixa4);
    }
    else{
        printf("Nao ha pessoas acima de 31 anos.\n");
    }

    return 0;
}
