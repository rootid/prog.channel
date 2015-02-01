
#ifndef _MYECTOR_H
#define _MYECTOR_H

#include<string>

class MyVector {

    public :
   // constructors and assignment operator
    MyVector();                // default constructor, will get rid of later
    MyVector(size_t n = 0);        // construct a MyVector with n strings
    MyVector(const MyVector&); // copy constructor
    MyVector& operator=(const MyVector& otherVec);
 
    // destructor
    ~MyVector();
 
    // accessors
    std::string& operator[](size_t index);
    const std::string& operator[](size_t index) const;
    std::string& front();
    const std::string& front() const;
    std::string& back();
    const std::string& back() const;
 
    // capacity
    size_t size() const;
    size_t capacity() const;
    bool isEmpty();
    void reserve(size_t n); 
 
    // modifiers
    void push_back(const std::string& value);
    void pop_back();
    void insert(size_t position, const std::string& value);
    void erase(size_t position);
    void swap(MyVector& otherVec);

    private :
    size_t logicalSize;
    size_t currentCapacity;
    static const size_t INITIAL_CAPACITY;
    std::string *itemPtr; // points to the start of the array

};


#endif
