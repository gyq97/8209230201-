#include<iostream>
using namespace std;
int main()
{
	double i = 0,j=0,sum=0;
	for (i = 2; i <= 100; i = 2 * i)
	{
		sum = sum + i * 0.8;
		j++;
	}
		cout <<"ÿ��ƽ����"<< sum / j<<"Ԫ" << endl;

	system("pause");
	return 0;
}