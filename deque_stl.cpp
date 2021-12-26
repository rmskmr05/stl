#include <iostream>
#include <deque>

using namespace std;

void dispaly_dq(deque <int> dq){
    for (auto iter = dq.begin(); iter != dq.end(); iter++)
        cout << *iter << '\t';
    cout << endl;
}

int main(){
    cout << "***** Double Endded Queue *****" << endl;

    deque <int> deq;
    cout << "Size of dq: " << deq.size() << endl;
    cout << "Is deq empty: " << deq.empty() << endl;

    // Add at front end
    deq.push_front(25);
    deq.push_front(58);
    // inset at the end point
    deq.push_back(20);
     deq.push_back(10);

    cout << "Deque Elements: ";
    dispaly_dq(deq);

    cout << "First Element: " << deq.front() << endl;
    // pop front element
    deq.pop_front();
    cout << "After front pop, First Element: " << deq.front() << endl;
    deq.pop_back();
    cout << "After back pop, last Element: " << deq.back() << endl;

    // insert new element at second position
    deq.insert(deq.begin()+1, 5);
    cout << "Deque Elements: ";
    dispaly_dq(deq);
    // Replacing exixting value
    deq.at(2) = 58;
    cout << "Deque Elements: ";
    dispaly_dq(deq);

    return 0;
}
