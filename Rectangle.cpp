#include<iostream>
using namespace std;

int main()
{
	int i, j;

	cout << "\n-----Rectangle Pattern-----\n";
	for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 4; j++)
		{
			if(i == 1 || i == 5 || j == 1 || j == 4)
			{
				cout <<"*";
			}
			else
			{
				cout << " ";
			}          
        }
        cout << "\n";
    }
    
 	return 0;
}