#include<iostream>
using namespace std;
int main()
{
	int a=0, x=0, y=0;
	cout << "������һ��aֵ��" << endl;
	cin >> a;
	if (a < 0)
	{
		a = -a;
		cout << "�ѶԸ���a���д�����Ϊ����" << endl;
	}
		x = a;
		while (1)
		{
			y = (x + a / x) / 2;
			x = (y + a / y) / 2;
			if (abs(y - x) < 1e-5)
			{
				cout << "�������ƽ����Ϊ��" << x << endl;
				break;
			}
			y = x;
		}

	system("pause");
	return 0;
}