#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main(){

    cout << "*****STL ARRAY*****" << endl;

    array<int, 5> a = {5, 7, 9, 0, 6};

    for(int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;


    // Array functions 
    cout << "a[2] = " << a.at(2) << endl;
    cout << "Is array empty: " << a.empty() << endl;
    cout << "Front Element of Array:" << a.front() << endl;
    cout << "End Element address of Array:" << a.end() << endl;
    cout << "Start Element Address:" << a.data() << endl;
    cout << "Size of Array in bytes: " << sizeof(a) << endl;

    array<int, 5> b = {9, 8, 2, 3, 6};
    a.swap(b);

    for(int i = 0; i < a.size(); i++)
        cout << a.at(i) << " ";
    cout << endl;

    // Array Sorted
    sort(b.begin(), b.end());
    cout << "Sorted Array:" ;
    for(int n : b)
        cout << n << " ";
    cout << endl;

    array<string, 3> names = {"Ramesh", "Mahesh", "Sunil"};
    // iterators

    for (auto iter = names.begin(); iter != names.end(); iter++){
        cout << *iter << "\t";
    }cout << endl;
    // iterators reverse
    for (auto riter = names.rbegin(); riter != names.rend(); riter++){
        cout << *riter << "\t";
    }cout << endl;


    return 0;
}
