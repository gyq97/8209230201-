#include<iostream>
using namespace std;
int main()
{
	char input;
	cout << "������һ���ַ���" << endl;
	cin >> input;
	if (input >= 'a' && input <= 'z')
	{
		input = toupper(input);
		cout <<"���д�ַ�Ϊ��"<<input << endl;
	}
	else {
		cout << input + 1 << endl;
	}

	system("pause");
	return 0;
}