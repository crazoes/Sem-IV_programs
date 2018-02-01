#include<stdio.h>
#include<iostream>
using namespace std;
int partition(int a[],int l,int r);
void quick_sort(int a[],int l,int r);

int main()
{

 int i,a[10],n;
 cout<<"Enter the no of array elements ";
 cin>>n;

 cout<<"Enter the array elements ";

 for(i=0;i<n;i++)
    cin>>a[i];

 int l=0;
 int r=n-1;

 quick_sort(a,l,r);

 cout<<"The sorted array is as follows \n";

 for(i=0;i<n;i++)
    cout<<"\t"<<a[i];

  return 0;

}

int partition(int a[],int l,int r)
{
  int X,i=l,j=r,temp;
  X=a[l];

  while(i<j)
  {

    while(a[i]<=X && i<=r)
    {
    i++;
    }

    while(a[j]>X)
    j--;

     if(i<j)
     {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
     }
  }

  temp=a[l];
  a[l]=a[j];
  a[j]=temp;

  return j;
}

void quick_sort(int a[],int l,int r)
{
  int p;

  if(l<r)
  {

    p=partition(a,l,r);
    quick_sort(a,l,p-1);
    quick_sort(a,p+1,r);
  }

}

/* Output

Enter the no of array elements 4
Enter the array elements 55
11
33
88
The sorted array is as follows
	11	33	55	88

*/
