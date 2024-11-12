#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    Person* next;
    int id;
    int age;
    string name;

    Person(int id,int age,string name) {
        this->id=id;
        this->age= age;
        this->name = name;
        next = NULL;
    }
};

void InsertAtHead(Person*& head, int id, int age, string name) {
    Person* p = new Person(id, age, name);
    p->next = head;  
    head = p;        
}
void Display(Person* head) {
    Person* temp = head;
    while (temp != NULL) {
        cout<<" ID: "<<temp->id<<" Age: "<<temp->age<<" Name: "<<temp->name<<endl;
        temp=temp->next;
    }
}
int main() {
    Person* head=NULL;
    InsertAtHead(head,1223,22,"Farhan-ul-haq");
    InsertAtHead(head,56154,21,"Saad");
    InsertAtHead(head,12345,30,"ALI");
    InsertAtHead(head,67890,25,"AHMED");
    Display(head);
    return 0;
}