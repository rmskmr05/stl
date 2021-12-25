#include <iostream>
#include <vector>

using namespace std;


int main(){

    vector<int> v;
    cout << "Is vector is empty " << v.empty() << endl;
    cout << "Size of v : " << v.size() << endl;
    cout << "Capacity of v : " << v.capacity() << endl;

    // Push an element
    v.push_back(5);
    cout << "After fist push, Size of v : " << v.size() << endl;
    cout << "Capacity of v : " << v.capacity() << endl;
    v.push_back(2);
    cout << "After second push,Size of v : " << v.size() << endl;
    cout << "Capacity of v : " << v.capacity() << endl;
    v.push_back(10);
    cout << "After third push Size of v : " << v.size() << endl;
    cout << "Capacity of v : " << v.capacity() << endl;
    // Capacity = max size of vector, it gets doubles after full the existing size
    // triming the size of vector size == capacity
    v.shrink_to_fit();
     cout << "After Shrinking, Size of v : " << v.size() << endl;
    cout << "Capacity of v : " << v.capacity() << endl;

    // initialize with specified value
    vector<int> a(5, 2);
    cout << "Vector elements of a :";
    for (int i : a)
        cout << i << " ";
    cout << endl;
    cout << "Size of a : " << a.size() << endl;
    cout << "Capacity of a : " << a.capacity() << endl;
    cout << "Max size of a : " << a.max_size() << endl;

    // make a copy of vector
    vector<int> b(a);
    cout << "Vector elements of a :";
    for (int i : b)
        cout << i << " ";
    cout << endl;

    // update the elements
    b[0] = 5;
    b[4] = 0;

    cout << "Updated Vector elements of b :";
    for (int i : b)
        cout << i << " ";
    cout << endl;

    // front element
    cout << "Front Element of b: " << b.front() << endl;
    // back Element
    cout << "Back Element of b: " << b.back() << endl;

    // pop an element of b
    b.pop_back();
    // iterator
    for (auto iter = b.begin(); iter != b.end(); iter++)
        cout << *iter << " ";
    cout << endl;
    // reverse iteration
    for (auto iter = b.rbegin(); iter != b.rend(); iter++)
        cout << *iter << " ";
    cout << endl;

    cout << "Size of a " << a.size() << endl;
    cout << "capacity of a " << a.capacity() << endl;
    // resize vector container a
    a.resize(10);
    cout << "updated Size of a " << a.size() << endl;
    cout << "updated capacity of a " << a.capacity() << endl;

    // iterator crbegin and crend > const reverse iterators
    cout << "Using Constant iterator : ";
    for (auto citer = a.cbegin(); citer != a.cend(); citer++)
        cout << *citer << " ";
    cout << endl;
    
    // Clear the elemtnts of vector container a 
    a.clear();
    cout << "Is a empty: " << a.empty();

    return 0;
}
