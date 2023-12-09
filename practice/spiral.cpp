#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class bot{
    array<int, 4> directions{1, 10, -10, -1};
    int* state;
    <T>* value;
    bot(<T>* start){
        this->state = directions.begin();
        this->value = start;
    }
    <T>* next_cell(){
        
        // change direction
        if(*(this->state) == directions.end()){
            this->state = directions.begin();
        }else{
            this->state++;
        }
    }
};

int main(){
    
    return 0;
}