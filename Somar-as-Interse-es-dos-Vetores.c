#include <stdio.h>
int main() {
    int i,TamVet;
    
    //Informando a quantidade de números dentro do vetor.
    
    printf("Informe o número vetores: ");
        scanf("%d",&TamVet);
        
    //Inicio dos Vetores.
    
    int vetA[TamVet],vetB[TamVet],vetC[TamVet];
    
    //Pedindo o conteúdo 1° do vetor.
    
    for (i=0;i<TamVet;i++) {
        printf("\nInforme o %dº valor: ", i+1);
            scanf("%d",&vetA[i]);}
    
    //Imprimindo o conteúdo do 1° vetor.
    
    printf("\n\tVetor criado: [ ");
    for (i=0;i<TamVet-1;i++) {
        printf("%d,", vetA[i]); }
    printf("%d ]\n", vetA[TamVet-1]);
    
    //Pedindo o conteúdo 2° do vetor.
    
    for (i=0;i<TamVet;i++) {
        printf("\nInforme o %dº valor: ", i+1);
        scanf("%d",&vetB[i]); }
    
    //Imprimindo o conteúdo 2° do vetor.
    
    printf("\n\t2° Vetor criado: [ ");
        for (i=0;i<TamVet-1;i++) {
            printf("%d,", vetB[i]); }
        printf("%d ]\n", vetB[TamVet-1]);
    
    //Realizando a soma das interseções dos vetores A e B.
        printf("\n\t3° Vetor [ ");
            for (i=0;i<TamVet-2;i++) {
                if (vetA[i] == vetB[i]) { 
                vetC[i] = vetA[i] + vetB[i];
            printf("%d,",vetC[i]); }}
    //Condição para imprimir penultimo número com e sem a virgula.
        if (vetA[TamVet-2] == vetB[TamVet-2] && vetA[TamVet-1] != vetB[TamVet-1] )
        {   vetC[TamVet-2] = vetA[TamVet-2] + vetB[TamVet-2];
                    printf("%d",vetC[TamVet-2]);
                }
        else if (vetA[TamVet-2] == vetB[TamVet-2] && vetA[TamVet-1] == vetB[TamVet-1] )
        {   vetC[TamVet-2] = vetA[TamVet-2] + vetB[TamVet-2];
                    printf("%d,",vetC[TamVet-2]);
                }
    //Condição para imprimir ultimo número.    
        if (vetA[TamVet-1] == vetB[TamVet-1]) {
            vetC[TamVet-1] = vetA[TamVet-1] + vetB[TamVet-1];
            printf("%d ]",vetC[TamVet-1]); }
        else {
            printf("]"); }

    return 0;
}