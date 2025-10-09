// Driver code for testing the ArrayStack class
#include <iostream>
#include <string>
#include "ArrayStack.hpp"
using namespace std;

int main() {
    ArrayStack<int> stack(5);
    cout << "Pushing 1, 2, 3 onto stack." << endl;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    cout << "Current stack (top to bottom): " << stack << endl;

    cout << "Peeking top element: " << stack.peek() << endl;

    cout << "Popping top element." << endl;
    stack.pop();
    cout << "Current stack (top to bottom): " << stack << endl;

    cout << "Pushing 4, 5, 6 onto stack." << endl;
    stack.push(4);
    stack.push(5);
    try {
        stack.push(6); // This should throw an exception
    } catch (const string& e) {
        cout << "Exception: " << e << endl;
    }
    cout << "Current stack (top to bottom): " << stack << endl;

    cout << "Rotating stack right." << endl;
    stack.rotate(Stack<int>::RIGHT);
    cout << "Current stack (top to bottom): " << stack << endl;

    cout << "Clearing stack." << endl;
    stack.clear();
    cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}