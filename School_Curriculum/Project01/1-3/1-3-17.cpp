#include <iostream>
using namespace std;

void add(int x, int y = 1, int z = 2);

int main()
{
    add(1);
    add(1, 2);
    add(1, 2, 3);

    return 0;
}

void add(int x, int y, int z)
{
    cout << x + y + z << endl;
}