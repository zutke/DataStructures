//
//  LinkedList.h
//  DataStructures
//
//  Created by Gutke, Zachary on 2/21/19.
//  Copyright © 2019 Zachary Gutke. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

#include "../Headers/List.hpp"

using namespace std;
template<class T>
class LinkedList : public List<T>
{
protected:
    LinearNode<T> * front:
    LinearNode<T> *end;
public:
    LinkedList();
    virtual ~LinkedList();
    virtual int getSize() const;
    LinearNode<T> * getFront();
    LinearNode<T> * getEnd();
    
    virtual void add(T item);
    virtual void addAtIndex(int index, T item);
    virtual T getFromIndex(int index);
    virtual T remove(int index);
};

template<class T>
LinkedList<T>::LinkedList()
{
    this->front = nullptr;
    this->end = nullptr;
    this->size = 0;
}
template<class T>
LinkedList<T>::~LinkedList()
{
    LinearNode<T> * destroyStruct = front;
    while(front != nullptr)
    {
        front = destroyStruct->getNextNode();
        delete destroyStruct;
        destroyStruct = front;
    }
}
template<class T>
void LinkedList<T>::add(T item)
{
    LinearNode<T> * newData = new LinearNode<T>(item);
    
    if(this->size == 0)
    {
        this->front = newData;
    }
    else
    {
        this->end->setNextNode(newData);
    }
    
    this->end = newData;
    
    this ->size += 1;
}
template<class T>
void LinkedList<T>::addAtIndex(int index,T item)
{
    assert(index >= 0 && index <= this->size);
    if(index == this->size)
    {
        add(item)
    }
    else
    {
        LinearNode<T> * toBeAdded = new LinearNode<T>(item);
        if(index == 0)
        {
            toBeAdded->setNextNode(front);
            front = toBeAdded;
        }
        else
        {
            LinearNode<T> * prev = nullptr;
            LinearNode<T> * current = front;
            for(int pos = 0;pos < index;++pos)
            {
                prev = current;
                current = current->getNextNode();
            }
            prev->setNextNode(toBeAdded);
            toBeAdded->setNextNode(current);
        }
        this->size++;
    }
}

#endif /* LinkedList_h */
