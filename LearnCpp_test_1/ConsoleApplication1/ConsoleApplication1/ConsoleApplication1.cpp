// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//




#include <iostream>
using namespace std;
void SayHello(string name);
void PrintStudent(string name, int age);
int Add(int a, int b);
string GetGameLevel(int score);
void PrintTitle();

int main()
{
    std::cout << "Hello World!\n";
    SayHello("Misaka");
    PrintStudent("Misaka", 114);
    cout << Add(4, 5) << endl;
    cout<<GetGameLevel(90)<<endl;
    cout << GetGameLevel(60) << endl;
    cout << "输入回车继续" << endl;
    cin.get();
    system("cls");
    PrintTitle();

}
void PrintTitle()
{
    cout << "========== 成绩检查系统 ==========" << endl;
}

string GetGameLevel(int score)
{
    if (score>80)
    {
        return("高手");
    }
    else
    {
        return("新手");
    }
}

int Add(int a, int b)
{
    return a + b;
}

void SayHello(string name)
{
    cout << "你好," << name << endl;
}
void PrintStudent(string name, int age)
{
    cout << "学生姓名：" << name << endl;
    cout << "学生成绩：" << age << endl;
}






// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
