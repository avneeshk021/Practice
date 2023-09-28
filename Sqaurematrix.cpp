#include<bits/stdc++.h>
using namespace std;

    int main()
    {
int n;
cin>>n;
int arr[n][n];
for(int i=0; i<n; i++)
{
    for(int j=0; j<n; j++)
    {
        cin>> arr[i][j];
    }
}
int sumleft =0;
int sumright =0;
int i=0;
int j=0;
while(i!=n and j!=n)
{
    sumleft+=arr[i][j];
    i++;
    j++;
}
int i=0;
int j=n-1;
while(i!=n and j>=0)
{
    sumright+=arr[i][j];
    i++;
    j--;
}
cout<< abs(sumleft-sumright);
  }
