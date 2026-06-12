#include <iostream>
using namespace std;
void CheckAge();
string CheckScore();
int main()
{
    //CheckAge();
    
    string lv = CheckScore();
    cout << "你的评级是：" << lv << endl;
}

string CheckScore()
{
    
    int Score;
    string lv;
    cout << "请输入你的成绩\n";
    cin >> Score;
    if (Score<60)
    {
        lv = "E";
    
    }
    else if (Score<70)
    {
        lv = "D";
    }
    else if (Score < 80)
    {
        lv = "C";
    }
    else if (Score < 90)
    {
        lv = "B";
    }
    else 
    {
        lv = "A";
    }
    return lv;
}

void CheckAge()
{
    cout << "请输入你的年龄\n";
    int age;
    cin >> age;

    if (age < 13)
    {
        cout << "你是孩子\n";
    }
    else if (age <= 19)
    {
        cout << "你是青少年\n";
    }
    else if (age <= 59)
    {
        cout << "你是成年人\n";
    }
    else
    {
        cout << "你是老年人\n";
    }
}