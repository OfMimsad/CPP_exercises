#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// محمدرضا صفرپور تمرینات


////1.عددی رو از ورودی دریافت کرده و تشخیص دهد عدد منفی هست یا مثبت.
//int main()
//{
//	double num_input = 0.0;
//	cout << "Please enter a number: " << endl;
//	while (cin >> num_input)
//	{
//		cout << "Please enter a number (input a non-number to stop the programme):\n" << endl;
//		if (num_input >= 0)
//		{
//			cout << "You have inputed a positive number!\n" << endl;
//		}
//		else
//		{
//			cout << "You have inputed a negative number!\n" << endl;
//		}
// 	cout << "GOODBYE!\n";
//	}
//}





////عددی رو از ورودی دریافت کرده و تشخیص دهد عدد  صفر و یا منفی هست یا مثبت.2
//int main()
//{
//	double num_input = 0.0;
//	cout << "Please enter a number: " << endl;
//	while (cin >> num_input)
//	{
//		cout << "Please enter a number (input a non-number to stop the programme):\n";
//		if (num_input > 0)
//		{
//			cout << "You have inputed a positive number!\n";
//		}
//		else if(num_input < 0)
//		{
//			cout << "You have inputed a negative number!\n";
//		} else if(num_input == 0)
//		{
//			cout << "You have inputed ZERO!\n";
//		}
// 	cout << "GOODBYE!\n";
//	}
//}




////3عددی رو دریافت کرده  و تشخیص دهد زوج هست یا فرد
//int main()
//{
//	int num_input = 0;
//	cout << "Please enter a number: " << endl;
//	while (cin >> num_input)
//	{
//		cout << "Please enter a number (input a non numeric to stop the programme):\n";
//		if (num_input % 2 == 0 || num_input == 0)
//		{
//			cout << "You inputed a Even number!\n";
//		}
//		else
//		{
//			cout << "You have inputed a odd number!\n";
//		}
//	}
//
//	cout << "GOODBYE!\n";
//}




//.سه عدد رو دریافت کرده و بزرگترین را تشخیص دهید.(یا کوچکترین)
//int main()
//{
//	vector<int> numbers_inputed;
//	long long int num_input = 0;
//	int biggest_num = 0;
//	int smallest_num = 0;
//	bool condition = true;
//	cout << "Please enter a three consecutive numbers followed by a white space or enter: " << endl;
//	while (true)
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			if (cin >> num_input)
//			{
//				numbers_inputed.push_back(num_input);
//			} else
//			{
//				condition = false;
//				break;
//			}
//		}
//
//		if (condition)
//		{
//			biggest_num = numbers_inputed[0];
//			for (auto i : numbers_inputed)
//			{
//				if (i > biggest_num)
//				{
//					biggest_num = i;
//				}
//			}
//			smallest_num = numbers_inputed[0];
//			for (auto x : numbers_inputed)
//			{
//				if (x < smallest_num)
//				{
//					smallest_num = x;
//				}
//			}
//			cout << "The biggest number you inputed is: " << biggest_num << "\n";
//			cout << "The smallest number you inputed is: " << smallest_num << "\n";
//			numbers_inputed = {};
//			cout << "Please enter a three consecutive numbers followed by a white space or enter: " << endl;
//		} else
//		{
//			cout << "Wrong input only numbers!\nGOODBYE!\n";
//			break;
//		}
//	}
//}




////عددی رو از ورودی دریافت کرده و بیان کند چه روزی از هفته  هست( در صورتی که عددی نامعتبر وارد شود پیغام مناسب نمایش داده شود)
//int main()
//{
//	char num_char;
//	int num_int = 0;
//	cout << "Please enter a number between 1 and 7 so computer could tell you which day it is: \n";
//	while (cin >> num_int)
//	{
//		num_char = '0' + num_int;
//		if (num_int >= 1 && num_int <= 7)
//		{
//			switch (num_char)
//			{
//			case '1': cout << "Shanbe\n";
//				break;
//			case '2': cout << "Yek Shanbe\n";
//				break;
//			case '3': cout << "Do Shanbe\n";
//				break;
//			case '4': cout << "Se Shanbe\n";
//				break;
//			case '5': cout << "Chahar Shanbe\n";
//				break;
//			case '6': cout << "Panj Shanbe\n";
//				break;
//			case '7': cout << "Jome\n";
//				break;
//			default:
//				break;
//			}
//		}
//		else
//		{
//			cout << "Please enter a valid number!!!\n";
//		}
//		cout << "Please enter a number between 1 and 7 so computer could tell you which day it is: \n";
//	}
//}


////.روزی ایام  هفته رو از کاربر به صورت متن دریافت کرده  و چندمین روز هفته بودن را مشخص کند.
//int main()
//{
//	vector<string> days;
//	days = { "shanbe", "yek shanbe", "do shanbe", "se shanbe", "chahar shanbe", "panj shanbe", "jome" };
//	string day_input;
//	cout << "Please enter a day's name(from  shanbe, yek shanbe, do shanbe, se shanbe, chahar shanbe, panj shanbe, jome)\n";
//	getline(cin,day_input);
//	for(int i = 0; i < days.size(); i++)
//	{
//		if(days[i] == day_input)
//		{
//			cout << day_input << " is the " << i+1 << " day of the week\n";
//		}
//	}
//}

////عددی رو به عنوان نمره از کاربر دریافت کرده و وضعیت دانش آموز را مشخص کنید اگر نمره بین ۱۴ تا ۱۶ بود وضعیت C  و اگر نمره بین ۱۶ تا ۱۸ بود وضعیت B  و اگر بین ۱۸ تا ۲۰ بود وضعیت A را مشخص کنید.
//int main()
//{
//	double grade = 0.0;
//	cout << "Enter your grade:\n";
//	cin >> grade;
//	if (grade >= 18 && grade <= 20)
//	{
//		cout << "You have gotten an A!\n";
//	}
//	else if (grade >= 16 && grade < 18)
//	{
//		cout << "You have gotten a B!\n";
//	}
//	else if (grade >= 14 && grade < 16)
//	{
//		cout << "You have gotten a C!\n";
//	}
//	else
//	{
//		cout << "INVALID INPUT\nPlease enter a grade between 14 and 20\n";
//	}
//}