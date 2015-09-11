#include <stdio.h>
#include <string.h>
#define MAX 200

int main(void){
        int high[MAX],left[MAX],right[MAX],n;
        int i =0,j=0;
        int max = 0;

        scanf("%d",&n);

        for(i=0;i<n;i++ ){
        scanf("%d",&high[i]);
        }
for(i = 0; i < n; i++)
  {
    left[i] = 1;
    for(j = 0;j < i; j++)
    {
      if(high[j] <high[i] && left[j] > left[i] - 1)   // 找出左边最长递增子序列
        left[i] = left[j] + 1;
    }
  }
for(i = n-1; i >= 0; i--)
  {
    right[i] = 1;
    for(j = n-1;j > i; j--)
    {
      if(high[j] < high[i] && right[j] > right[i] - 1)  // 找出右边最长递减子序列
        right[i] = right[j] + 1;
    }
  }
for(i = 0; i < n; i++)
  {
    if(max < left[i] + right[i] - 1)
      max = left[i] + right[i] - 1;  // 寻找最多合唱人数
  }
        printf("%d",n-max);
        return 0;
}