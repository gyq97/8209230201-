#include<iostream>
using namespace std;
int main()
{
	double a, b, c,l;
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && a + c > b)
	{
		cout << "l=" << a + b + c << endl;
		if (a == b || b == c || a == c)
		{
			cout << "���������ǵ���������" << endl;
		}
		else cout << "�������β��ǵ���������" << endl;
	}
	else  cout << "�޷�����������" << endl;

	system("pause");
	return 0;
}