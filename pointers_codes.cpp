//=============================================================//

// ///==================BASIC OPERATIONS===============//

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5;
//     int *p = &a;
//     cout << a << endl;
//     cout << &a << endl;
//     cout << p << endl;
//     cout << *p << endl;
//     return 0;
// }

/// ==========================

// #include <iostream>
// using namespace std;
// int main()
// {
//     int v1 = 99;
//     int *p1;
//     p1 = &v1;
//     cout << v1 << endl;
//     cout << &v1 << endl;
//     cout << p1 << endl;
//     cout << *p1 << endl;
//     return 0;
// }

///=====================DYNAMIC MEMORY ALLOCATION==================//

// #include <iostream>
// using namespace std;
// int main()
// {
//     int *p = new int(25);
//     float *q = new float(25);
//     char *ch = new char[5]{'a', 'b', 'c', 'd', 'e'};
//     delete p;
//     delete q;
//     delete[] ch;
//     return 0;
// }

/// ==========================

// #include <iostream>
// using namespace std;
// int main()
// {
//     int *p = new (nothrow) int(9);
//     int *q = p;

//     cout << "p = " << *p << endl;
//     cout << "q = " << *q << endl;
//     *q = 10;
//     cout << "p = " << *p << endl;
//     cout << "q = " << *q << endl;
//     delete q;
//     return 0;
// }

/// ====================MEMORY LEAKS=====================//

// #include <iostream>
// using namespace std;
// int main()
// {

//     int *p;
//     p = new int;
//     // Make the above space unreachable; How?
//     p = new int;

//     while (1)
//     {
//         p = new int;
//     }

//     return 0;
// }

/////==============================================//

// ////===========================(1)Functions pass by value==========================//

// #include <iostream>
// using namespace std;
// void func(int p)
// {
//     p++;
//     cout << "\nValue of p = " << p << endl;
//     cout << "Address of p = " << &p << endl;
// }
// int main()
// {
//     int a = 10;
//     cout << "\nValue of a = " << a << endl;
//     cout << "Address of a = " << &a << endl;

//     func(a);

//     cout << "\nAfter update" << endl;
//     cout << "Value of a = " << a << endl;
//     cout << "Address of a = " << &a << endl;
//     return 0;
// }

///===========================(2)Functions [pass by reference with & operator]=========================//

// #include <iostream>
// using namespace std;
// void func(int &p)
// {
//     p++;
//     cout << "\nValue of p = " << p << endl;
//     cout << "Address of p = " << &p << endl;
// }
// int main()
// {
//     int a = 10;
//     cout << "\nValue of a = " << a << endl;
//     cout << "Address of a = " << &a << endl;

//     func(a);

//     cout << "\nAfter update" << endl;
//     cout << "Value of a = " << a << endl;
//     cout << "Address of a = " << &a << endl;
//     return 0;
// }

/////=================================================//