#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "enter the number --";
	cin >> a;
	for ( int i=0; i <= a; i++)
	{
		for (int j=1; j <= i; j++)
		{
			cout << j;
		}
		cout << endl;
	}


	return 0;
}