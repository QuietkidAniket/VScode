#include <iostream>

class example{
    int x;
    public:
        example(int x){
            this-> x = x;
            std::cout << "The value of x is : " << x <<'\n';
        }
        void set(int y){
            x= y;
            std::cout << "The new value of x is "<<x << '\n';
        }
};

int main(){
    example obj1(1);                //creating object with automatic storage duration
    example obj2 = example(2);     //creating object with automatic storage duration in a different method
    example* obj3 = new example(3); //creating object with dynamic storage duaration.
    obj1.set(10);
    obj2.set(20);
    obj3->set(30);
    //Explicitly deleting the dynamic storage object
    delete obj3;

    return 0;
}