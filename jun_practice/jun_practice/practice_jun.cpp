
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



#include <iostream> //��, �� ���� �Է� �� �߸��Է� �� �ٸ��� ��� �ǰԲ�
using namespace std;

int main()
{
	
	int hour, minute;

	cout << "24�ð��� �˶� �����Դϴ�. ������ �˶����� 45�� ����˴ϴ�.\n";
	cout << "\"��\"�� �Է��ϼ���: ";
	cin >> hour;

	cout << "\"��\"�� �Է��ϼ���: ";
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

		cout << hour << "�� " << minute << "��";

		return 0;

		
	}
	else 
		cout << "�ð��� �ƴմϴ�. �ٽ� �Է��ϼ���" << endl;

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


#include <iostream> // �� ��� ����
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


#include <iostream> // �� ��� �ݴ�

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
	cout << "�� ������ �Է��ϼ��� :";
	cin >> a >> b;
	sum = a + b;
	cout << "����" << sum << "\n";
	cout << "����" << add(a, b) << "\n";
	cout << "���� ���� g ���� " << g;
	
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

	cout << song + "�� �θ� ������ ";
	cout << "(��Ʈ : ù���ڴ� " << elvis[0] << ")? : ";

	getline(cin, singer);
	if (singer == elvis)
		cout << "����";
	else
		cout << "Ʋ�Ƚ��ϴ�. " + elvis + "�Դϴ�. " << endl;
}
*/

#include <iostream>
#include <string>
#include <locale>

using namespace std;
// const* char song("����");

int main()
{
	wstring song(L"�� ���� ���");
	wstring elvis(L"������");

	wstring singer;

	setlocale(LC_ALL, "");
	
	wcout << song + L"�� �θ� ������?" << endl;
	wcout << L"��Ʈ : ù���ڴ� \"" << elvis[0] << L"\" : ";

	getline(wcin, singer);
	if (singer == elvis)
		cout << "����";
	else
		cout << "Ʋ�Ƚ��ϴ�. " << endl;

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

