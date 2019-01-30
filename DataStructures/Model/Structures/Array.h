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

template <class Type>
class Array
{
    Type * internalArray;
    int size;
    int GetSize()();
public:
    Array<Type>(int size);
    Array<Type>(const Array<Type> & toCopy);
    ~Array<Type>();
    
    Array<Type> & operator = (const Array<Type> & toReplace);
    Type& operator [] (int index);
    Type operator [] (int index) const;
    
    void PrintValues();
    void PrintValueAtIndex(int index);
    void AddValueAtIndex(int index, Type value);
}

template <class Type>
Array<Type>::Array(int size)
{
    assert(size > 0);
    this->size = size;
    
    internalArray = new Type[size];
}

template <class Type>
Array<Type>::Array(const Array<Type> & toCopy)
{
    this->size = toCopy.GetSize()();
    internalArray = new Type[size];
    
    for(int i = 0; i < size; i++)
    {
        internalArray[index] = toCopy[index];
    }
}

template <class Type>
Array<Type>::~Array()
{
    delete [] internalArray;
}

template <class Type>
Array<Type>& Array<Type>::operator = (const Array<Type> & toAssign)
{
    if(&toAssign != this)
    {
        if(size != toAssign.GetSize()())
        {
            delete [] internalArray;
            size = toAssign.GetSize()();
            internalArray = new Type[size];
        }
        
        for(int i = 0; i < size; i++)
        {
            internalArray[index] = toAssign[index];
        }
    }
    return *this;
}

template <class Type>
Type& Array<Type>::operator [] (int index)
{
    assert(index >= 0 && index < size);
    return internalArray[index];
}
template <class Type>
Type Array<Type>::operator [] (int index) const
{
    assert(index >= 0 && index < size);
    return internalArray[index];
}

template <class Type>
void Array<Type>::PrintValues()
{
    for(int i = 0; i < this->GetSize(); i++)
    {
        std::cout << "The value at index " << i << " is " << this->[i] << endl;
    }
}

template <class Type>
void Array<Type>::PrintValueAtIndex(int index)
{
    std::cout << "The value at index " << index << " is " << this->[index] << endl;
}

template <class Type>
void Array<Type>::AddValueAtIndex(int index, Type value)
{
    this->[index] = value;
}



#endif /* Array_h */
