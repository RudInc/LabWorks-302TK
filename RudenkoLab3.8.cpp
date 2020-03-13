#include <iostream>
#include <cmath>

using namespace std;



/*

 y = k/((x^k) + (y^k-1))

 k = 1,2...

 loop y >= z
 (x,y,z)
 x,y > 1


 1.Input variables x,y,z
 2.Loop while result >= z
 3.Show result
*/

int main()
{
	int k = 1;
	float fRes, fx, fy, fz;
	cout << "Input variables res = k/((x^k) + (y^k-1))" << endl<<"k = 1,2...;"<<endl;
	cout << "Input integer z = ";
	cin >> fz;
	do 
	{
		cout << "Input integer y. y > 1" << endl << "y = ";
		cin >> fy;
	} while (fy <= 1);
	do
	{
		cout << "Input integer x. x > 1"<<endl<<"x = ";
		cin >> fx;
	} while (fx <= 1);

	cout << "z = " << fz << " y = " << fy << " x = " << fz << endl;
	do
	{
		fRes = k / (pow(fx, k) + pow(fy, k-1));
		cout << "Result = " << fRes << endl;
		k++;
	} while (fRes >= fz);
	system("pause");

	return 0;
}