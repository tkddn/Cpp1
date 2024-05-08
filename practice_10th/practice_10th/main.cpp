/*
//예제 4-1 객체 포인터 선언 및 활용
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
//예제 4-2 Cirlce클래스의 배열 선언 및 활용
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
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
	Circle* p; 
	p = circleArray; 
	for (int i = 0; i < 3; i++) { 
		cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
		p++; 
	}
}
*/

/*
//예제 4-3 객체 배열 초기화
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
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
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
	for (int i = 0; i < 2; i++) // 줄 바뀌는거(2줄)
		for (int j = 0; j < 3; j++) { //칸 바뀌는거(3칸)
			cout << "Circle [" << i << "," << j << "]의 면적은 ";
			cout << circles[i][j].getArea() << endl;
		}
}

*/

/*
//예제 4-5 정수형 공간의 동적 할당 및 반환 예
#include <iostream>
using namespace std;
int main() {
	int* p;

	p = new int;
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
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
//예제 4-6 정수형 배열의 동적 할당 및 반환

#include <iostream>
using namespace std;
int main() {
	cout << "입력할 정수의 개수는?";
	int n;
	cin >> n; 
	if (n <= 0) return 0;
	int* p = new int[n];
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 정수: "; 
			cin >> p[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += p[i];
	cout << "평균 = " << sum / n << endl;
	delete [] p; 
}
*/

/*
//예제 4-7 Circle  객체의 동적 생성 및 반환

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
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
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
//예제 4-8 Circle 객체의 동적 생성과 반환 응용

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
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
	int radius;
	while (true) {
		cout << "정수 반지름 입력(음수이면 종료)>> ";
		cin >> radius;
		if (radius < 0) break; 
		Circle* p = new Circle(radius); 
		cout << "원의 면적은 " << p->getArea() << endl;
		delete p; 
	}
}

*/

/*
// 예제 4-9 Cirlce 배열의 동적 생성 및 반환
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
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
	Circle* pArray = new Circle[3]; // 객체 배열 생성
	pArray[0].setRadius(10);
	pArray[1].setRadius(20);
	pArray[2].setRadius(30);
	for (int i = 0; i < 3; i++) {
		cout << pArray[i].getArea() << '\n';
	}
	Circle* p = pArray; // 포인터 p에 배열의 주소값으로 설정
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << '\n';
		p++; // 다음 원소의 주소로 증가
	}
	delete[] pArray; // 객체 배열 소멸

}
*/

/*
//예제 4-10 객체 배열의 동적 생성과 반환 응용
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
	cout << "생성하고자 하는 원의 개수?";
	int n, radius;
	cin >> n; 
	Circle* pArray = new Circle[n]; 
	for (int i = 0; i < n; i++) {
		cout << "원" << i + 1 << ": "; 
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
	cout << endl << "면적이 100에서 200 사이인 원의 개수는 "
		<< count << endl;
	delete[] pArray;
}

*/

/*
//예제 4-11 string 클래스를 이용한 문자열 생성 및 출력
#include <iostream>
#include <string>
using namespace std;
int main() {
	
	string str; 
	string address("서울시 성북구 삼선동 389");
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
//예제 4-12 string 배열 선언과 문자열 키 입력 응용
#include <iostream>
#include <string>
using namespace std;
int main() {
	string names[5]; 
	for (int i = 0; i < 5; i++) {
		cout << "이름 >> ";
		getline(cin, names[i], '\n');
	}
	string latter = names[0];
	for (int i = 1; i < 5; i++) {
		if (latter < names[i]) { 
			latter = names[i]; 
		}
	}
	cout << "사전에서 가장 뒤에 나오는 문자열은 " << latter << endl;
}

*/


/*
//예제 4-13 문자열을 입력 받고 회전시키기
#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cout << "문자열을 입력하세요(한글 안됨) " << endl;
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
* //예제 4 - 14 문자열 처리 응용 - 덧셈 문자열을 입력 받아 덧셈 실행
#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cout << "7+23+5+100+25와 같이 덧셈 문자열을 입력하세요." << endl;
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
	cout << "숫자들의 합은 " << sum;
}
*/

/*
//예제 4-15 문자열 find 및 replace

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;
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

//교재 확인해야함