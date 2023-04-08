/*Escreva um algoritmo que verifique se uma matriz é simétrica. O usuário deve
fornecer o tamanho da matriz e a os elementos dela.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
   int n, i, j;
   int **matriz;
   int simetrica = 1;

   printf("Insira o tamanho da matriz: ");
   scanf("%d", &n);

   // Aloca memória para a matriz
   matriz = (int **) malloc(n * sizeof(int *));
   for (i = 0; i < n; i++) {
      matriz[i] = (int *) malloc(n * sizeof(int));
   }

   // Preenche a matriz com os valores inseridos pelo usuário
   printf("Insira os valores da matriz:\n");
   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
         scanf("%d", &matriz[i][j]);
      }
   }

   // Verifica se a matriz é simétrica
   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
         if (matriz[i][j] != matriz[j][i]) {
            simetrica = 0;
            break;
         }
      }
      if (!simetrica) {
         break;
      }
   }

   if (simetrica) {
      printf("A matriz inserida é simétrica.\n");
   } else {
      printf("A matriz inserida não é simétrica.\n");
   }

   // Libera a memória alocada para a matriz
   for (i = 0; i < n; i++) {
      free(matriz[i]);
   }
   free(matriz);

   return 0;
}