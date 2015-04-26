#include <iostream>
#include <vector>

using namespace std;

int add (int a, int b){
    return a+b;
}

int subtract(int a, int b){
    return a-b;
}

int multiply(int a, int b){
    return a*b;
}

int divide(int a, int b){
    return a/b;
}

typedef int (*fp)(int, int);

int main(){
    vector<fp> v{&add, &subtract, &multiply, &divide};
    for (auto f: v){
        cout << (*f)(10, 2) << endl;
    }
    return 0;
}
