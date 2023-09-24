// 17 Вариант, 2 задание
//
// Даны три числа. Необходимо найти произведение двух наибольших из них.
//

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    // Ввод переменных
    int num1, num2, num3;
    
    cout << "Введите первое число: ";
    cin >> num1;
    
    cout << "Введите второе число: ";
    cin >> num2;
    
    cout << "Введите третье число: ";
    cin >> num3;

    // Произведение двух наибольших из них
       int result;

       if (num1 >= num2 && num1 >= num3) {
           if (num2 >= num3) {
               result = num1 * num2;
           } else {
               result = num1 * num3;
           }
       } else if (num2 >= num1 && num2 >= num3) {
           if (num1 >= num3) {
               result = num2 * num1;
           } else {
               result = num2 * num3;
           }
       } else {
           if (num1 >= num2) {
               result = num3 * num1;
           } else {
               result = num3 * num2;
           }
       }
    
    // Вывод результата
    cout << "Произведение двух наибольших чисел " << result << endl;

    return 0;
}



