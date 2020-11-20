#include<stdio.h>
int main()
{
    int a[1000],b,min,p;
    int i,j;
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
     scanf("%d",&a[i]);
    }
    min=a[0];
    p=0;
    for(i=1;i<b;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            p=i;
        }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",p);
    return 0;
}
