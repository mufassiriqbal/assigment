#include <iostream>
using namespace std;
// Define the structure of a node
struct Node {
    int data;       // Data to be stored in the node
    Node* next;     // Pointer to the next node
};

int main() {
    // Creating nodes
    Node* head = nullptr;  // Head pointer initially points to nothing

    // Adding nodes
    Node* node1 = new Node;
    node1->data = 5;
    node1->next = nullptr;
    head = node1;  // Now head points to the first node

    Node* node2 = new Node;
    node2->data = 10;
    node2->next = nullptr;
    node1->next = node2;  // Linking the first node to the second

    Node* node3 = new Node;
    node3->data = 15;
    node3->next = nullptr;
    node2->next = node3; // Linking the second node to the third
    
     Node* node4 = new Node;
    node4->data = 18;
    node4->next = head;
    head = node4;
    
    Node* node5 = new Node;
    node5->data = 45;
    node5->next = nullptr;
    node3->next = node5;
    
    

    // Traversing and displaying nodes
    Node* current = head;  // Start from the head
    while (current != nullptr) {
        cout << current->data << "-> ";  // Display the data
        current = current->next;  // Move to the next node
    }
  
   cout <<endl;

    // Freeing memory (optional but good practice)
    current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}