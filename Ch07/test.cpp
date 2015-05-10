#include <string>

using namespace std;

class Test{
    public:
    Test(string s="hello"):s(s){}
    private:
    string s;
};

int main(){
    Test t;
    return 0;
}
