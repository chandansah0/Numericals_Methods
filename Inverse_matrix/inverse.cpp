#include<iostream>
#include<iomanip>
#include<math.h>

#define SIZE 10

using namespace std;

int main()
{
		 float a[SIZE][2*SIZE], x[SIZE], temp;
		 int i,j,k,n;

         cout<< setprecision(3)<< fixed;

		 cout<<"Enter order of matrix: ";
		 cin>>n;

		 cout<<"Enter coefficients of Matrix: " << endl;
		 for(i=1;i<=n;i++)
		 {
			  for(j=1;j<=n;j++)
			  {
				   cout<<"a["<< i<<"]"<< j<<"]= ";
                   cin>>a[i][j];
			  }
		 }

		 for(i=1;i<=n;i++)
		 {
			  for(j=1;j<=n;j++)
			  {
				   if(i==j)
				   {
				    	a[i][j+n] = 1;
				   }
				   else
				   {
				    	a[i][j+n] = 0;
				   }
			  }
		 }

		 for(i=1;i<=n;i++)
		 {
			  if(abs(a[i][i] < 5.0e-10))
			  {
				   cout<<"Error! Pivot"<<"["<<i<<"]"<<"=0"<<endl;
				   return 1;
			  }
			  for(j=1;j<=n;j++)
			  {
				   if(i!=j)
				   {
                        temp=a[j][i];
					    for(k=1;k<=2*n;k++)
					    {
					     	a[j][k] = a[j][k] - (temp/a[i][i])*a[i][k];
					    }
				   }
			  }
		 }
		 for(i=1;i<=n;i++)
		 {
			  for(j=n+1;j<=2*n;j++)
			  {
			   	a[i][j] = a[i][j]/a[i][i];
			  }
		 }
		 cout<< endl<<"Inverse Matrix is:"<< endl;
		 for(i=1;i<=n;i++)
		 {
			  for(j=n+1;j<=2*n;j++)
			  {
			   	cout<< a[i][j]<<"\t";
			  }
			  cout<< endl;
		 }
		 return(0);
}

/* Sample output

Enter order of matrix: 3
Enter coefficients of Matrix: 
a[1]1]= 2
a[1]2]= 2
a[1]3]= 4
a[2]1]= 6  
a[2]2]= 7
a[2]3]= 6
a[3]1]= 1
a[3]2]= 4
a[3]3]= 8

Inverse Matrix is:
0.667   0.000   -0.333
-0.875  0.250   0.250
0.354   -0.125  0.042

*/