//this is the code in C++ for LowerTriangular matrix.
//can not work with matrix.cpp in the same location

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class LowerTri
{
private:
	int* A;
	int n;
public:
	LowerTri()
	{
		n = 2;
		A = new int[2*(2+1)/2];
	}
	LowerTri(int n)
	{
		this->n = n;
		A = new int[n*(n+1)/2];
	}
	~LowerTri()
	{
		delete[]A;
	}
	void Set(int i, int j, int x);
	int Get(int i, int j);
	void Display();
	int GetDimension(){return n;}
};

void LowerTri::Set(int i, int j, int x)
{
	if (i >= j)
	{
		A[i * (i - 1) / 2 + j - 1] = x;
		//A[n * (j - 1) - (j-2) * (j-1) / 2 + i - j] = x;
		//uncomment for column major formula
	}
}

int LowerTri::Get(int i, int j)
{
	if (i == j)
	{
		return A[i * (i - 1) / 2 + j - 1];
		//return A[n * (j - 1) - (j-2) * (j-1) / 2 + i - j];
		//uncomment for column major formula
	}
	return 0;
}

void LowerTri::Display()
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i >= j)
			{
				cout << A[i * (i - 1) / 2 + j - 1] << " ";
				//cout << A[n * (j - 1) - (j-2) * (j-1) / 2 + i - j];
				//uncomment for column major formula
			}
			else
				cout << "0 ";
		}
		cout << endl;
	}
}
int main()
{
	//LowerTri d(4);
	//d.Set(1, 1, 5);
	//d.Set(2, 2, 8);
	//d.Set(3, 3, 9);
	//d.Set(4, 4, 12);

	//d.Display();

	int d;
	cout<<"Enter Dimensions"<<endl;
	cin >> d;
	 
	LowerTri lm(d);

	int x;
	cout<<"Enter All Elements"<<endl;
	for(int i = 1; i<=d;i++)
	{
		for(int j=1;j<=d;j++)
		{
			cin>>x;
			lm.Set(i,j,x);
		}
	}
	cout << endl;

	lm.Display();

	return 0;
}
