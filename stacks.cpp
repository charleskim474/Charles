#include <iostream>

using namespace std;

class MyFriends {
//member variables
    string friends[100];
    int top;
    int max;

    //constructor
public:
    MyFriends(int x) {
        top = -1;
        max = x;
    }

//push operation
    void push(string name) {
        if(top == max-1) {
            cout << "Stuck is full! " << endl;
        } else {
            top++;
            friends[top] = name;
        }
    }

//pop operation
    void pop() {
        if(top == -1) {
            cout << "Stack is empty! " << endl;
        } else {
            string name = friends[top];
            cout << "Removed : " << name << endl;
            top--;
        }
    }

//peep operation
    void peep() {
        if(top == -1) {
            cout << "Stuck is empty! " << endl;
        } else {
            cout << friends[top] << endl;
        }
    }

    //display stack
    void display() {
        if(top == -1) {
            cout << "Stack is empty! " << endl;
        } else {
            for(int i=0; i<=top; i++) {
                cout << friends[i] << ", "<< endl;
            }
        }
    }
};

int main() {
    int max;
    cout << "Enter maximum size of a stack : ";
    cin >> max;

// object creation
    MyFriends obj(max);
    int option;
    bool loop = true;
    do {

//options
        cout << "\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
        cout << "Please select an operation." << endl;
        cout << "1. Insert a friend." << endl;
        cout << "2. Delete a friend." << endl;
        cout << "3. View last friend." << endl;
        cout << "4. Display friends." << endl;
        cout << "5. Exit program." << endl;
        cout << "\nEnter option : ";
        cin >>option;
        cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;


        switch(option) {
        case 1: {
            string name;
            cout << "Enter a friend's name : ";
            cin >> name;
            obj.push(name);
            break;
        }
        case 2: {
            obj.pop();
            break;
        }
        case 3: {
            obj.peep();
            break;
        }
        case 4: {
            obj.display();
            break;
        }
        case 5: {
            loop = false;
            break;
        }
        default: {
            cout << "Invalid input, try again! " << endl;
            break;
        }
        }
    } while(loop == true);

    return 0;
}