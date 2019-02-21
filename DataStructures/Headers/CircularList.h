//
//  CircularList.h
//  DataStructures
//
//  Created by Gutke, Zachary on 2/21/19.
//  Copyright © 2019 Zachary Gutke. All rights reserved.
//

#ifndef CircularList_h
#define CircularList_h

#include "../Headers/DoubleNode.h"

template<class T>
class CircularList
{
    DoubleNode<T> * front;
    DoubleNode<T> * end;
    DoubleNode<T> * findNode(int index);
public:
    CircularList();
    ~CircularList();
    
    void add(T item);
    void addAtIndex(int index, T item);
    T remove(int index);
    T setAtIndex(int index, T item);
    T getFromIndex(int index);
    int getSize() const;
};

template<class T>
CircularList<T>::CircularList()
{
    front = nullptr;
    end = nullptr;
    this->size = 0;
}
template<class T>
CircularList<T>::~CircularList()
{
    DoubleNode<T> * current = front;
    while(this->front != nullptr)
    {
        front = front->getNext();
        delete current;
        current = front;
    }
}
template<class T>
DoubleNode<T> * CircularList<T>::findNode(int index)
{
    assert(index >= 0 && index < this->size);
    DoubleNode<T> * nodeToFind;
    
    if(index < this->size / 2)
    {
        nodeToFind = this->front;
        for(int pos = 0;pos<index;++pos)
        {
            nodeToFind = nodeToFind->getNext();
        }
    }
    else
    {
        nodeToFind = this->end;
        for(int pos = this->size - 1;pos > index; --pos)
        {
            nodeToFind = nodeToFind->getPrev();
        }
    }
    
    return nodeToFind;
}
template<class T>
void CircularList<T>::add(T item)
{
    DoubleNode<T> * addedNode;
    if(this->size == 0)
    {
        addedNode = new DoubleNode<T>(item);
        this->front = addedNode;
    }
    else
    {
        addedNode = new DoubleNode<T>(item, this->end, this->front);
        this->end->setNext(addedNode);
    }
    this->end = addedNode;
    this->size++;
}
template<class T>
void CircularList<T>::addAtIndex(int index, T item)
{
    assert(index >= 0 && index <= this->size);
    
    DoubleNode<T> * next;
    DoubleNode<T> * prev;
    DoubleNode<T> * addMe;
    
    if(index < this->size)
    {
        next = findNode(index);
        prev = next->getPrev();
    }
    else if(index == this->size)
    {
        next = this->front;
        prev = this->end;
    }
    
    addMe = new DoubleNode<T>(item, prev, next);
    
    if(index == 0)
    {
        this->front = addMe;
    }
    else if (index == this->size)
    {
        this->end = addMe;
    }
    
    prev->setNext(addMe);
    next->setPrev(addMe);
    this->size++;
}
template<class T>
T CircularList<T>::getFromIndex(int index)
{
    assert(index >= 0 && index < this->size);
    DoubleNode<T> * holder = findNode(index);
    return holder->getData();
}
template<class T>
T CircularList<T>::remove(int index)
{
    assert(index >= 0 && index < this->size); DoubleNode<T> * removed = findNode(index);
    DoubleNode<T> * removedPrev = removed->getPrev();
    DoubleNode<T> * removedNext = removed->getNext();
    
    if(index == 0)
    {
        this->front = removedNext;
        this->end->setNext(removedNext);
    }
    if(index == this->size - 1)
    {
        this->end = removedPrev;
        this->front->setPrev(removedPrev);
    }
    
    removedPrev->setNext(removedNext);
    removedNext->setPrev(removedPrev);
    
    T value = removed->getData();
    this->size--;
    delete removed;
    return value;
}
template<class T>
int CircularList<T>::getSize() const
{
    return this->size;
}
#endif /* CircularList_h */
