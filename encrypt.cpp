#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define size 1024
	
int encrypt(char aucPassword[],char aucResult[])
{	
	int n = strlen(aucPassword);
	int i = 0;
	for(i=0;i<n;i++)
	{
		if ('a'<=aucPassword[i]&&aucPassword[i]<='z')
		{
			aucResult[i]=aucPassword[i]+1;
			if (aucResult[i]>'z')
			{
				aucResult[i]='a';
			}
			aucResult[i] = toupper(aucResult[i]);
		}else if('A'<=aucPassword[i]&&aucPassword[i]<='Z')
		{
			aucResult[i]=aucPassword[i]+1;
			if (aucResult[i]>'Z')
			{
				aucResult[i]='A';
			}
			aucResult[i] = tolower(aucResult[i]);
		}else if('0'<=aucPassword[i]&&aucPassword[i]<='9')
		{
			aucResult[i]=aucPassword[i]+1;
			if (aucResult[i]>'9')
			{
				aucResult[i]='0';
			}
		}
	}
}	
	
int uncrypt(char aucPassword[],char aucResult[])
{	
	int n = strlen(aucPassword);
	int i = 0;
	for(i=0;i<n;i++)
	{
		if ('a'<=aucPassword[i]&&aucPassword[i]<='z')
		{
			aucResult[i]=aucPassword[i]-1;
			if (aucResult[i]<'a')
			{
				aucResult[i]='z';
			}
			aucResult[i] = toupper(aucResult[i]);
		}else if('A'<=aucPassword[i]&&aucPassword[i]<='Z')
		{
			aucResult[i]=aucPassword[i]-1;
			if (aucResult[i]<'A')
			{
				aucResult[i]='Z';
			}
			aucResult[i] = tolower(aucResult[i]);
		}else if('0'<=aucPassword[i]&&aucPassword[i]<='9')
		{
			aucResult[i]=aucPassword[i]-1;
			if (aucResult[i]<'0')
			{
				aucResult[i]='9';
			}
		}
	}
}	

int main(int argc, char const *argv[])
{
	char password[size],result[size];
	char toresult[size],topassword[size];
	scanf("%s",password);
	scanf("%s",result);
	encrypt(password,toresult);
	uncrypt(result,topassword);
	printf("%s", toresult);
	printf("%s",  topassword);

	return 0;
}

