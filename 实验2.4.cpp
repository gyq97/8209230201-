#include <iostream>
using namespace std;
int main()
{
    char op;
   int num1, num2;

   cout << "�����������+��-��*��/ ��%: " << endl;;
    cin >> op;

    cout << "����������: " << endl;;
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        cout << num1 + num2 << endl;
        break;

    case '-':
        cout << num1 - num2 << endl;
        break;

    case '*':
        cout << num1 * num2<<endl;
        break;

    case '/':
        if (num2 == 0)
        {
            cout << "error,���ܳ�����"<<endl;
            break;
        }
        else
        {
            cout << num1 / num2<<endl;
            break;
        }
    case '%':
        if (num2 == 0)
        {
            cout << "error,���ܳ�����"<<endl;
            break;
        }
        else
        {
            cout << num1 % num2 << endl;//����С��������ȡģ����
            break;
        }
    default:
        cout << "Error!  ��������ȷ�������"<<endl;
        break;
    }
    system("pause");
    return 0;
}