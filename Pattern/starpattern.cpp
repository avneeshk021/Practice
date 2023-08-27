#include<iostream>
using namespace std;

int main()
{
	int i, j, rows, columns;
     
    cout << "Enter Star Rows = ";
    cin >> rows;

    cout << "Enter star Columns = ";
    cin >> columns;

    cout << " Star Pattern\n"; 

    for(i = 0; i < rows; i++)
    {
    	for(j = 0; j < columns; j++)
		{
            if (i == 0 || i == rows - 1 || j == 0 || j == columns - 1) 
            {
                cout << "*";
            }
           	else 
            {
                cout << " ";
            } 
        }
        cout << endl;
    }		
 	return 0;
}