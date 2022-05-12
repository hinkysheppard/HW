#include <iostream>
 
using namespace std;


 
typedef unsigned int uint;
 
int main(){
  setlocale(LC_ALL, "rus");
  
  uint nMenu = 0; // меню
  uint nNumerator = 0; // числитель
  uint nDenominator = 0; // знаменатель
  uint nMostCommonMultiple = 0; // наибольшее общее кратное
 
  // вывод меню
  cout << "Выберите ваше действие:" << endl;
  cout << "1. Ввести дробь" << endl;
  cout << "0. Завершить программу" << endl;
  cout << "Ваш выбор: ";
  while(cin >> nMenu && nMenu != 0){
    switch(nMenu) {

      case 1:
        cout << "Введите числитель: ";
        cin >> nNumerator; // вводим числитель
        cout << "Введите знаменатель: ";
        cin >> nDenominator; // вводим знаменатель
 
        // НОК
        nMostCommonMultiple = nNumerator;
 
       
        while(nMostCommonMultiple > 1) {

          if((nNumerator % nMostCommonMultiple) == 0 && (nDenominator % nMostCommonMultiple) == 0){
            cout << "Наибольшее общее кратное = " << nMostCommonMultiple << endl;

            if((nNumerator > nDenominator || nNumerator == nDenominator)&& nNumerator % nDenominator == 0)
              cout << "Сокращенная дробь: " << nNumerator/nDenominator << endl;

            else if(nNumerator > nDenominator) {
              cout << "Сокращенная дробь: " << nNumerator/nDenominator << "("
              << (nNumerator/nMostCommonMultiple) - (nDenominator/nMostCommonMultiple) << "|"
              << nDenominator/nMostCommonMultiple << ")" << endl;
            }
            else
              cout << "Сокращенная дробь: " << nNumerator/nMostCommonMultiple << "|" << nDenominator/nMostCommonMultiple << endl;
            break;
          }
         
          
          --nMostCommonMultiple;
        }
        

        if(nMostCommonMultiple == 1)
          cout << "Невозможно сократить дробь" << endl << endl;
        break;
 
        default:
        break;
    }
    // после обработки дроби выводим снова меню
    cout << "Выберите ваше действие:" << endl;
    cout << "1. Ввести дробь" << endl;
    cout << "0. Завершить программу" << endl;
    cout << "Ваш выбор: ";
  }
 
  system("pause");
return 0;
}