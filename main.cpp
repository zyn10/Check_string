#include<iostream>
using namespace std;
int main()
{
	int z = 1, y=0;//z for indentation
	char alphabets,keyword;
	char alpha[5];
	cout << "Enter the Array of 5 characters" << endl<<endl;
	for (int i = 0; i < 5; i++)//loop for gettting input
	{
		
		cout <<"Character  number  "<< z <<" is= "; cin >> alpha[i];
		cout << endl;
		z++;
	}
	
	cout << "Enter a keyword to check whether it is present or not" << endl;
	cout << "keyword is = "; cin >> keyword; cout << endl;
	for (int k = 0; k < 5; k++)//loop for checking what is present in index
	{	
		if (keyword == alpha[k])//condition
		{
			y = 1;
		}
	}
	if (y == 1)
		cout << "character match Found !";
	else
			cout << "Character not Matched ! ";
	system("pause>0");
}
