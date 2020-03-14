#include <iostream>

using namespace std;

/*
Задан двухмерный массив A размерности MxN . Дополнить его  M+1-й строкой и  N+1-м столбцом, 
в которых записать суммы элементов соответствующих строк или столбцов исходного массива A. 
В элементе [M+1][N+1]  должна храниться сумма элементов первоначального массива. Исходные элементы массива  A, M  
и N  необходимо ввести с клавиатуры.
*/


int main() 
{
	unsigned short int iM, iN;
	char cKey;
	cout << "Set matrix dimension MxN" << endl;
	cout << "M = ";
	cin >> iM;
	cout << "N = ";
	cin >> iN;
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
	for (unsigned short i = 0; i < iM; i++)
	{
		for (unsigned short j = 0; j < iN; j++)
		{
			matrix[i][iN] += matrix[i][j];
		}
	}
	for (unsigned short j = 0; j < iN; j++)
	{
		for (unsigned short i = 0; i < iM; i++)
		{
			matrix[iM][j] += matrix[i][j];
		}
	}
	for (unsigned short i = 0; i < iM; i++)
	{
		matrix[iM][iN] += matrix[i][iN];
	}
	for (unsigned short j = 0; j < iN; j++)
	{
		matrix[iM][iN] += matrix[iM][j];
	}
	cout << "Initial matrix" << endl;
	for (unsigned short i = 0; i < iM ; i++)
	{
		for (unsigned short j = 0; j < iN ; j++)
			cout << matrix[i][j] << "\t";
		cout << endl;
	}
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