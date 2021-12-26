#include <iostream>
#include <stack>

using namespace std;

int main(){
    cout << "***** Stack Class Impementation *****" << endl;
    stack<int> s;

    cout << "Size of satck" << s.size() << endl;
    cout << "Is stack empty: " << s.empty() << endl;

    s.push(25);
    s.push(98);
    s.push(20);

    cout << "Top of the stack:" << s.top() << endl;
    cout << "Size of satck:" << s.size() << endl;
    int x;
    s.pop();
    // Empty the stack
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    } cout << endl;
    return 0;
};
