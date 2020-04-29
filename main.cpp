#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
    int a, b, c;
    char ch;
    string s;
    getline(cin, s);
    stringstream ss(s);
    ss >> ch >> a >> ch >> b >> ch >> c;
    cout << a << '\n' << b << '\n' << c;
    return 0;
}
