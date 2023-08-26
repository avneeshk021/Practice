#include<iostream>
using namespace std;
int main()
{
    for(int row=0; row<3; row++)// Outter Loop (for row)
    {
        for(int col=0; col<5; col++)// inner loop ( for columb)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}