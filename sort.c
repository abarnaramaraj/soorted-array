void main()
{
int i,j,n,a[100],temp;
printf("enter the num");
scanf("%d",&n);
printf("enter the ele");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
for(j=0;j<=n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("element');
for(i=0;i<=n;i++)
{
printf("%d",a[i])
}
}
