#include <string.h>
String Vogal(String l)
{
    String v;
    if (l == "a" || l == "e" || l == "i" ||l == "o" ||l == "u")
    {
        v = "é vogal";
        return v;
    }else
    {
        v = "é consoante";
    } 
}

main(){
    String l;
    scanf("%s",&l);
    printf("%s %s",l,Vogal(l));

}