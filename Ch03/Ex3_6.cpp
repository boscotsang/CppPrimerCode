#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    for (auto &i : s){
        i = 'X';
    }
    cout << s << endl;
    return 0;
}
