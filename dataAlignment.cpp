#include<iostream>

using namespace std;

class box
{
public:
	int x;
	char c;
	box (int a=0, char ch='k')
	{
		this->x = a;
		this->c = ch;
	}
	~box()
	{
		cout << "\nDestructor called\n";
	}
	
};

int main()
{
	int row = 3;
	int col = 4;
	box **dbPtr= new box*[row];
	for (int i = 0; i < row; i++)
	{
		dbPtr[i] = new box[col];
		for (int j = 0; j < col; j++)
		{
			dbPtr[i][j].x = (i) * col + j;
			cout << dbPtr[i][j].x << " " << dbPtr[i][j].c << " " << &((dbPtr[i][j]).x) << "\t";
		}
		cout << "\n";
	}

	for (int i = 0; i < row; i++)
	{
		delete[] dbPtr[i];
	}
	delete[] dbPtr;
	
	system("Pause");
	return 0;
}