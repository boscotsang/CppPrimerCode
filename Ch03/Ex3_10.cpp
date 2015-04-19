#include <iostream>

using namespace std;

int main(){
    string s, result;
    getline(cin, s);
    for (auto i:s){
        if (isalpha(i)) result.push_back(i);
    }
    cout << result << endl;
}
