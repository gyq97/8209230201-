#include<iostream> 
using namespace std;
int main()
{
	int a, b;
	int max = 0;
	cout << "������������������" << endl;
	cin >> a >> b;
	for (int i = 1; i <= a && i <= b; i++)
	{
		if(a%i==0&&b%i==0)
		{
			max = i;
			cout << "���Լ��Ϊ��" <<i<< endl;
		}
	}
	int MAX = (a > b ? a : b);
	do {
		if (MAX % a == 0 && MAX % b == 0)
		{
			cout << "��С��Լ��Ϊ��" << MAX << endl;
			break;
		}
		else MAX++;
	} while (true);
	system("pause");
	return 0;
}