//
//  DoubleNode.h
//  DataStructures
//
//  Created by Gutke, Zachary on 2/21/19.
//  Copyright © 2019 Zachary Gutke. All rights reserved.
//

#ifndef DoubleNode_h
#define DoubleNode_h

template<class T>
class DoubleNode : public Node<T>
{
    DoubleNode<T>* next;
    DoubleNode<T>* prev;
public:
    DoubleNode<T>();
    DoubleNode<T>(T data);
    DoubleNode<T>(T data,DoubleNode<T>* next,DoubleNode<T>* prev);
    
    DoubleNode<T>* getNext();
    void setNext(DoubleNode<T>* next);
    DoubleNode<T>* getPrev();
    void setPrev(DoubleNode<T>* prev);
};

template <class T>
DoubleNode<T>::DoubleNode() : Node<T>()
{
    next = nullptr;
    prev = nullptr;
}
template<class T>
DoubleNode<T>::DoubleNode(T data) : Node<T>(data)
{
    next = nullptr;
    prev = nullptr;
}
template<class T>
DoubleNode<T>::DoubleNode(T data,DoubleNode<T>* next,DoubleNode<T>* prev) : Node<T>(data)
{
    this->next = next;
    this->prev = prev;
}

template<class T>
DoubleNode<T> * DoubleNode<T>::getNext()
{
    return next;
}
template<class T>
void DoubleNode<T>::setNext(DoubleNode<T>* next)
{
    this->next = next;
}
template<class T>
DoubleNode<T> * DoubleNode<T>::getPrev()
{
    return prev;
}
template<class T>
void DoubleNode<T>::setPrev(DoubleNode<T>* prev)
{
    this->prev = prev;
}

#endif /* DoubleNode_h */
