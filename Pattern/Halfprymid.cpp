#include<iostream>
using namespace std;

int main()
{
    
    // for(int row=0; row<7; row++)
    // {
    //  for(int col=0; col<row+1; col++)
    //  {
    //     cout<<"* ";
    //  }   
    //  cout<<endl;
    // }
    

//---- Inverted Prymid-----
    for(int row=0; row<7; row++)
    {
     for(int col=0; col<7-row; col++)
     {
        cout<<"* ";
     }   
     cout<<endl;
    }

    //-----Numeric Prymid-----
    for(int row=0; row<7; row++)
    {
        for(int col=0; col<row-1; col++)
        {
            cout<<col+1;
            
        }
        cout<<endl;
    }

}