#include <iostream>
 
using namespace std;
 
int main()
{
  int x;
  char str[1024];
  while(1){
    if(fgets(str, 1023, stdin) == NULL) break; 
    if(str[0]=='\n') break; 
    if(sscanf(str,"%i",&x)<=0) break;
  }
  return 0;
}