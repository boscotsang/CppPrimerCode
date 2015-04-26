#include <iostream>

using namespace std;

string (arr)[10];
typedef string (&strarr)[10];
auto func() -> string (&)[10];
strarr func2();
decltype(arr)& func3();

int main(){
    return 0;
}
