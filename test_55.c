#include<stdlib.h>
void creat_arr(int **p,int n)
{
    *p=(int*)malloc(n* sizeof (int));
}
int main(void)
{
    int *arr=NULL;//arr未存任何地址为空指针
    creat_arr(&arr,5);
    free(arr);
    return 0;
}