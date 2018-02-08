#include<stdio.h>
#include<iostream>
using namespace std;


int main()
{

   int i,j,s,a[20],n,x,e=1,r[10][50];
   cout<<"Enter the no of elements ";
   cin>>n;
   cout<<"Enter the array elements ";

   for(i=0;i<n;i++)
     cin>>a[i];

   s=a[0];
   for(i=1;i<n;i++)
   {
     if(s<a[i])
       s=a[i];
   }  //finding the greatest element from the array


  while(s!=0) //Till the greatest element is != zero
  {


     for(i=0;i<10;i++)
      {
         for(j=0;j<n;j++)

           r[i][j]=-1;
      }  //Initialise 2D array with -1

     int k=0;
     for(i=0;i<n;i++)
     {

        x=(a[i]/e)%10;

        for(j=0;j<n;j++)
        {
           if(r[x][k]==-1)
           {
              r[x][k]=a[i];
              break;
           }
            else
              k++;
         }
      }  /*find the position at which the given array element must be
           stored in the 2D array and place it there. */

    k=0;
    for(i=0;i<10;i++)
    {
      for(j=0;j<n;j++)
      {
        if(r[i][j]!=-1)
        {
          a[k]=r[i][j];
          k++;
        }
      }
    }  /* Store the elements of 2D array into the original array
          to get the half sorted array */

    e=e*10;
    s=(s/10);

  } // Repeat till the greatest element becomes 0

cout<<"The sorted array is as follows \n";
for(i=0;i<n;i++)
cout<<"\t"<<a[i];
return 0;

}

/* Output:

Enter the no of elements 5
Enter the array elements 48
5
550
112
17
The sorted array is as follows
	5	 17	 48	 112	550

*/
