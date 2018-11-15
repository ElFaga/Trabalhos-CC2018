#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("%d\n",sizeof(short));
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(long long));

	// FILE *in;
	// char buffer[256];
	// in = fopen("readme.code.txt","r+");
	// while(!feof(in)){
	// 	fgets(buffer,256,in);
	// 	printf("%s",buffer);
	// }
	return 0;
}