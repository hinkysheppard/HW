#include <iostream>
#include <string>

using namespace std;

int main()
{       
       cout << "Введите число = ";
       string cBuf;
       cin >> cBuf;
       int k = cBuf.length();  
       
       while(k --> 0)  
       cout << cBuf[k];
       
       return 0;
}