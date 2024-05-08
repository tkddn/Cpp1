/*
//���� 4-1 ��ü ������ ���� �� Ȱ��
#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getArea();
};
double Circle::getArea() {
	return 3.14 * radius * radius;
}


int main() {
	Circle donut;
	Circle pizza(30);
	
	cout << donut.getArea() << endl;
	
	Circle *p;
	p = &donut;
	cout << p->getArea() << endl; 
	cout << (*p).getArea() << endl; 
	p = &pizza;
	cout << p->getArea() << endl; 
	cout << (*p).getArea() << endl; 
}
*/

/*
//���� 4-2 CirlceŬ������ �迭 ���� �� Ȱ��
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle circleArray[3]; 
	
	circleArray[0].setRadius(10); 
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);
	for (int i = 0; i < 3; i++) 
		cout << "Circle " << i << "�� ������ " << circleArray[i].getArea() << endl;
	Circle* p; 
	p = circleArray; 
	for (int i = 0; i < 3; i++) { 
		cout << "Circle " << i << "�� ������ " << p->getArea() << endl;
		p++; 
	}
}
*/

/*
//���� 4-3 ��ü �迭 �ʱ�ȭ
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle circleArray[3] = { Circle(10), Circle(20), Circle() }; 
	for (int i = 0; i < 3; i++)
		cout << "Circle " << i << "�� ������ " << circleArray[i].getArea() << endl;
}
*/
/*
#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle circles[2][3];

	circles[0][0].setRadius(1);
	circles[0][1].setRadius(2);
	circles[0][2].setRadius(3);
	circles[1][0].setRadius(4);
	circles[1][1].setRadius(5);
	circles[1][2].setRadius(6);
	for (int i = 0; i < 2; i++) // �� �ٲ�°�(2��)
		for (int j = 0; j < 3; j++) { //ĭ �ٲ�°�(3ĭ)
			cout << "Circle [" << i << "," << j << "]�� ������ ";
			cout << circles[i][j].getArea() << endl;
		}
}

*/

/*
//���� 4-5 ������ ������ ���� �Ҵ� �� ��ȯ ��
#include <iostream>
using namespace std;
int main() {
	int* p;

	p = new int;
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}
	*p = 5; 
	int n = *p;
	cout << "*p = " << *p << '\n';
	cout << "n = " << n << '\n';
	delete p;
}
*/

/*
//���� 4-6 ������ �迭�� ���� �Ҵ� �� ��ȯ

#include <iostream>
using namespace std;
int main() {
	cout << "�Է��� ������ ������?";
	int n;
	cin >> n; 
	if (n <= 0) return 0;
	int* p = new int[n];
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "��° ����: "; 
			cin >> p[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += p[i];
	cout << "��� = " << sum / n << endl;
	delete [] p; 
}
*/

/*
//���� 4-7 Circle  ��ü�� ���� ���� �� ��ȯ

#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};
Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

int main() {
	Circle* p, * q;
	p = new Circle;
	q = new Circle(30);
	cout << p->getArea() << endl << q->getArea() << endl;
	delete p;
	delete q;
}

*/

/*
//���� 4-8 Circle ��ü�� ���� ������ ��ȯ ����

#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};
Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

int main() {
	int radius;
	while (true) {
		cout << "���� ������ �Է�(�����̸� ����)>> ";
		cin >> radius;
		if (radius < 0) break; 
		Circle* p = new Circle(radius); 
		cout << "���� ������ " << p->getArea() << endl;
		delete p; 
	}
}

*/

/*
// ���� 4-9 Cirlce �迭�� ���� ���� �� ��ȯ
#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};
Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

int main() {
	Circle* pArray = new Circle[3]; // ��ü �迭 ����
	pArray[0].setRadius(10);
	pArray[1].setRadius(20);
	pArray[2].setRadius(30);
	for (int i = 0; i < 3; i++) {
		cout << pArray[i].getArea() << '\n';
	}
	Circle* p = pArray; // ������ p�� �迭�� �ּҰ����� ����
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << '\n';
		p++; // ���� ������ �ּҷ� ����
	}
	delete[] pArray; // ��ü �迭 �Ҹ�

}
*/

