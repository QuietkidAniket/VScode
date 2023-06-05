#include "classdemo.h"
class Container{
public:
    virtual double& operator[](int) = 0;        //pure virtual function
    virtual int size() const = 0;               //const member function
    virtual ~Container() {}                     //destructor
};  

void use(Container& c){                         //works with a Container object
    const int sz = c.size();
    for(int i = 0; i!= sz; ++i)cout<< c[i] << '\n';
}

class Vector_container : public Container{      // superclass : Container, subclass : Vector_container
    Vector v;
    public:
    Vector_container(int s) : v(s) {}           //vector of s elements
    ~Vector_container(){}                       //implicitly invokes ~Vector()

    double& operator[]( int i){ return v[i]; }  //overrides the corresponding member in Container
    int size() const { return v.size(); }       //overrides the corresponding member in Container
};

class List_container : public Container{
    std::list<double> ld;
    public:
    List_container(){}
    List_container(std::list<double> il) : ld{il} {}
    ~List_container(){}

    double& operator[](int i);
    int size() const { return id.size(); }
};
double& List_container::operator[](int i ){
    for(auto& x : ld){
        if(i == 0) return x;
        --i;
    }
    throw out_of_range("List container");
}

void g(){
    Vector_container vc {1,2,3,4,5,6,7,8,9,10};
    use(vc);
}
