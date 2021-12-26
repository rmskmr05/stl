#include <iostream>
#include <list>

using namespace std;

void print_list(list<int> lst){
    for (auto itr = lst.begin(); itr != lst.end(); itr++)
        cout << *itr << "\t";
    cout << endl;
}
// predicate implementaed as a function
bool filter(int& v){
    return (v < 0 || v > 100); 
}

int main(){

    cout << "***** List Implemenataion *****" << endl;
    list<int> l;
    /*
    int N, x;
    cout << "Enter the number of elements:";
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> x;
        l.push_back(x);
    }
    */

    l = {5, 8, 6, 9};
    cout << "List is       :";
    print_list(l);

    l.reverse();
    cout << "Reversed List :";
    print_list(l);

    l.remove(8);
    cout << "Reversed List :";
    print_list(l);

    l = {0, -2, 85, 8, 6, 9, 91, 108, 5889, -8};
    cout << "   List :";
    print_list(l);
    // remove vlaues conditional
    l.remove_if(filter);
    cout << "Filtered:";
    print_list(l);

    l.sort();
    cout << "Sorted List:";
    print_list(l);

    // insert new element to the list
    list<int> l2{10, 20, 50, 30, 40};
    list<int>::iterator itr = l.begin();
    itr++;
    l.insert(itr, -1);
    cout << "new List:";
    print_list(l);

    // merge two listd
    l.merge(l2);
    cout << "new List:";
    print_list(l);
    

    return 0;
}
