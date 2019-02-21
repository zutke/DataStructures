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


#endif /* LinkedList_h */
