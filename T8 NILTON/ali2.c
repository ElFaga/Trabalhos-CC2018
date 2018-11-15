#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i=0, tam;
    char str[1000][1000];
    char *s = str[i][1000];
    while(scanf("%s",s) != EOF){
        tam = strlen(str);
        for(i=0;i<tam;i++){
            str[i] = (char)tolower(str[i]);
        }
        puts(str);
        i++;
    }

    return 0;
}