#include<iostream>
using namespace std;
int main() {
	long int way, n1, n2, o;
	cout << "mathser v1.0.5 by C&J" << endl;
	cout << "输入一个数字" << endl;
	cin >> n1;
	cout << "输入另一个数字" << endl;
	do {
		cin >> n2;
		cout << "选择计算方式" << endl << "1+ 2- 3x 4÷" << endl;
		cin >> way;

		if (way == 1) {
			o = n1 + n2;
			cout << n1 << "+" << n2 << "=" << o<<endl;
         }//加法

		else if (way == 2) {
			o = n1 - n2;
			cout << n1 << "-" << n2 << "=" << o<<endl;
		}//减法

		else if (way == 3) {
			o = n1 * n2;
			cout << n1 << "x" << n2 << "=" << o<<endl;
		}//除法

		else if (way == 4) {
			o = n1 / n2;
			cout << n1 << "÷" << n2 << "=" << o << endl;
		}//乘法

		else {
			cout << "choose the right way!";
			break;
		}//特殊情况

		n1 = o;//下一次运算

	} while (n1);
}