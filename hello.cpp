#include <iostream>
using namespace std;
int main()
{
    int *p = new int;
    int *q = new int(25);
    cout << *p << endl;
    cout << *q << endl;
    return 0;
}