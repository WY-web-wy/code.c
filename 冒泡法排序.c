# include<stdio.h>
void bubble(int arry[],int n);
int main()
{   int i;
    int a[]={1,33425,64577,6,5,6,7447,7};
    bubble(a,8);
    for(i=0;i<8;i++)
        printf("%d  ",a[i]);
    return 0;

}
void bubble(int a[],int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
        for(j =0;j<n-i-1;j++)

        if(a[j]<a[j+1])
        {
            k=a[j+1];
            a[j+1]=a[j];
            a[j] =k;

        }

}
