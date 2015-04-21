#include <iostream>

using namespace std;

int main(){
    char c='\0', prechar='\0';
    int acount=0, ecount=0, icount=0, ocount=0, ucount=0;
    int ncount=0, tcount=0, scount=0, ffcount=0, flcount=0, ficount=0;
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
                if ('f' == prechar) ++ficount;
                break;
            case 'o':
                ++ocount;
                break;
            case 'u':
                ++ucount;
                break;
            case 'f':
                if ('f' == prechar) ++ffcount;
                break;
            case 'l':
                if ('f' == prechar) ++flcount;
                break;
            case '\n':
                ++ncount;
                break;
            case '\t':
                ++tcount;
                break;
            case ' ':
                ++scount;
                break;
            default: break;
        }
        prechar = c;
    }
    cout << acount << endl
        << ecount << endl
        << icount << endl
        << ocount << endl
        << ucount << endl
        << ncount << endl
        << tcount << endl
        << scount << endl
        << ficount << endl
        << flcount << endl
        << ffcount << endl;
}
