//
//  Array.h
//  DataStructures
//
//  Created by Gutke, Zachary on 1/30/19.
//  Copyright © 2019 Zachary Gutke. All rights reserved.
//

#ifndef Array_h
#define Array_h
#include <assert.h>
#include <iostream>

template<class T>
class Array
{
    T * internalArray;
    int size;
public:
    Array<T>(int size);
    Array<T>(const Array<T> & toCopy);
    ~Array<T>();
    
    Array<T> & operator = (const Array<T> & toReplace);
    T& operator [] (int index);
    T operator [] (int index) const;
    
    int getSize() const;
    T getFromIndex(int index);
    void setAtIndex(int index, T data);
};

template<class T>
Array<T> :: Array(int size)
{
    assert(size > 0);
    this->size = size;
    
    internalArray = new T[size];
}

template<class T>
Array<T> :: Array(const Array<T> & toCopy)
{
    this->size = toCopy.getSize();
    
    internalArray = new T[size];
    
    for(int i = 0; i < size; i++)
    {
        internalArray[i] = toCopy[i];
    }
}

template<class T>
Array<T> :: ~Array()
{
    delete [] internalArray;
}

template<class T>
Array<T> & Array<T> :: operator = (const Array<T> & toAssign)
{
    if(&toAssign != this)
    {
        if(size != toAssign.getSize())
        {
            delete [] internalArray;
            size = toAssign.getSize();
            internalArray = new T[size];
        }
        
        for(int i = 0; i < size; i++)
        {
            internalArray[i] = toAssign[i];
        }
    }
    return *this;
}

template <class T>
T & Array<T> :: operator [] (int index)
{
    assert(index >= 0 && index < size);
    return internalArray[index];
}
template <class T>
T Array<T> :: operator [] (int index) const
{
    assert(index >= 0 && index < size);
    return internalArray[index];
}

template <class T>
int Array<T> :: getSize() const
{
    return size;
}
template <class T>
T Array<T> :: getFromIndex(int index)
{
    assert(index >= 0 && index < size);
    
    T value = internalArray[index];
    
    return value;
}
template <class T>
void Array<T> :: setAtIndex(int pos, T item)
{
    assert(pos >= 0 && pos < size);
    internalArray[pos] = item;
}

#endif /* Array_h */
