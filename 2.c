#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 11 //11 posicao

double calcular_forca(int forcas[], char posicoes[]){
    
    int G = 0, L = 0, Z = 0, V = 0, M = 0, A = 0;

    for (int i = 0; i < N; i++){
        switch (posicoes[i]) {
            case 'G':
                G += forcas[i];
                break;
            case 'L':
                L += forcas[i];
                break;
            case 'Z':
                Z += forcas[i];
                break;
            case 'V':
                V += forcas[i];
                break;
            case 'M':
                M += forcas[i];
                break;
            case 'A':
                A += forcas[i];
                break;
            default:

                return -1;
        }
    }

    double F = (8.0*G + 10.0*L + 5.0*Z + 8.0*V + 11.0*M + 12.0*A)/100.0;

    return F;
}

    int main(){

    char nome1[31], nome2[31];
    char posicao[N], posicao2[N];
    int forcas1[N], forcas2[N];
    double forca1, forca2;
    
    scanf("%[^\n]%*c", nome1);

    for (int i = 0; i < N; i++){
        char nome[31];
        scanf("%[^;];%c;%d%*c", nome, &posicao[i], &forcas1[i]);
    }

    forca1 = calcular_forca(forcas1, posicao);

    scanf("%[^\n]%*c", nome2);

    for (int i = 0; i < N; i++){
        char nome[31];
        scanf("%[^;];%c;%d%*c", nome, &posicao2[i], &forcas2[i]);
    }
  
    forca2 = calcular_forca(forcas2, posicao2);

    printf("%s: %.2lf de forca\n", nome1, forca1);
    printf("%s: %.2lf de forca\n", nome2, forca2);

    if (forca1 > forca2){
        printf("%s eh mais forte\n", nome1);
    }
    else if (forca1 < forca2){
        printf("%s eh mais forte\n", nome2);
    }
    else {
        printf("Os times sao igualmente fortes\n");
    }

    return 0;
}
