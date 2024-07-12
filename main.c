#include <stdio.h>

int main(void){
    //numero de elementos
    int numnum;
    scanf("%d", &numnum);

    int A[numnum];
    //elementos
    for (int i = 1; i <= numnum; i++) {
        scanf("%d", &A[i]);
    }
    //imprimir na ordem inversa com um espaço entre eles e uma quebra de linha no final
    for(int i = numnum; i > 0; i--){
        printf("%d", A[i]);
        if (i != 0) {
            printf(" ");
        } else {
            printf("\n");
        }
    }

    return 0;
}
