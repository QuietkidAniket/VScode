#include <iostream>

class complex{
    private:
    static double e;
    static double pi;
    double re, im;
    public:
        complex(double r, double i) : re{r}, im(i) {}
        complex(double r) : re{r}, im{0} {}
        complex() : re{0}, im{0} {}
        // copy constructor 
        complex(complex& c){
            re  = c.real(); im = c.imag();
        }
        
        // constant function
        double real() const { return re;}
        // constant function
        double imag() const { return im;}

        // state changing function
        void real(double d){ re = d;}
        // state changing function
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
        // complex& operator*=(complex);
        // complex& operator/=(complex);

        complex operator+(complex a) {return complex(this->re + a.re, this->im + a.im); }

        // complex operator+(complex a, complex b){ return complex(a.real()+b.real(), a.imag()+b.imag()); }
        // complex operator-(complex a, complex b){ return complex(a.real()-b.real(), a.imag()-b.imag());}
        // complex operator*(complex a, complex b){ return a*=b; }
        // complex operator/(complex a, complex b){ return a/=b; }

        complex operator-(complex a){ return complex(this->re-a.real(), this->im -a.imag()); }

//         bool operator==(complex a, complex b){ return a.real() == b.real() && a.imag() == b.imag();}
//         bool operator!=(complex a, complex b){ return !(a==b);}
//         complex sqrt(complex);

        static double get_e(){
            return e;
        }
        static double get_pi(){
            return pi;
        }
};
double complex::e = 2.71828182;
double complex::pi = 3.14159265;

int main(){
    complex c1(2,3);
    complex c2(4,8);
    complex c3 = c1 + c2;
    c3 += c1;
    std::cout << c3.real() <<" + i"<< c3.imag() <<'\n' ;
    std::cout << complex::get_e() << '\n';
    return 0;
}