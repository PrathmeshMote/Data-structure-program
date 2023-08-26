#include<stdio.h>
void select(int a[],int n)
{
  int i,k,pos,j,min;
  for(i=0;i<n;i++)
   {
     min=a[i];
     pos=i;
     for(j=i+1;j<n;j++)
      {
        if(a[j]<min)
         {
          min=a[j];
          pos=j;
          
          }
          
      }
      k=a[i];
      a[i]=a[pos];
      a[pos]=k;
     
      
   }
   printf("sort no;=");
   for(i=0;i<n;i++)
     {
       printf("%d ",a[i]);
     }

}
int main()
{
int i,a[100],n;
printf("enter limit=");
scanf("%d",&n);
printf("enter no=");
for(i=0;i<n;i++)
{
   scanf("%d",&a[i]);
}     
  select(a,n);
}