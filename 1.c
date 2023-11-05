#include <stdio.h>

    int main(){
    
    int conjunto[11];
    int tamanho = 10;

   for (int i = 0;i <= 10;i++){
        scanf("%d", &conjunto[i]);
    }

        for (int i = 0;i < 10;i++){
            printf("%d", conjunto[i]);
            if (i < 9) {
                printf(" ");
            }
    }
    printf("\n");

    while (tamanho > 1){
        int sequencia2[10];

        for (int i = 0;i < tamanho - 1;i++){
            sequencia2[i] = conjunto[i] + conjunto[i + 1];
        }

        tamanho--;
            for (int i = 0;i < tamanho;i++){
                conjunto[i] = sequencia2[i];
            }
                for (int i = 0;i < tamanho;i++){
                    printf("%d", conjunto[i]);
                    if (i < tamanho - 1){
                        printf(" ");
                    }
            }
        printf("\n");
    }

    return 0;
}