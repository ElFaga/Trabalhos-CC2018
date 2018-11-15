#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char d[101], s[101];
  char ds[101];
  int tam;
  int verifica;
  int i, j, k;

  while(scanf("%s %s", d, s) != EOF){

    tam = strlen(d);

    for(i=0;i<tam;i++){
        for(j=0,k=i;j<tam;j++){
          ds[j]=d[k];
      }
      ds[j]='\0';

      if(strncmp(s,ds,strlen(s))==0){
          verifica=1;
          break;
      }else{
          verifica=0;
      }
  }

  if(verifica==1){
    printf("Resistente\n");
}else{
    printf("Nao resistente\n");
}

verifica=0;
};
return 0;
}
