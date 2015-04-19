#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<unsigned> scores(11, 0);
    auto it = scores.begin();
    for (unsigned grade; cin >> grade;)
        if (grade <= 100)
            ++*(it+grade/10);
    for (auto item:scores) cout << item << endl;
    return 0;
}
