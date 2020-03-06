String p (int n){
    String m;
    if (n > 1 )
    {
        if (n % 1 == 0 && n % n)
        {
            m = "é um numero Primo"
            return m;
        }else
        {
            m = "Não é um numero Primo"
            return m;
        }   
    }else
    {
        m = "Não é um numero Primo"
            return m;
        }
main()
{
    int n;
    printf("digite o numero");
    scanf("%d",&n);
    printf("%d %s",n,p(n));
    

}