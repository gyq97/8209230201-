#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
    float f = 0;
    cout << "�����뻪���¶ȣ�" << f << fixed << setprecision(3) << "��F" << endl;
    cin >> f;

    float c = (f - 32) * 5 / 9;
    cout << "�����¶ȣ�" << c << fixed << setprecision(3) << "��C" << endl;
    system("pause");
    return 0;
}
