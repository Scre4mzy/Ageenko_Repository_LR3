#include <iostream>
     #include <string>
     using namespace std;
     
     void FirstDigitOfNumber()
     {
         // Задание 1. Найти первую цифру числа X
         // Здесь должен быть Ваш код
         cout << "Результат Задания 1: " << endl;
     }
     
     void NthDigitOfNumber()
     {
         // Задание 2. Найти N-ю цифру числа X (нумерация справа налево)
         // Здесь должен быть Ваш код
         cout << "Результат Задания 2: " << endl;
     }
     
     void Menu()
     {
         int choice;
         do {
             cout << "Меню:" << endl;
             cout << "1. Найти первую цифру числа X" << endl;
             cout << "2. Найти N-ю цифру числа X" << endl;
             cout << "0. Выход" << endl;
             cout << "Выберите действие: ";
             cin >> choice;
             
             switch(choice) {
                 case 1:
                     FirstDigitOfNumber();
                     break;
                 case 2:
                     NthDigitOfNumber();
                     break;
                 case 0:
                     cout << "Выход из программы." << endl;
                     break;
                 default:
                     cout << "Неверный выбор. Попробуйте снова." << endl;
             }
         } while(choice != 0);
     }
     
     int main()
     {
         Menu();
         return 0;
     }
