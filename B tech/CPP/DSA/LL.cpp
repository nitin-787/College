#include <iostream>
using namespace std;

// Creating a node
class Node {
public:
    int value;
    Node* next;
};

Node* insertFirst(Node* head, int data) {
    Node* newNode = new Node();
    newNode->value = data;

    newNode->next = head;
    head = newNode;

    return head;
}

Node* insertLast(Node* head, int data) {
    Node* node = new Node();
    node->value = data;
    node->next = nullptr;

    if (head == nullptr) {
        return node;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = node;

    return head;
}

Node* insertAtIndex(Node* head, int data, int index) {
    Node* newNode = new Node();
    newNode->value = data;
    newNode->next = nullptr;

    if (index == 0) {
        newNode->next = head;
        return newNode;
    }

    Node* temp = head;
    for (int i = 0; i < index - 1 && temp != nullptr; ++i) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Invalid index. Node not inserted." << endl;
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

Node* deleteFirst(Node* head) {
    if (head == nullptr) {
        cout << "List is empty. Nothing to delete." << endl;
        return nullptr;
    }

    Node* temp = head;
    head = head->next;
    delete temp;

    return head;
}

Node* deleteLast(Node* head) {
    if (head == nullptr) {
        cout << "List is empty. Nothing to delete." << endl;
        return nullptr;
    }

    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }

    Node* temp = head;
    Node* prev = nullptr;
    while (temp->next != nullptr) {
        prev = temp;
        temp = temp->next;
    }

    delete temp;
    prev->next = nullptr;

    return head;
}

Node* deleteAtIndex(Node* head, int index) {
    if (head == nullptr) {
        cout << "List is empty. Nothing to delete." << endl;
        return nullptr;
    }

    if (index == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    Node* prev = nullptr;
    for (int i = 0; i < index && temp != nullptr; ++i) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Invalid index. Node not deleted." << endl;
        return head;
    }

    prev->next = temp->next;
    delete temp;

    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

int main() {
    Node* head;
    Node* one = nullptr;
    Node* two = nullptr;
    Node* three = nullptr;

    // allocate 3 nodes in the heap
    one = new Node();
    two = new Node();
    three = new Node();

    // Assign value values
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = nullptr;

    // print the linked list value
    head = one;
    cout << "Original linked list: ";
    printList(head);

    head = insertFirst(head, 13);
    cout << "\nAfter insertion at the beginning: ";
    printList(head);

    head = insertLast(head, 5);
    cout << "\nAfter insertion at the end: ";
    printList(head);

    head = insertAtIndex(head, 7, 2);
    cout << "\nAfter insertion at index 2: ";
    printList(head);

    head = deleteFirst(head);
    cout << "\nAfter deletion from the beginning: ";
    printList(head);

    head = deleteLast(head);
    cout << "\nAfter deletion from the end: ";
    printList(head);

    head = deleteAtIndex(head, 1);
    cout << "\nAfter deletion at index 1: ";
    printList(head);

    // Clean up memory (free allocated nodes)
    delete one;
    delete two;
    delete three;

    return 0;
}
