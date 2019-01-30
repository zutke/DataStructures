//
//  Node.hpp
//  DataStructures
//
//  Created by Gutke, Zachary on 1/28/19.
//  Copyright © 2019 Zachary Gutke. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#inlude <assert.h>

template <class Type>
class Node
{
    Type data;
public:
    Node(Type data);
    /*
     Type getData();
     void setData(Type data);
     */
};


// Template Definitions
template <class Type>
Node<Type> :: Node(){}

template <class Type>
Node<Type> :: Node(Type data)
{
    this->data = data;
}
/*
template <class Type>
Type Node<Type> :: getData()
{
    return data;
}
template <class Type>
void Node<Type> :: setData(Type data) {
    this->data = data;
}
*/

#endif /* Node_hpp */
