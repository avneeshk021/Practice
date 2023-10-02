#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={1,2,4,5,6};
    int sizea=5;
    int brr[]={7,8,9};
    int sizeb=3;
    vector<int>ans;
    //Push all element in vector ans
for(int i=0; i<sizea; i++)
{
    ans.push_back(arr[i]);
}

//push all element to brr
for(int i=0; i<sizeb; i++)
{
    ans.push_back(brr[i]);
}
//print
cout<<"Print Union of arr and brr"<<endl;
for(int i=0; i<ans.size(); i++)
{
    cout<<ans[i]<<" ";
}
return 0;
}