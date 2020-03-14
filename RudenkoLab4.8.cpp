#include <iostream>

using namespace std;

/*
Given a two-dimensional array A of dimension MxN. 
Supplement it with M + 1 row and N + 1 column, source array A. 
The element [M + 1] [N + 1] must store the sum of the elements of the original array. 
The initial elements of the array A, M and N must be entered from the keyboard.
*/


int main() 
{
	unsigned short int iM, iN;
	char cKey;
	//Set matrix dimersion
	cout << "Set matrix dimension MxN" << endl;
	cout << "M = ";
	cin >> iM;
	cout << "N = ";
	cin >> iN;
	//Create matrix MxN
	int **matrix = new int*[iM + 1];

	for (unsigned short i = 0; i < iM + 1; i++)
		matrix[i] = new int[iN + 1];
	for (unsigned short i = 0; i < iM + 1; i++)
	{
		for (unsigned short j = 0; j < iN + 1; j++)
		{
			matrix[i][j] = 0;
		}
	}
	//Filling matrix with random numbers or manually
	cout<<"Fill matrix with random nubmers? Y - yes."<<endl;
	cin >> cKey;
	if (cKey == 'Y' || cKey == 'y')
	{

		for (unsigned short i = 0; i < iM; i++)
		{
			for (unsigned short j = 0; j < iN; j++)
			{
				matrix[i][j] = rand() & 128 - 1;
			}
		}
	}
	else
		{
			
			for (unsigned short i = 0; i < iM; i++)
			{
				for (unsigned short j = 0; j < iN; j++)
				{
					cout <<"A["<<i<<"]["<<j<<"] = " ;
					cin>>matrix[i][j];
				}
			}
		}
	//Summing elements of raws
	for (unsigned short i = 0; i < iM; i++)
	{
		for (unsigned short j = 0; j < iN; j++)
		{
			matrix[i][iN] += matrix[i][j];
		}
	}
	//Summing elements of collums
	for (unsigned short j = 0; j < iN; j++)
	{
		for (unsigned short i = 0; i < iM; i++)
		{
			matrix[iM][j] += matrix[i][j];
		}
	}
	//Summing all elements
	for (unsigned short i = 0; i < iM; i++)
	{
		matrix[iM][iN] += matrix[i][iN];
	}
	for (unsigned short j = 0; j < iN; j++)
	{
		matrix[iM][iN] += matrix[iM][j];
	}
	//Show initial Matrix
	cout << "Initial matrix" << endl;
	for (unsigned short i = 0; i < iM ; i++)
	{
		for (unsigned short j = 0; j < iN ; j++)
			cout << matrix[i][j] << "\t";
		cout << endl;
	}
	//Show Extended matrix
	cout << "Extended matrix" << endl;
	for (unsigned short i = 0; i < iM + 1; i++)
	{
		for (unsigned short j = 0; j < iN + 1; j++)
			cout<<matrix[i][j]<<"\t";
		cout << endl ;
	}
	system("pause");
	return 0;
}
