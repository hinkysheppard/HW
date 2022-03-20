#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>
#include <string>
#include <sstream>

using namespace std;

int main() {
    

    
    string S;
    getline(cin, S);
    istringstream ist(S);
    string tmp;
    while ( ist >> tmp ){
        if(tmp[0] == 'a' || tmp[0] == 'A'){
        cout << tmp << endl;
        }
    }
 return 0;   
}