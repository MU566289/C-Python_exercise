#include<stdio.h>
void print_all(char **arr,int len)
{
   for(int i=0;i<len;i++)
   {
      printf("%s\n",arr[i]);
   }
}
int main(void)
{
    char *arr[]={"apple","banana","orange"};
    int n=sizeof(arr)/sizeof(arr[0]);//计算数组一共有多少个元素
    print_all(arr,n);
    return 0;
}

