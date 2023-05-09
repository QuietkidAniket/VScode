#include <iostream>
using namespace std;

class Vector{
public:
    Vector(int s) {                                //construct a vector, acquire resources
        if(s < 0){                                 // invariant 
            throw length_error{};
        }
        elem = new double[s];
        sz = s;
    } 
    Vector(initializer_list<double>);              //initialise with a list of doubles
    void push_back(double);                        //add element at the end, increasing the size by one
    ~Vector(){ delete[] elem; }                     //destructor: release resources
    double& operator[](int i){                     //element access: subscripting
        if(i < 0 || i > size()){
            throw out_of_range{"Vector::operator"};
        }
        return elem[i];
    }
    int size(){ return sz;  }                      //returns size of the Vector

    Vector read(istream& is){                      //reads an entire file of data and returns a corresponding Vector of such elements
        Vector v;
        for(double d; is >>d;){
            v.push_back(d);
        }
    }                      
private:
    double* elem;                                  //pointer to the elements
    int sz;                                        //the number of elements

};     

Vector::Vector(std::initializer_list<double> lst)  //initialize with a list
    :elem{new double[lst.size()]}, sz{static_cast<int>(lst.size())} {
        copy(lst.begin(), lst.end(), elem);        //copy from lst into elem
    }

int main(){
    int s;
    cin>> s;
    Vector v(s);                                    // vector object
    for(int i = 0; i!= v.size(); ++i){
        cin>> v[i];
    }
    double sum = 0;
    for(int i = 0; i != v.size(); i++)sum += v[i];
    cout<< "Sum : "<< sum ;
    return 0;
}//v is destroyed here


class complex{
    double re, im;
    public:
        complex(double r, double i) : re{r}, im(i) {}
        complex(double r) : re{r}, im{0} {}
        complex() : re{0}, im{0} {}

        double real() const { return re;}
        void real(double d){ re = d;}
        double imag() const { return im;}
        void imag(double d) { im = d;}

        complex& operator+=(complex z){
            re += z.re;
            im += z.im;
            return *this;
        }
        complex& operator-=(complex z){
            re -= z.re;
            im -= z.im;
            return *this;
        }
        complex& operator*=(complex);
        complex& operator/=(complex);

};

        complex operator+(complex a, complex b){ return a+=b; }
        complex operator-(complex a, complex b){ return a-=b; }
        complex operator*(complex a, complex b){ return a*=b; }
        complex operator/(complex a, complex b){ return a/=b; }
        complex operator-(complex a){ return {-a.real(), -a.imag()}; }

        bool operator==(complex a, complex b){ return a.real() == b.real() && a.imag() == b.imag();}
        bool operator!=(complex a, complex b){ return !(a==b);}
        complex sqrt(complex);