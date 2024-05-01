#include <iostream>

class Sequence{
    public:
    int* arr;
    int n;
    int final_weight = -1;
    Sequence(int n){
        this-> n = n;
        arr = new int(n);
    }
    void input(){
        for(int i = 0; i< n; i++){
            std::cin >> arr[i];
        }
    }
    void compute_weight(){
        int* seq = new int(n);
        int N = n;
        while(true){
            int i,j;
            for(i = 0, j =N-1; i < N/2; i++, j--){
                seq[i] = arr[i] + arr[j];
            }
            if(N%2 != 0){
                seq[i] = arr[i];
            }
            if(i == 0){
                final_weight = seq[i];
                break;
            }
            N = (N /2) + (N%2);
            
            this->arr = seq;    // forgot to write this in exam
            
        }
    }
    void display_weights(){
        std::cout << final_weight <<'\n';
    }
};

int main(){
    int n;
    std::cin >> n;

    Sequence obj(n);
    
    obj.input();

    obj.compute_weight();
    obj.display_weights();
    return 0;
}