#include <iostream>
#include <limits.h>
using namespace std;

int main() {
	int sum=0,i,j,G[50][50],D[50],V[50],P[50],current,s,no_of_nodes;
	cout<<"Enter number of nodes\n";
	cin>>no_of_nodes;
	int dest,source;
	for(i=1;i<=no_of_nodes;i++)
	{
	    D[i]=INT_MAX;
	    V[i]=0;
	    P[i]=0;
	}
    cout<<"\n\nEnter the values of edges for all vertices";
    for(i=1;i<=no_of_nodes;i++)
    {
	    for(j=1;j<=no_of_nodes;j++)
	    {
	        cout<<"\nEnter the value for G["<<i<<"]["<<j<<"] ";
	        cin>>G[i][j];
	    }
    }

    cout<<"\n\nEnter source and destination\n ";
    cin>>source>>dest;

    current=source;
    D[current]=0;
    V[current]=1;
    int c=1;

    while(c<=no_of_nodes)
    {
	    int dc = D[current];
	    for(i=1;i<=no_of_nodes;i++)
	    {
	        if(G[current][i]!=0 && V[i]!=1)
	        {
		        if(G[current][i]+dc < D[i])
		        {
		            D[i]=G[current][i]+dc;
		            P[i]= current;
		        }
	        }
	    }


        s=D[2];
        for(i=3;i<=no_of_nodes;i++)
        {

	        if(s>D[i] && V[i]!=1)
	        {
	            s=D[i];
	            current=i;

	        }
        }
       
        V[current]=1;
        c++;

    }
    cout<<"\n The cost is "<<D[dest];
	return 0;
}

/* 

Input:

Enter number of nodes
5

Enter the values of edges for all vertices
Enter the value for G[1][1] 0
Enter the value for G[1][2] 22
Enter the value for G[1][3] 18
Enter the value for G[1][4] 3
Enter the value for G[1][5] 9
Enter the value for G[2][1] 22
Enter the value for G[2][2] 0
Enter the value for G[2][3] 1
Enter the value for G[2][4] 5
Enter the value for G[2][5] 8
Enter the value for G[3][1] 18
Enter the value for G[3][2] 1
Enter the value for G[3][3] 0
Enter the value for G[3][4] 0
Enter the value for G[3][5] 4
Enter the value for G[4][1] 3
Enter the value for G[4][2] 5
Enter the value for G[4][3] 0
Enter the value for G[4][4] 0
Enter the value for G[4][5] 2
Enter the value for G[5][1] 9
Enter the value for G[5][2] 8
Enter the value for G[5][3] 4
Enter the value for G[5][4] 2
Enter the value for G[5][5] 0

Enter source and destination
1
5



Output:

The cost is 8


