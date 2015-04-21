#include <iostream>

using namespace std;

int main(){
    char c;
    int acount = 0, ecount = 0, icount = 0, ocount = 0, ucount = 0;
    while (cin >> c) {
        if (c=='a') ++acount;
        else if (c=='a') ++acount;
        else if (c=='e') ++ecount;
        else if (c=='i') ++icount;
        else if (c=='o') ++ocount;
        else if (c=='u') ++ucount;
    }
    cout << acount << endl
        << ecount << endl
        << icount << endl
        << ocount << endl
        << ucount << endl;
}
