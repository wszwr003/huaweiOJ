#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
const int M=50;
int main()
{
  int n,i,j,k,len; 
  int beauti[M]={0};
  int t;
  cin>>n;  
  char a[M][30];
  for(i=0;i<n;i++)  
  { 
  cin>>a[i]; 
  
  }
  for (i = 0; i < n; ++i)
  {
  for (j = 0; j < strlen(a[i]); ++j)
      {
      
     //         if('A'<=a[i][j])
     //         {
     //             a[i][j]=a[i][j]-'A'+1;
     //         }
    
    a[i][j]=tolower(a[i][j]);
     }
  }
  for(i=0;i<n;i++)
  {
    int b[26]={0};
    len=strlen(a[i]);
      
    for(j=0;j<len;j++)//计算每个字母出现的频次。
    {
      if(a[i][j]<='z')
        b[a[i][j]-'a']++;
      else
        b[a[i][j]-'A']++;
    }
    for(k=0;k<26;k++)//将每个字母出现的频次按从大到小的顺序排列。
    {
      for(int m=k+1;m<26;m++)
      {
        if(b[k]<b[m])
        {
          t=b[k];b[k]=b[m];b[m]=t;
        }
      }
    } 
    for(int j=0,du=26;j<26,du>=1;j++,du--)//计算a[i]的漂亮度
    { 
      beauti[i]=beauti[i]+du*b[j];
    }
  }
  for(i=0;i<n;i++)
    cout<<beauti[i]<<endl;
  return 0;
}