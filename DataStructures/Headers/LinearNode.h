//
//  LinearNode.hpp
//  DataStructures
//
//  Created by Gutke, Zachary on 1/28/19.
//  Copyright © 2019 Zachary Gutke. All rights reserved.
//

#ifndef LinearNode_hpp
#define LinearNode_hpp

#include <assert.h>
#include "../Headers/Node.hpp"

template <class Type>
class LinearNode : public Node<Type>
{
    LinearNode<Type> * next;
public:
    //LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    
    LinearNode<Type> * getNext();
    void setNext(LinearNode<Type> * next);
};


// Template Definitions
//template <class Type>
//LinearNode<Type> :: LinearNode() : Node() {} // Should never be called

template <class Type>
LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data) // Calling Node<Type>(data) assigns data for us automatically, AKA no this->data = data below
{
  //this->data = data;
    this->next = nullptr; // If given no ptr in params, set to nullptr by default.
}

template <class Type>
LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(data)
{
    this->next = next;
}
template<class Type>
LinearNode<Type> * LinearNode<Type> :: getNext()
{
    return this->next;
}

template <class Type>
void setNext(LinearNode<Type> * next)
{
    this->next = next;
}
#endif /* Node_hpp */
