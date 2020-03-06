#include <stdio.h>
#include <string.h>
 char verifica (int vet [], int indice, int vet2[], int indice2){
    for(int x=0; x < indice; x++){
        for (int i = 0; i < indice2 ; i++)
        {
            if( vet[x] == vet2[i]){
                return ("*");
            }
        }   
    }
    return (" Não tem numeros repetidos ");
}


 main(){
    char vetor[3]= {"abc"};
    char vetor2[3]={"cda"};
    verifica(vetor,3,vetor2,3);

   return 0;

}