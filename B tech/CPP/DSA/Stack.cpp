// perform push pop on the stack

#include <iostream>

class Stack {
    private:
        int top;
        int arr[5];
    public:
        Stack () {
            top = -1;
            for (int i = 0; i < 5; i++) {
                arr[i] = 0;
            }
        }

        bool isEmpty () {
            if (top == -1) {
                return true;
            } else {
                return false;
            }
        }

        bool isFull () {
            if (top == 4) {
                return true;
            } else {
                return false;
            }
        }

        void push (int val) {
            if (isFull()) {
                std::cout << "Stack Overflow" << std::endl;
            } else {
                top++;
                arr[top] = val;
            }
        }

        int pop () {
            if (isEmpty()) {
                std::cout << "Stack Underflow" << std::endl;
                return 0;
            } else {
                int popValue = arr[top];
                arr[top] = 0;
                top--;
                return popValue;
            }
        }
        
        int peek (int pos) {
            if (isEmpty()) {
                std::cout << "Stack Underflow" << std::endl;
                return 0;
            } else {
                return arr[pos];
            }
        }

        void display () {
            std::cout << "All values in the Stack are " << std::endl;
            for (int i = 4; i >= 0; i--) {
                std::cout << arr[i] << std::endl;
            }
        }
};


int main () {
    Stack s1;
    int option, position, value;

    do {
        std::cout << "What operation do you want to perform? Select Option number. Enter 0 to exit." << std::endl;
        std::cout << "1. Push()" << std::endl;
        std::cout << "2. Pop()" << std::endl;
        std::cout << "3. isEmpty()" << std::endl;
        std::cout << "4. isFull()" << std::endl;
        std::cout << "5. peek()" << std::endl;
        std::cout << "6. display()" << std::endl;

        std::cin >> option;

        switch (option) {
            case 0:
                break;
            case 1:
                std::cout << "Enter an item to push in the stack" << std::endl;
                std::cin >> value;
                s1.push(value);
                break;
            case 2:
                std::cout << "Pop Function Called - Poped Value: " << s1.pop() << std::endl;
                break;
            case 3:
                if (s1.isEmpty()) {
                    std::cout << "Stack is Empty" << std::endl;
                } else {
                    std::cout << "Stack is not Empty" << std::endl;
                }
                break;
            case 4:
                if (s1.isFull()) {
                    std::cout << "Stack is Full" << std::endl;
                } else {
                    std::cout << "Stack is not Full" << std::endl;
                }
                break;
            case 5:
                std::cout << "Enter position of item you want to peek: " << std::endl;
                std::cin >> position;
                std::cout << "Peek Function Called - Value at position " << position << " is " << s1.peek(position) << std::endl;
                break;
            case 6:
                std::cout << "Display Function Called - " << std::endl;
                s1.display();
                break;
            default:
                std::cout << "Enter Proper Option number " << std::endl;
        }
    } while (option != 0);
    return 0;
}