#include<iostream>
using namespace std;

//Operator overloading with
//1.Memeber function syntax
//2.Free function syntax
struct Point {
    int a;
    int b;
    Point (int a,int b)  :
        a(a),b(b)
    {

    };
   
    //Unary operator overloading
    bool operator==(const Point &p);

    //Binary operator overloading
    Point operator+(const Point &p);
};

bool Point :: operator== (const Point &p) {
    return (p.a == a && p.b == b);
}

Point Point:: operator+(const Point &p) {
    return Point(a+p.a,b+p.b);
}

//Operator overloading with free function 
Point operator* (int i,Point p) {
    return Point(i*p.a,i*p.b);
}


int main () {
    Point p (1,2);
    Point p1 (2,3);
    Point c = p + p1;
    cout << c.a << "," << c.b << endl;


    Point p2 (2,3);
    if (p1 == p2) {
        cout << "equal " << endl;
    } else {
        cout << "Not equal " << endl;
    }

    Point p3(1,5);
    Point result = 5 * p3;

    cout << result.a << "," << result.b << endl;

}


