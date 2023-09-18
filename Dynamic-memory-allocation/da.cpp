#include "da.h"
#include <iostream>
#include <cmath>
using namespace std;


// implement all the methods in da.h
// feel free to add new helper methods whether private or public

My_DA::My_DA(){

    data = new int [capacity];

}

My_DA::My_DA(int array[],int size){

    capacity = pow(2,ceil(log2(size)));
    this -> size = size;
    data = new int [capacity];
    for (int i = 0; i < size; i++)
        data[i] = array[i];

}

int My_DA::get(int index){

    return data[index];

}
        
void My_DA::push(int element){

    if(size < capacity){
        data[size] = element;
        size++;
    }
    else{
        capacity *= 2;
        int *oldarr = data;
        data = new int [capacity];

        for (int i = 0; i < size; i++)
            data[i] = oldarr[i];
            
        data[size] = element;
        size++;
        delete [] oldarr;
    }


}
        
int My_DA::pop(){

    if(size==0)
        return -1;

    int popped_element = data[size-1];

    data[size-1]=0;
    
    size--;
    
    if(size < (capacity/2)){
        int *oldarr = data;
        capacity/=2;
        data = new int [capacity];

        for (int i = 0; i < size; i++)
            data[i] = oldarr[i];
        delete [] oldarr;
    }

    return popped_element;

}

void My_DA::insert(int index, int element){

    if(size < capacity){
       for (int i = size; i >= index; i--)
            data[i+1] = data[i];

       data[index] = element;
       size++;
    }
    else{
        capacity *= 2;
        int *oldarr = data;
        data = new int [capacity];
        for (int i = size; i >= index; i--)
            data[i+1] = oldarr[i];
        
        data[index] = element;
        size++;
        delete [] oldarr;
    }
}

int My_DA::remove(int index){

    if(index >= size)
        return -1;

    int removed_element = data[index];
    
    for (int i = index; i < size; i++)
        data[i] = data[i+1];
    
    data[size-1] = 0;
    
    size--;
    
    if(size < (capacity/2)){
        int *oldarr = data;
        capacity/=2;
        data = new int [capacity];

        for (int i = 0; i < size; i++)
            data[i] = oldarr[i];
        delete [] oldarr;
    }
    return removed_element;

}
        
void My_DA::print(){

    for (int i = 0; i < size; i++)
        cout << data[i] << "  ";
    
}

void My_DA::clear(){

    for (int i = 0; i < size; i++)
        data[i] = 0;
    
    size = 0;
    capacity = 1;
}

int My_DA::find(int element){

    for (int i = 0; i < size; i++)
        if(data[i] == element)
            return i;
        
    return -1;
}

int My_DA::get_size(){
    
    return size;

}
        
int My_DA::get_capacity(){

    return capacity;

}