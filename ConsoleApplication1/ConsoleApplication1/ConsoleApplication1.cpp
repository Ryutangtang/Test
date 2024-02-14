#include <iostream>
using namespace std;

int main()
{
	const int Size_L = 20;
	const int Size_W = 40;
	char Arr_1[Size_L][Size_W];

	for (int i = 0; i < Size_L; i++)
	{
		for (int j = 0; j < Size_W; j++)
		{
			Arr_1[i][j] = ' ';
			if (i == 0 || j == 0 || i == 19 || j == 39)
			{
				Arr_1[i][j] = 'W';
			}
		}
	}
	for (int i = 0; i < Size_L; i++)
	{
		for (int j = 0; j < Size_W; j++)
		{

			cout << Arr_1[i][j];
		}
		cout << endl;
	}

}