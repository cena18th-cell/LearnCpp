#include <iostream>
using namespace std;

// 函数声明
void InputScores(int scores[], int size);
float GetAverage(int scores[], int size);
int GetMax(int scores[], int size);

int main()
{
    int scores[5];

    InputScores(scores, 5);

    cout << "平均分：" << GetAverage(scores, 5) << endl;
    cout << "最高分：" << GetMax(scores, 5) << endl;

    return 0;
}

// 输入成绩
void InputScores(int scores[], int size)
{
    cout << "请输入 " << size << " 个成绩：" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "第 " << i + 1 << " 个成绩：";
        cin >> scores[i];
    }
}

// 计算平均值
float GetAverage(int scores[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += scores[i];
    }

    return (float)sum / size;
}

// 找最大值
int GetMax(int scores[], int size)
{
    int max = scores[0];

    for (int i = 1; i < size; i++)
    {
        if (scores[i] > max)
        {
            max = scores[i];
        }
    }

    return max;
}