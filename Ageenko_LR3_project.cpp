#include <iostream>
     #include <string>
     using namespace std;
     
     void FirstDigitOfNumber()
     {
         // Задание 1. Найти первую цифру числа X
         { 
         int X;
         cout << "Введите трехзначное число X: ";
         cin >> X;
         
         // Получаем первую цифру числа
         int firstDigit = X / 100;
         
         cout << "Первая цифра числа " << X << ": " << firstDigit << endl;
     }

         cout << "Результат Задания 1: " << endl;
     }
     
     void NthDigitOfNumber()
     {
         // Задание 2. Найти N-ю цифру числа X (нумерация справа налево)
        { 
          int X, N;
          cout << "Введите трехзначное число X: ";
          cin >> X;
          cout << "Введите номер цифры N (1-3): ";
          cin >> N;
          
          // Получаем N-ю цифру (нумерация справа налево)
          int digit;
          if (N == 1) digit = X % 10;
          else if (N == 2) digit = (X / 10) % 10;
          else if (N == 3) digit = X / 100;
          else {
              cout << "Неверный номер цифры!" << endl;
              return;
          }
          
          cout << N << "-я цифра числа " << X << " (справа налево): " << digit << endl;
      }

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
