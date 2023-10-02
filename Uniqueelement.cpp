#include<iostream>
#include<vector>
using namespace std;
int findunique(vector<int>arr)
{
    int ans=0;
    for(int i=0; i<arr.size(); i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
    int n; 
    cout<<"Enter size of array "<<" ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter element"<<endl;
    for(int i=0; i<arr.size(); i++)
    {
        cin>>arr[i];  
    }
int unique_ele=findunique(arr);
cout<<"unique element is "<<unique_ele<<endl;
}