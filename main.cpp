
#include <iostream>

using namespace std;
class Object
{
public:
    Object(int a,int b) {

        this->a = a;

        this->b = b;

    cout<<"Obj constructor "<<"a"<<a<<"b"<<b<<endl;
    }

    ~Object(){

        cout<<"Obj destructor"<<endl;
    }
protected:
    int a;
    int b;

};

class Parent : public Object
{
public:

    Parent(char *p):Object(1,2){

            this->p = p;

        cout<<"Superclass constructor:"<<p<<endl;

    }
    ~Parent(){

        cout<<"Destructor of parent class"<<endl;
    }
//    void printP(int a,int b){

//        cout<<"I am father"<<endl;

//    }
protected:

        char *p;

private:

};
class child : public Parent{

public:
    void printC(){

        cout<<"I am son"<<endl;

    }


    child(char *p) : Parent(p),obj1(1,2),obj2(2,4){




        this->myp = p;
         cout<<"Subclass constructor"<<myp<<endl;

    }
    ~child(){


        cout<<"Subclass destructor"<<myp<<endl;


    }



protected:

    char *myp;

    Object obj1;

    Object obj2;

private:





};

void playObj(){



}
int main()
{



  child c1("child");


}

