#include <iostream>
using namespace std;
const double PI = 3.141592657;
int main()
{
    double radius, height;

    cout << "������Բ׶�׵İ뾶��";
    cin >> radius;

    cout << "������Բ׶�ĸߣ�";
    cin >> height;
    double volume = (PI * radius * radius * height) / 3;
    cout << "Բ׶�����Ϊ��" << volume << endl;
    system("pause");
    return 0;
}
