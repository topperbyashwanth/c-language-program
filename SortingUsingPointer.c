#include<stdio.h>
#include<stdlib.h>
int main()
{
int *a,i,j,k,n,temp;
scanf("%d",&n);
a=(int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);

}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
    if(a[j]<a[j+1])
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

}
}
for(i=0;i<n;i++)
{
    printf("%d",a[i]);

}


}
