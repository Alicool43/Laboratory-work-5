                                          //Lab 5 Alybaev Alikhan
//Task 1:
#include <iostream>
#include <stack> 
using namespace std;

int main() {
    stack<int> myStack; 

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) {
        int num;
        cin >> num;         
        myStack.push(num);  
    }

    cout << "Stack (Top to Bottom): ";
    while (!myStack.empty()) {          
        cout << myStack.top() << " ";   
        myStack.pop();                 
    }

    return 0;
}

//Task 2:
#include <iostream>
#include <stack> 
#include <string> 
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    stack<char> charStack; 

    for (char c : input) {
        charStack.push(c);
    }

    string reversed = "";
    while (!charStack.empty()) {
        reversed += charStack.top(); 
        charStack.pop();            
    }

    cout << "Reversed string: " << reversed << endl;

    return 0;
}

//Task 3:
#include <iostream>
#include <queue> 
using namespace std;

int main() {
    queue<int> myQueue; 

    cout << "Enqueue: ";
    for (int i = 0; i < 5; ++i) {
        int num;
        cin >> num;
        myQueue.push(num); 
    }

    cout << "Dequeued: ";
    while (!myQueue.empty()) {
        cout << myQueue.front() << " ";
        myQueue.pop();                  
    }

    return 0;
}

//Task 4:
#include <iostream>
#include <queue> 
#include <string> 
using namespace std;

int main() {
    queue<string> ticketQueue; 

    cout << "Enter 3 names: ";
    for (int i = 0; i < 3; ++i) {
        string name;
        cin >> name;
        ticketQueue.push(name); 
    }

    while (!ticketQueue.empty()) {
        cout << "Serving: " << ticketQueue.front() << endl; 
        ticketQueue.pop(); 
    }

    return 0;
}

//Task 5:
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> myDeque;

    int frontVal, backVal, anotherFrontVal;

    cout << "Push front: ";
    cin >> frontVal;
    myDeque.push_front(frontVal); 

    cout << "Push back: ";
    cin >> backVal;
    myDeque.push_back(backVal); 

    cout << "Push front: ";
    cin >> anotherFrontVal;
    myDeque.push_front(anotherFrontVal); 

    cout << "Deque contains: ";
    for (int num : myDeque) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Pop back: " << myDeque.back() << endl;
    myDeque.pop_back();

    cout << "Pop front: " << myDeque.front() << endl;
    myDeque.pop_front();

    
    cout << "Remaining: ";
    for (int num : myDeque) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

//Task 6:
#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    deque<char> charDeque;

    for (char c : word) {
        charDeque.push_back(c);
    }

    bool isPalindrome = true;

    while (charDeque.size() > 1) {
        if (charDeque.front() != charDeque.back()) {
            isPalindrome = false;
            break;
        }
        charDeque.pop_front();
        charDeque.pop_back();
    }

    if (isPalindrome) {
        cout << "It is a palindrome." << endl;
    } else {
        cout << "It is not a palindrome." << endl;
    }

    return 0;
}