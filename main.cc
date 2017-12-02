#include <array>
#include <iostream>

using std::array;
using std::cout;
using std::endl;

class counter {

public:
    counter();
    ~counter();
private:
    static unsigned count;
};


counter::counter()
{
    count++;
    cout << counter::count << endl;
}


counter::~counter()
{
    count--;
}

unsigned counter::count;


int main()
{
    constexpr auto size = 100u;
    array<counter, size> counter_collection;
}
