#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAXSIZE 100
#define N 100


int compare_char(const void* a, const void* b)
{
    int arg1 = *(const char*)a;
    int arg2 = *(const char*)b;
 
    if (arg1 < arg2) return 1;
    if (arg1 > arg2) return -1;
    return 0;
}

int compare_int(const void* a, const void* b)
{
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
 
    if (arg1 < arg2) return 1;
    if (arg1 > arg2) return -1;
    return 0;
}

int main(){
	char str[N][MAXSIZE];
	int sum[N]={0},aphs[N]={0};
	int i=0,j=0,k=0,n=0,temp=0,count=1;

	scanf("%d",&n);
    for(i=0;i<n;i++ )
    {
    scanf("%s",str[i]);
    }

    //for (i = 0; i <n; ++i)
    //{
    //printf("%s\n",str[i]);   	
    //}
    for (i = 0; i < n; ++i)
    {
    	for (j = 0; j < strlen(str[i]); ++j)
    	{
    		
            //str[i][j]=tolower(str[i][j]);
            if(97<=str[i][j]&&122>=str[i][j])
            {
                str[i][j]=str[i][j]-32;
            }
    	}
    	qsort(str[i], strlen(str[i]),sizeof(char),compare_char);
    //	printf("%s\n",str[i]);  
    	for (j = 1;j<strlen(str[i]); ++j)
    	{

				//if(65<=str[i][j]&&90>=str[i][j])
				//{
				//	temp=(int)str[i][j]-64;
				//}else if(97<=str[i][j]&&122>=str[i][j])
				//{
				//	temp=(int)str[i][j]-96;
				//}    	
				//sum[i]=sum[i]+temp;
    		if(str[i][j]!=str[i][j-1])
    		{	
    			count++;
    			aphs[k++]=j-temp;
    			temp=j;
    		}
    		aphs[k]=strlen(str[i])-temp;

		}
		
		qsort(aphs, count,sizeof(int),compare_int);
//for (k = 0; k < count; ++k)
//		{
//			printf("%d\n",aphs[k]);
//		}G
		for (k = 0; k < count; ++k)
		{
			sum[i]=sum[i]+aphs[k]*(26-k);
		}
		count=1;
		k=0;
		temp=0;
    }
	for (i = 0; i < n; ++i)
	{
	printf("%d ",sum[i]);
	}


	return 0;
}