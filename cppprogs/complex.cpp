#include <iostream>

class complex{
    private:
    double re, im;
    public:
        complex(double r, double i) : re{r}, im(i) {}
        complex(double r) : re{r}, im{0} {}
        complex() : re{0}, im{0} {}
        
        // copy constructor 
        complex(complex& c): re{c.real()}, im{c.imag()} {}
        
        // constant function
        double real() const { return re;}
        // constant function
        double imag() const { return im;}

        // state changing function
        void real(double d){ 
            re = d; 
        }
        // state changing function
        void imag(double d) { 
            im = d;
        }

        // equals
        bool operator==(const complex& z){
            if(this->re == z.re && this->im == z.im)return true;
            else return false;
        }

        // not equals
        bool operator!=(const complex& z){
            if(*this == z)return false;
            else return true;
        }

        // short hand plus
        complex operator+=(const complex& z){
            re += z.re;
            im += z.im;
            return *this;
        }

        // short hand minus
        complex& operator-=(const complex& z){
            re -= z.re;
            im -= z.im;
            return *this;
        }


        // short hand multiplication
        complex& operator*=(const complex& z){
            complex x ((*this)*z);
            *this = x;
            return *this;
        }

        complex& operator/=(const complex& z){
            complex x ((*this)/z);
            *this = x;
            return *this;
        }

        // pre decrement
        complex& operator--(){
            --re;
            --im;
            return *this;
        }
        // pre increment
        complex& operator++(){
            ++re;
            ++im;
            return *this;
        }
        // post increment
        complex& operator++(int){
            complex temp = *this;
            re++;
            im++;
            return temp;
        }
        // post decrement
        complex& operator--(int){
            complex temp = *this;
            re--;
            im--;
            return temp;
        }
    
        

        complex operator+(const complex& a) {
            return complex(this->re + a.re, this->im + a.im); 
        }

        complex operator*(const complex& a){ 
            return complex(this->re * a.re - this->im*a.im, this->re * a.im + this->re*a.re);
        }

         complex operator-(const complex& a){
             return complex(this->re-a.real(), this->im -a.imag()); 
        }

        complex operator/(const complex& a){ 
            double deno = a.re * a.re + a.im * a.im;
            return complex( (this->re* a.re + this->im * a.im)/deno, (this->im * a.re - this->re* a.im)/deno);
        }


        friend double sqrt(const complex& a){
            return a.re * a.re + a.im * a.im;
        }
        
        friend std::ostream& operator<<(std::ostream& out,  const complex& z);

};

std::ostream& operator<<(std::ostream& out, const complex& z){
    out << z.re << " + i" << z.im;
    return out;
}

int main(){
    complex c1(2,3);
    complex c2(4,8);
    complex c3 (c1 + c2);
    std::cout << c2 << '\n';
    c3 += c1;
    std::cout << c3.real() <<" + i"<< c3.imag() <<'\n' ;
    --c3;
    std::cout << c3.real() <<" + i"<< c3.imag() <<'\n' ;
    c3--;
    std::cout << c3.real() <<" + i"<< c3.imag() <<'\n' ;
    std::cout << (int)(c1 == c2) << '\n';
    std::cout << c1 * c3 << '\n';

    return 0;
}