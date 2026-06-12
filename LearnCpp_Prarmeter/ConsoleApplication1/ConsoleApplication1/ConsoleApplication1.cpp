

#include <iostream>
using namespace std;
void PrintName(string name);
void PrintPlayer(string name, int age);
string GetPlayerGrade(string name, int score);
int main()
{
    std::cout << "Hello World!\n";
    PrintName("御坂");
    PrintPlayer("MisakaRain", 1145);
    cout << GetPlayerGrade("Misaka", 50) << endl;
}

string GetPlayerGrade(string name,int score)
{
    string lv;
    if (score>=60)
    {
        lv = name+"的评级为A";
    }
    else
    {
        lv = name + "的评级为B";
    }
    return lv;
}

void PrintName(string name)
{
    cout << "你的名字是：" << name << endl;
}
void PrintPlayer(string name, int age)
{
    cout << "玩家名字是：" << name << endl;
    cout << "玩家年龄是：" << age << endl;
}