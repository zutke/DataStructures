//
//  List.hpp
//  DataStructures
//
//  Created by Gutke, Zachary on 2/7/19.
//  Copyright © 2019 Zachary Gutke. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include "../Headers/LinearNode.h"

template <class T>
class List
{
    
protected:
    int size;
public:
    
    virtual void add(T item) = 0;
    virtual void addAtIndex(int i, T item) = 0;
    virtual T remove(int i) = 0;
    virtual T getFromIndex(int i) = 0;
    
    virtual int getSize() const = 0;
    virtual LinearNode<T> * getFront() = 0;
    virtual LinearNode<T> * getEnd() = 0;
};

#endif /* List_hpp */
