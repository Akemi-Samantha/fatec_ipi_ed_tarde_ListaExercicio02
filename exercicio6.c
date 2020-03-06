String mes (int n){
    String 
    if(n == 1){
        return "Janeiro";
    }else if (n == 2){
        return "Fevereiro";
    }else if (n == 3){
        return "Março";
    }else{
        return "Número Inválido"
    }
}



int main (){
    int n;
    String c;
    printf("Entre com o numero");
    scanf("%d",&n);
    c = mes(n);
    printf("%s", c);

}