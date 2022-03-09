#include <stdlib.h>
#include <iostream>
 
using namespace std;
 
int main()
{
  int count;
  cin >> count;
  int arr[count], a;
 
 
  for (int i = 0; i < count; i++)
  {
      cout<<i+1<<"/"<<count<<": ";
      cin>>a;
      arr[i] = a;
  }
 
   
 
int min = 0, max = 0;
 
for (int i = 0; i < count; i++)
{
     if (arr[i] < arr[min])
         min = i;
 
    if (arr[i] > arr[max])
        max = i;
}
 
    int tmp = arr[max];
    arr[max] = arr[min];
    arr[min]  = tmp;
 
 
    cout << arr[min] << "  " << arr[max] << endl;
}