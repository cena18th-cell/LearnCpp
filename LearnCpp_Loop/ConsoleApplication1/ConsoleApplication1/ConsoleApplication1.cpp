
#include <iostream>
void CountToTen();
void PrintOddEven();
void GuessNumber();
using namespace std;
int main()
{
    std::cout << "Hello World!\n";
	//CountToTen();
	//PrintOddEven();
	GuessNumber();
}

void GuessNumber()
{
	int target = 58;
	int Number;
	
	cout << "猜猜看" << endl;
	while (1)
	{
		
		cin >> Number;
		system("cls");
		if (Number>58)
		{
			cout << "太大了，再猜猜看" << endl;
			
		}
		if (Number<58)
		{
			cout << "太小了，再猜猜看" << endl;
		}
		if (Number==58)
		{
			break;
		}
	}
	cout << "猜对了";
}

void CountToTen()
{
	for (int i = 1; i < 11; i++)
	{
		cout << i << endl;
		
	}
}
void PrintOddEven()
{
	for (int i = 1; i < 21; i++)
	{	
		cout << i ;
		if (i%2==0)
		{
			cout << "是偶数" << endl;
		}
		else
		{
			cout << "是奇数" << endl;
		}
	}
}