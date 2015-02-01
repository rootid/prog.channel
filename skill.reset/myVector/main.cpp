#include <iostream>
#include <fstream>
#include <sstream>
#include <string>   
#include <cstdlib> // for exit()

#include "MyVector.h"

using namespace std;


int main () {
    MyVector v(3); 
    v[0] = "this"; 
    v[1] = "is"; 
    v[2] = "good!";
    cout << v[0] << " " << v[1] << " " << v[2] << endl;
    v.front() = "THIS";
    v.back() = "GOOD!";
    cout << v.front() << " " << v[1] << " " << v[2] << endl;
    try {
        cout << v[4] << endl;
    } catch (exception &e) {
        cout << e.what() << endl;
    }


}

