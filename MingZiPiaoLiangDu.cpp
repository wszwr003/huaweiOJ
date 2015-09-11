#include <stdio.h>
#include <string.h>
#define MAXSIZE 30
#define N 100
int main(){
	char str[N][MAXSIZE];
	gets(str);
	int i,j,n;

	scanf("%d",&n);

    for(i=0;i<n;i++ ){
    scanf("%s",&str[i]);
    }

	return 0;
}