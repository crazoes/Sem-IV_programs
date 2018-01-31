#include<stdio.h>
#include<iostream>
using namespace std;
void bubble_sort(int a[],int n);

int main()
{
  int i,a[10],n;
  cout<<"Enter the no of array elements ";
  cin>>n;

  cout<<"Enter the array elements ";

  for(i=0;i<n;i++)
    cin>>a[i];

  bubble_sort(a,n);

  cout<<"The sorted array is as follows \n";

  for(i=0;i<n;i++)
   cout<<"\t"<<a[i];

  return 0;
}

void bubble_sort(int a[],int n)
{
  int i,j,temp;
  for(i=n-2;i>=0;i--)
  {
    for(j=0;j<=i;j++)
    {
       if(a[j]>a[j+1])
       {
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
       }
     }
  }
}

/* Output

Enter the no of array elements 5
Enter the array elements 22
66
44
99
11
The sorted array is as follows
	11	22	44	66

*/
