#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]){
	int x,y;

	scanf("%d",&x);
	scanf("%d",&y);
	if(x%2==0)
	{
		if(y%2==0){
			printf("1");
		}else printf("0");
	}else{
		if(y%2!=0){
			printf("1");
		}else printf("0");
	}
	printf("\n");
	return 0;
}