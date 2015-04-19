#include <iostream>

using namespace std;

int main(){
    string concated, s;
    while (cin >> s) {
        if (concated.empty()) concated += s;
        else concated += " " + s;
    }
    cout << concated << endl;
    return 0;
}
