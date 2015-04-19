#include <iostream>
#include <vector>

using namespace std;

int main(){
    int e;
    vector<int> v;
    while(cin >> e) v.push_back(e);
    if (v.empty()) {
        cout << "Empty vector" << endl;
        return 0;
    }
    for (auto it=v.begin(), id=v.end()-1;it < id;++it, --id)
        cout << *it + *id << endl;
    return 0;
}
