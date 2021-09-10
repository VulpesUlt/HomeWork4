// HomeWork4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main() {
// Task 1
    int number1(0), number2(0);
    cout << "Enter two numbers" << endl;
    cin >> number1 >> number2;
    cout << "number1: " << number1 << " number2: " << number2 << endl;
    if (number1 + number2 > 10 && number1 + number2 < 20) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
 
// Task 2
    const int cNum1(2), cNum2(8);
    if ((cNum1 == 10 && cNum2 == 10) || cNum1 + cNum2 == 10) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }

// Task 3
    cout << "Your number:";
    for (int i = 0; i < 25; i++) {
        cout << 1 + i * 2 << " ";
    }
    cout << "\n";
    
// Task 4
    int numTask4(0);
    cout << "Enter the number for task 4:";
    cin >> numTask4;
    if (numTask4 % 2 == 0 && numTask4 >= 0) {
        cout << "The number is even \n";
    }
    else if (numTask4 % 2 == 1) {
        cout << "The number is not even \n";
    }
    else {
        cout << "You entered wrong number \n";
    }

// Task 5
    int year (0);
    cout << "Enter year:";
    cin >> year;
    if (year % 400 == 0) {
        cout << "This is a leap year)" << endl;
    }
    else if (year % 4 == 0 && year % 100 != 0  ) {
        cout << "This is a leap year)" << endl;
    }
    else {
        cout << "This is not a leap year(" << endl;
    }

    return 0;
}