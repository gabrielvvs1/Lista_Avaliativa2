#include <stdio.h>
    
  int main(){
    
  int matA[4][4], matB[4][4];
  int matC[4][4];
  char op[5];

  int i, j, k;

 
  for (i = 0; i < 4; i++){
    for (j = 0; j < 4; j++) {
      scanf("%d", &matA[i][j]);
    }
  }
  
 
  for (i = 0; i < 4; i++){
    for (j = 0; j < 4; j++) {
      scanf("%d", &matB[i][j]);
    }
  }

  
  scanf("%s", op);//ler a op

  if (strcmp(op, "soma") == 0){
   
    for (i = 0; i < 4; i++) {
      for (j = 0; j < 4; j++) {
        matC[i][j] = matA[i][j] + matB[i][j];
      }
    }
  } else if (strcmp(op, "sub") == 0){

    for (i = 0; i < 4; i++) {
      for (j = 0; j < 4; j++) {
        matC[i][j] = matA[i][j] - matB[i][j];
      }
    }
  } else if (strcmp(op, "mult") == 0){
 
    for (i = 0; i < 4; i++){
      for (j = 0; j < 4; j++){
        matC[i][j] = 0; 
        for (k = 0; k < 4; k++){
          matC[i][j] += matA[i][k] * matB[k][j]; 
        }
      }
    }
  } 

  for (i = 0; i < 4; i++){
    for (j = 0; j < 4; j++) {
      printf("%4d", matC[i][j]); 
    }
    printf("\n"); 
  }

  return 0;
}
