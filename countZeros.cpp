#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,0,1,0,1,0,0,1,0,1};
    int size=10;
    int numZero=0;
    int numOne=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==1) // increase once
        {
            numOne++;
        }
        if(arr[i]==0)
        {
            numZero++;
        }
        
    }
    cout<<"Numbers of once "<<numOne<<endl;
    cout<<"Numbers of zeros "<<numZero<<endl;
}