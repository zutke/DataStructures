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

template <class Type>
class LinearNode
{
    Type data;
public:
    LinearNode();
    LinearNode(Type data);
    void PrintData();
};


// Template Definitions
template <class Type>
LinearNode<Type> :: LinearNode(){}

template <class Type>
LinearNode<Type> :: LinearNode(Type data)
{
    this->data = data;
}

template <class Type>
void LinearNode<Type>::PrintData() {
    Type data;
    data = this->data;
    std::cout << data << std::endl;
}
#endif /* Node_hpp */
