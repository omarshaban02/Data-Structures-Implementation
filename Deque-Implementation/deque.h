#ifndef __Deque_H__
#define __Deque_H__

#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
        int data;

        Node *next;
        Node *prev;

        Node(){
            next = nullptr;
            prev = nullptr;
        }
};

class My_Deque{
    private:

        Node* top;
        Node* rear;
                        
        int size;
              
    public:
        My_Deque();
        ~My_Deque();

        bool if_empty();

        // return the last element
        int end();

        // return the first element
        int begin();
        
        // add the element to the end of the deque
        void push_back(int element);

        // add the element to the beginning of the deque
        void push_front(int element);
        
        // remove the last element, return the removed element
        int pop_back();

        // remove the first element, return the removed element
        int pop_front();

        // convert the deque to vector and return that vector
        std::vector<int> toVector();
        
        // print the whole deque from head to tail
        void print();

        // clear the whole array
        void clear();

        // return the deque size
        int get_size();
        
};

#endif