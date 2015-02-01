#include<string>
#include<stdexcept>

#include "MyVector.h"

using std::string;

const size_t MyVector::INITIAL_CAPACITY = 5;

//Default CTOR
MyVector :: MyVector()  {
    this->logicalSize = 0;
    this->currentCapacity = INITIAL_CAPACITY;
    itemPtr = new string[this->currentCapacity]; 
}

MyVector :: MyVector(size_t n) :
    logicalSize(n)
    ,currentCapacity (std::max(n,INITIAL_CAPACITY) )
    ,itemPtr (new string[std::max (n,currentCapacity)])
{

}

//Copy CTOR
MyVector::MyVector(const MyVector& otherVec) :
    logicalSize(otherVec.logicalSize)
    ,currentCapacity (otherVec.currentCapacity )
    ,itemPtr (new string[otherVec.logicalSize])
{
    for (size_t i=0; i<logicalSize; ++i)
        itemPtr[i] = otherVec.itemPtr[i];
}

MyVector :: ~MyVector() {
    delete [] itemPtr;
}

//Accessor implementation
string& MyVector::operator[](size_t index) 
{
    if (index < logicalSize)
        return itemPtr[index];
    else
        throw std::out_of_range("index is out of range");
}
 
const string& MyVector::operator[](size_t index) const
{
    if (index < logicalSize)
        return itemPtr[index];
    else
        throw std::out_of_range("index is out of range");
}

string& MyVector::front() 
{ 
    return (*this)[0]; 
}
 
const string& MyVector::front() const
{ 
    return (*this)[0]; 
}
 
string& MyVector::back() 
{ 
    return (*this)[logicalSize-1]; 
}
 
const string& MyVector::back() const
{ 
    return (*this)[logicalSize-1]; 
}

//Capacity
size_t MyVector :: capacity() const {
    return currentCapacity;
}

bool MyVector::isEmpty () {
    return (logicalSize == 0);
}


//Modifiers

void MyVector :: push_back(const string& value) {
    if (logicalSize == currentCapacity) {
        reserve(2 * logicalSize );
    }
    itemPtr[++logicalSize] = value;
}

void MyVector::reserve(size_t n) {
    currentCapacity = std::max (n,2*currentCapacity);
    string *newDataPtr = new string[currentCapacity];
    for (size_t i=0;i<logicalSize;i++) {
        newDataPtr[i] = itemPtr[i];
    }
    delete [] itemPtr;
    itemPtr = newDataPtr;
}


void MyVector :: pop_back() {
    erase(logicalSize - 1);
}

void MyVector:: erase (size_t position) {
    if (position < logicalSize) {
        for (size_t i=position;i<logicalSize-1;i++){
            itemPtr[i] = itemPtr[i+1];
        } 
        itemPtr[logicalSize - 1] = string();
        logicalSize--;
    }
}

void MyVector:: insert (size_t position,const string & value) {
    
    if (logicalSize == currentCapacity)
        reserve(2*currentCapacity);
    for (size_t i=logicalSize; i>position; --i)
        itemPtr[i] = itemPtr[i-1];
    itemPtr[position] = value;
    logicalSize++;
}

void MyVector::swap(MyVector& otherVec) {

    std::swap(logicalSize, otherVec.logicalSize);
    std::swap(currentCapacity, otherVec.currentCapacity);
    std::swap(itemPtr, otherVec.itemPtr);
}

