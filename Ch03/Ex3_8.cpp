#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    for (auto i=0; i<s.length(); ++i){
        s[i] = 'X';
    }
    cout << s << endl;
    cin >> s;
    auto i = 0;
    while (s[i]){
        s[i++] = 'X';
    }
    cout << s << endl;
    return 0;
}
