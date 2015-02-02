#include<iostream>
#include<string>
#include<cstring>
using namespace std;

enum EMPLOYEE_TYPE
{
    DEVELOPER,MANAGER,CTO_T,CEO_T
};


class Employee {
    public :
        virtual void doWork (EMPLOYEE_TYPE) const {
            cout << "executing the task "  << endl;
        }

        virtual char* who() const {
            return "Employee";
        }

        // Assume this will modify the object:
        virtual void adjust(int) {}
};

class Developer : public Employee  {
    
         void doWork (EMPLOYEE_TYPE) const {
            char *tmp = who();
            cout << "Developer executing the task "  << endl;
        }

         char* who() const {
            return "Developer" ;
        }

        // Assume this will modify the object:
         void adjust(int) {}

};


class Manager : public Employee {

         void doWork (EMPLOYEE_TYPE) const {
            cout << "Manager executing the task "  << endl;
        }

         char* who() const {
            return "Manager";
        }

        // Assume this will modify the object:
         void adjust(int) {}

};

class CTO : public Employee {

         void doWork (EMPLOYEE_TYPE) const {
            cout << "CTO executing the task "  << endl;
        }

         char* who() const {
            return "CTO";
        }

        // Assume this will modify the object:
         void adjust(int) {}

};


// Identical function from before:
void work(Employee& e) {
  e.doWork(DEVELOPER);
}

int main () {
    Manager m;
    Developer d;

    CTO c1;
    work (c1);
    work (m);
    work (d);
}






