#include <stdio.h>
int main() {
    int i,VetorMax;
    
    //Informando a quantidade de números dentro do vetor.
    
    printf("Informe o número de elementos a serem somados: ");
        scanf("%d",&VetorMax);
        
    //Criando os tres vetores.
    
    int vetA[VetorMax],vetB[VetorMax],vetC[VetorMax];
    
    //pedindo o conteúdo 1° do vetor.
    
    for (i=0;i<VetorMax;i++) {
        printf("\nInforme o %dº valor: ", i+1);
            scanf("%d",&vetA[i]);}
    
    //imprimindo o conteúdo do 1° vetor.
    
    printf("\n\tVetor criado: [ ");
    for (i=0;i<VetorMax-1;i++) {
        printf("%d,", vetA[i]); }
    printf("%d ]\n", vetA[VetorMax-1]);
    
    //pedindo o conteúdo 2° do vetor.
    
    for (i=0;i<VetorMax;i++) {
        printf("\nInforme o %dº valor: ", i+1);
        scanf("%d",&vetB[i]); }
    
    //imprimindo o conteúdo 2° do vetor.
    
    printf("\n\t2° Vetor criado: [ ");
        for (i=0;i<VetorMax-1;i++) {
            printf("%d,", vetB[i]); }
        printf("%d ]\n", vetB[VetorMax-1]);
    
    //Realizando a soma das interseções dos vetores A e B.
        printf("\n\t3° Vetor [");
            for (i=0;i<VetorMax-2;i++) {
                if (vetA[i] == vetB[i]) { 
                vetC[i] = vetA[i] + vetB[i];
            printf(" %d,",vetC[i]); }}
    //Condição para imprimir penultimo número sem a virgula.
        if (vetA[VetorMax-2] == vetB[VetorMax-2])
        {   vetC[VetorMax-2] = vetA[VetorMax-2] + vetB[VetorMax-2];
                    printf("%d",vetC[VetorMax-2]);
                }
    //Condição para imprimir ultimo número sem a virgula.    
        if (vetA[VetorMax-1] == vetB[VetorMax-1]) {
            vetC[VetorMax-1] = vetA[VetorMax-1] + vetB[VetorMax-1];
            printf(" %d ]",vetC[VetorMax-1]); }
        else {
            printf(" ]"); }

    return 0;
}