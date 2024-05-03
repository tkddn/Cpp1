
/*
#include <iostream>
using namespace std;

int main()
{
	cout << "hello world"<< endl;
	int number = 10;
	cout << "number: " << number << endl;



#include <iostream>
using namespace std;

int main() {
	int age;
	cout << "Enter your age: ";
	cin >> age;
	cout << "you are " << age << " years old." << endl;
	return 0;
}



#include <iostream> //시, 분 까지 입력 및 잘못입력 시 다르게 출력 되게끔
using namespace std;

int main()
{
	
	int hour, minute;

	cout << "24시간제 알람 형식입니다. 설정한 알람에서 45분 단축됩니다.\n";
	cout << "\"시\"를 입력하세요: ";
	cin >> hour;

	cout << "\"분\"을 입력하세요: ";
	cin >> minute;
	
	if (hour >= 0&&hour < 24&&minute < 60&&minute >= 0)
	{

		if (minute - 45 < 0)
		{
			if (hour == 0)
			{
				hour = 23;
				minute = 60 - (45 - minute);
			}

			else
			{
				hour = hour - 1;
				minute = 60 - (45 - minute);
			}


		}

		else
		{
			minute = minute - 45;
		}

		cout << hour << "시 " << minute << "분";

		return 0;

		
	}
	else 
		cout << "시간이 아닙니다. 다시 입력하세요" << endl;

	return 0;
}
*/
/*

#include <iostream> 
using namespace std;

int main()
{
	int n;

	cin >> n;

	for (int i = 1; i < 10; i++)
	{
		cout << n << " * " << i << " = " << n * i << endl;
	}
}


#include <iostream> // 별 찍기 정배
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int x = 0; x <= i; x++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	
	return 0;

}


#include <iostream> // 별 찍기 반대

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 0; j < n - i; j++)
			cout << " ";

		for (int n = 0; n < i; n++)
			cout << "*";

		cout << endl;
	}

	return 0;
}

*/

/*
#include <iostream>

using namespace std;

int g = 20;

int add(int x, int y)
{
	return x + y;
}

int main()
{
	int a, b, sum;
	cout << "두 정수를 입력하세요 :";
	cin >> a >> b;
	sum = a + b;
	cout << "합은" << sum << "\n";
	cout << "합은" << add(a, b) << "\n";
	cout << "전역 변수 g 값은 " << g;
	
	return 0;

}

*/
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string song("Falling in love with you");
	string elvis("Elvis Presly");

	string singer;

	cout << song + "를 부른 가수는 ";
	cout << "(힌트 : 첫글자는 " << elvis[0] << ")? : ";

	getline(cin, singer);
	if (singer == elvis)
		cout << "맞음";
	else
		cout << "틀렸습니다. " + elvis + "입니다. " << endl;
}
*/

#include <iostream>
#include <string>
#include <locale>

using namespace std;
// const* char song("ㅎㅇ");

int main()
{
	wstring song(L"내 손을 잡아");
	wstring elvis(L"아이유");

	wstring singer;

	setlocale(LC_ALL, "");
	
	wcout << song + L"를 부른 가수는?" << endl;
	wcout << L"힌트 : 첫글자는 \"" << elvis[0] << L"\" : ";

	getline(wcin, singer);
	if (singer == elvis)
		cout << "맞음";
	else
		cout << "틀렸습니다. " << endl;

	return 0;
}

/*
#include <iostream>

using namespace std;

int main()
{
	int a, b;

	while (1)
	{
		cin >> a >> b;
		if (a == 0 && b == 0)
		{
			break;
		}
		else
		{
			cout << a + b << endl;
		}
	}
	return 0;
}
*/

/*
#include <iostream>

using namespace std;

int main()
{
	int A;
	int B;

	cin >> A >> B;

	if (A > B)
	{
		cout << ">" << endl;
	}
	else if (A < B) 
	{
		cout << "<" << endl;
	}
	else
	{
		cout << "==" << endl;
	}

	return 0;

}
*/

/*

#include <iostream>

using namespace std;

int main()
{
	string a;

	cin >> a;
	cout << a + "\?\?!" << endl;

	return 0;
}
*/

