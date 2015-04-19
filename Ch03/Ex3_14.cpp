#include <iostream>
#include <vector>

using namespace std;

int main(){
    int i;
    vector<int> v;
    while(cin >> i) v.push_back(i);
    for (auto item:v) cout << item << endl;
    return 0;
}
