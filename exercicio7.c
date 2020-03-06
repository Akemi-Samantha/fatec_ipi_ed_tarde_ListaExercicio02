int fatorial(int n){
    if ((n==1) || (n==0)) return 1;
    else return fatorial(n-1)*n;
   
}
int main ()
{
    int n;
    printf("Informe o número que deseja obter o fatorial: \n");
    scanf("%d", &n);
    printf("O fatorial de %d é %d \n", n,fatorial(n));
    
}


