#include<stdio.h>
int n;
void mergecon(int a[],int s,int mid,int e)
{
    int i,j,k,t[50],n;
    i=s;
    j=mid+1;
    k=s;
    while(i<=mid&&j<=e)
    {
        if(a[i]<=a[j])
         {
            t[k++]=a[i++];
         }
        else
         {
            t[k++]=a[j++];
            }

    }
    while(i<=mid)
    {
        t[k++]=a[i++];
    }
    while(j<=e)
    {
        t[k++]=a[j++];
    }
    for(i=s; i<=e; i++)
    {
        a[i]=t[i];
    }
    
}
void merge(int a[],int s,int e)
{
    int mid;
    if(s!=e)
    {
        mid=(s+e)/2;
        merge(a,s,mid);
        merge(a,mid+1,e);
        mergecon(a,s,mid,e);

    }

}
int main()
{
    int i,a[100],n;
    printf("enter limit=");
    scanf("%d",&n);
    printf("enter no=");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    merge(a,0,n-1);
    for(i=0;i<n;i++)
     {
       printf("%d\t",a[i]);
     }
}