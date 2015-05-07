#include <iostream>
#include <deque>
#include <list>
#include <string>

using namespace std;

int main(){
    list<int> l = {0, 1, 2, 3, 5, 8, 13, 21};
    deque<int> d1, d2;
    int i=0;
    for (auto it = l.begin(); it != l.end(); ++it, ++i){
        if (i%2==0) d1.push_back(*it);
        else d2.push_back(*it);
    }
    for (auto item:d1) cout << item << endl;
    for (auto item:d2) cout << item << endl;
    return 0;
}
