#include <string.h>

int troca(int v [], int indice){
    int cont = indice -1;
    for (int i = 0; i < indice; i++, cont--)
    {
        v[i]= v[cont];
    }
    return vet;  
}
main (){
    int vet []= {1,2,3,4};
    String c;
    for (int i = 0; i < 4; i++)
    {
        c = printf("%d \n",vet[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        c = printf("%d \n",troca(vet,4));
    }
    

}