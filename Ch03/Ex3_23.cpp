#include <iostream>
#include <vector>

using namespace std;

int main(){
    int e;
    vector<int> v;
    while(cin >> e) v.push_back(e);
    for (auto it=v.begin();it!=v.end();++it){
        *it *= 2;
        cout << *it << endl;
    }
    return 0;
}
