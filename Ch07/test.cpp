#include <string>

using namespace std;

typedef double Money;
class Account {
    public:
        Money balance() {return bal;}
    private:
        typedef double Money;
        Money bal;
};

int main(){
    Account e;
    return 0;
}
