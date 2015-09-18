#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i,j,n=0,count=0,temp;
	scanf("%d",&n);
	for (i = 1; i <= n; ++i)
	{

		if(i%7==0)
			count++;
		else
		{

		temp=i;
			while(temp)
			{
				if(temp%10==7)
				{
					count++;
					break;
				}
				temp/=10;

			}
		}
	}
	printf("%d\n",count);
	return 0;
}