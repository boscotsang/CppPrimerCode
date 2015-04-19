#include <iostream>
#include <vector>

using namespace std;

int main(){
    string s;
    vector<string> v;
    while(cin >> s) v.push_back(s);
    for (auto item:v) cout << item << endl;
    return 0;
}
