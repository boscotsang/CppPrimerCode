#include <iostream>
#include <vector>

using namespace std;

int main(){
    string s;
    vector<string> v;
    while(cin >> s) v.push_back(s);
    for (auto &item:v) {
        for (auto &e:item){
            e = toupper(e);
        }
        cout << item << endl;
    }
    return 0;
}
