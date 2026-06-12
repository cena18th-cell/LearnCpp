#include <iostream>
using namespace std;
void InputNameAndDisplay_2();
void InputNameAndDisplay();

int main()
{
    cout << "Hello World!" << endl;

    int age = 1145;

    cout << "你的年龄是：" << age << "（这是在 main 函数里面）" << endl;

    cout << "回车跳转普通函数" << endl;

    cin.get();

    system("cls");

    InputNameAndDisplay();
    InputNameAndDisplay_2();
    return 0;
}

void InputNameAndDisplay()
{
    string name;
    cout << "请输入名称: ";

    cin >> name;

    cout << "\n\n\n你叫：" << name << "（这是普通函数输出的）" << endl;
}