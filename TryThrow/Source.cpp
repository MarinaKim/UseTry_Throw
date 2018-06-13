#include<iostream>
#include<time.h>
#include"SaveArray.h"
using namespace std;

int division(int a, int b) {
	if (b == 0)
		throw"division by zero";
	else
		return a / b;
}
int main() {
	srand(time(NULL));
	int n;
	cout << "num: ";
	cin >> n;
	switch (n) {

		// try & throw example
	case 1: {
		int a;
		cin >> a;
		try {
			if (a > 10)
				throw 0.5;
			else if (a == 5)
				throw('x');
			else if (a > 5)
				throw "Unknown error";
			else
				throw 500;
		}
		catch (double d) {
			cout << d << endl;
		}
		catch (char c) {
			cout << c << endl;
		}
		catch (char*str) {
			cout << str << endl;
		}
		catch (...) {
			cout << "Error cannot be handled" << endl;
		}
		cout << "Sucsefull" << endl;
	}break;
		//"/0"
	case 2: {
		int a, b;
		cin >> a >> b;
		try {
			if (b == 0)
				throw "Division by zero";
			int c = a / b;
			cout << c << endl;
		}
		catch (char* str) {
			cout << str << endl;
		}
			
	}break;
		//"/0" with function
	case 3: {
		int a, b;
		cin >> a >> b;
		try {
			int c = division(a, b);
			cout << c << endl;
		}
		catch (char* str) {
			cout << str << endl;
		}
	}break;
		//array
	case 4: {
		int mas[5],i;
		for (int i = 0;i < 5;i++)
			mas[i] = 0 + rand() % 20;
		cin >> i;
		try {
			if ((i<0) || (i>= 5))
				throw "leave for a limit";
			cout << mas[i] << endl;
		}
		catch(char * str){
			cout << str << endl;
		}
		

	}break;
		//array with class
	case 5: {
		SaveArray<int> arr(5);
		try {
			arr[4] = 100;
			arr[12] = 200;
		}
		catch (char *str) {
			cout << str << endl;
		}

	} break;
		/*
		//элемент из массива по индексу, и деление на 0
		ѕродемонстрируйте повторную генерацию исключений
		- дл€ этого сконструируйте один вложенный блок try - catch во внешнем блоке try с произвольным
		количеством блоков catch;
		*/
	case 6: {
		int mas[5], i,b;
		for (int i = 0;i < 5;i++)
			mas[i] = 0 + rand() % 20;
		cout << "enter an index:";
		cin >> i;
		cout << "Enter b:";
		cin >> b;
		try {
			if ((i<0) || (i >= 5))
				throw "leave for a limit";
			cout << mas[i] << endl;
			try {
				if (b == 0)
					throw "Division by zero";
				int c = mas[i] / b;
				cout << c << endl;
			}
			catch (char* str) {
				cout << str << endl;
			}
		}
		catch (char * str) {
			cout << str << endl;
		}
		catch (...) {
			cout << "Error cannot be handled" << endl;
		}
	}break;

		/* аждый блок catch предназначен дл€ перехвата исключени€ определенного типа.
ƒо этого момента мы использовали исключени€, которые представл€лись базовыми типами.
ƒавайте создадим пользовательский тип данных - класс CMyException, содержащий только 
одно поле данных - это строка (char *, char [] string ...), содержащее информацию об ошибке.
—оздадим конструктор с параметром, который инициализуватиме это поле и необходимые методы.
¬ блоке try сгенерируем исключени€ типа CMyException и перехватим его в соответствующем блоке catch,
выведем на экран сообщение об ошибке, использу€, например, метод класса не имеет следующий прототип:
char * MyException :: ErrorMessage ();	*/
	case 7: {

	}break;
	}

	system("pause");
	return 0;
}