/*
//���� 4-10 ��ü �迭�� ���� ������ ��ȯ ����
#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle();
	~Circle() { }
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};
Circle::Circle() {
	radius = 1;
}

int main() {
	cout << "�����ϰ��� �ϴ� ���� ����?";
	int n, radius;
	cin >> n; 
	Circle* pArray = new Circle[n]; 
	for (int i = 0; i < n; i++) {
		cout << "��" << i + 1 << ": "; 
		cin >> radius; 
		pArray[i].setRadius(radius); 
	}
	int count = 0; 
	Circle* p = pArray;
	for (int i = 0; i < n; i++) {
		cout << p->getArea() << ' '; 
		if (p->getArea() >= 100 && p->getArea() <= 200)
			count++;
		p++;
	}
	cout << endl << "������ 100���� 200 ������ ���� ������ "
		<< count << endl;
	delete[] pArray;
}

*/

/*
//���� 4-11 string Ŭ������ �̿��� ���ڿ� ���� �� ���
#include <iostream>
#include <string>
using namespace std;
int main() {
	
	string str; 
	string address("����� ���ϱ� �Ｑ�� 389");
	string copyAddress(address); 
	char text[] = { 'L', 'o', 'v', 'e', ' ', 'C', '+', '+', '\0' }; 
	string title(text); 

	cout << str << endl; // 
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;
}
*/

/*
//���� 4-12 string �迭 ����� ���ڿ� Ű �Է� ����
#include <iostream>
#include <string>
using namespace std;
int main() {
	string names[5]; 
	for (int i = 0; i < 5; i++) {
		cout << "�̸� >> ";
		getline(cin, names[i], '\n');
	}
	string latter = names[0];
	for (int i = 1; i < 5; i++) {
		if (latter < names[i]) { 
			latter = names[i]; 
		}
	}
	cout << "�������� ���� �ڿ� ������ ���ڿ��� " << latter << endl;
}

*/


/*
//���� 4-13 ���ڿ��� �Է� �ް� ȸ����Ű��
#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cout << "���ڿ��� �Է��ϼ���(�ѱ� �ȵ�) " << endl;
	getline(cin, s, '\n'); 
	int len = s.length(); 
	for (int i = 0; i < len; i++) {
		string first = s.substr(0, 1); 
		string sub = s.substr(1, len - 1); 
		s = sub + first;
		cout << s << endl;
	}
}
*/


/*
* //���� 4 - 14 ���ڿ� ó�� ���� - ���� ���ڿ��� �Է� �޾� ���� ����
#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cout << "7+23+5+100+25�� ���� ���� ���ڿ��� �Է��ϼ���." << endl;
	getline(cin, s, '\n'); 
	int sum = 0;
	int startIndex = 0; 
	while (true) {
		int fIndex = s.find('+', startIndex);
		if (fIndex == -1) { 
			string part = s.substr(startIndex);
			if (part == "") break; 
			cout << part << endl;
			sum += stoi(part); 
			break;
		}
		int count = fIndex - startIndex; 
		string part = s.substr(startIndex, count);
		cout << part << endl;
		sum += stoi(part); 
		startIndex = fIndex + 1; 
	}
	cout << "���ڵ��� ���� " << sum;
}
*/

/*
//���� 4-15 ���ڿ� find �� replace

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�." << endl;
	getline(cin, s, '&'); 
	string f, r;
	cout << endl << "find: ";
	getline(cin, f, '\n'); 
	cout << "replace: ";
	getline(cin, r, '\n');
	int startIndex = 0;

	while (true) {
		int fIndex = s.find(f, startIndex); 
		if (fIndex == -1)
			break; 
		s.replace(fIndex, f.length(), r); 
		startIndex = fIndex + r.length();
	}
	cout << s << endl;
}
*/

//���� Ȯ���ؾ���