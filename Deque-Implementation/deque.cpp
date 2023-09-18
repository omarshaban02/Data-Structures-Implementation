#include <iostream>
#include "deque.h"

using namespace std;


My_Deque::My_Deque(){

    size=0;
    top = nullptr;
    rear = nullptr;    

}

My_Deque::~My_Deque(){

    clear();

}

int My_Deque::end(){

    if(size == 0)
        return -1;
    
    return rear->data;
}

int My_Deque::begin(){

    if(size == 0)
        return -1;

    return top->data;
}

void My_Deque::push_back(int element){

    Node *new_node = new Node();
    new_node->data = element;
    
    if(size == 0)
    top= rear = new_node;
    
    else{
    rear->next = new_node;
    new_node->prev = rear;
    rear = new_node; 
    }
    size++;
}

void My_Deque::push_front(int element){

    Node *new_node = new Node();
    new_node->data = element;
    
    if(size == 0)
    top= rear = new_node;
    
    else{
    top->prev = new_node;
    new_node->next = top;
    top = new_node;
    }

    size++;
}

int My_Deque::pop_back(){

    if (size == 0)
        return -1;

    int popped_element = rear->data;

    if(size == 1)
        clear();

    else{
    Node *temp = rear;
    rear = rear->prev;
    rear->next = nullptr;

    delete temp;

    size--;
    }

    return popped_element;
}

int My_Deque::pop_front(){

    if (size == 0)
        return -1;

    int popped_element = top->data;
    
    if(size == 1)
        clear();
    else{
    Node *temp = top;
    top = top->next;
    top->prev = nullptr;

    delete temp;

    size--;
    }

    return popped_element;

}

std::vector<int> My_Deque::toVector(){

    vector <int> v(size);
    Node *ptr = top;

    for (int i = 0; i < size; i++){
        v[i] = ptr->data;
        ptr = ptr->next;
    }

    return v;
}

void My_Deque::print(){

    Node *ptr = top;

    for(int i = 0; i < size; i++){
        cout << ptr->data << "\t";
        ptr = ptr->next;
    }
}

void My_Deque::clear(){

    while (size--)
    {
        Node *new_node = top;
        top = top->next;
        delete new_node;
    }

    top = nullptr;
    rear = nullptr;

    size = 0;
}

int My_Deque::get_size(){

    return size;
}