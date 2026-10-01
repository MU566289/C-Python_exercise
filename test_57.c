#include<stdlib.h>
int main(void)
{
    int **p;
    int row=3,col=4;
    p=(int **)malloc(row *sizeof(int *));
    for(int i=0;i<row;i++)
    {
        p[i]=(int*)malloc(col *sizeof(int));
    }
    p[1][2]=99;
    for(int i=0;i<row;i++)
    {
        free(p[i]);
    }
    free(p);
    p=NULL;
}