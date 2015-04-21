#include <iostream>

using namespace std;

int main(){
    char c;
    int acount=0, ecount=0, icount=0, ocount=0, ucount=0;
    while (cin >> c){
        switch(tolower(c)){
            case 'a':
                ++acount;
                break;
            case 'e':
                ++ecount;
                break;
            case 'i':
                ++icount;
                break;
            case 'o':
                ++ocount;
                break;
            case 'u':
                ++ucount;
                break;
            default: break;
        }
    }
    cout << acount << endl
        << ecount << endl
        << icount << endl
        << ocount << endl
        << ucount << endl;
}
