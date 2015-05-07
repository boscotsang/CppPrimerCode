#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main(){
    deque<string> stringdeque;
    string word;
    while (cin >> word) stringdeque.push_back(word);
    for (auto item:stringdeque) cout << item << endl;
    return 0;
}
