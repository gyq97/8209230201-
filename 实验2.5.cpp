#include <iostream>
using namespace std;
int main()
{
    char c;
    int letterCount = 0;
    int spaceCount = 0;
    int digitCount = 0;
    int otherCount = 0;

    cout << "������һ���ַ���"<<endl;

    while ((c = cin.get()) != '\n')//(c = cin.get()) != '\n'�����ȡabc�е�a
    {
        if (isalpha(c)) {
            letterCount++;
        }
        else if (isspace(c)) {
            spaceCount++;
        }
        else if (isdigit(c)) {
            digitCount++;
        }
        else {
            otherCount++;
        }
    }

    cout << "Ӣ����ĸ������" << letterCount << endl;
    cout << "�ո������" << spaceCount << endl;
    cout << "�����ַ�������" << digitCount << endl;
    cout << "�����ַ�������" << otherCount << endl;
    system("pause");
    return 0;
}