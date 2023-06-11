#include <iostream>
#include <iterator>


int main(){
    constexpr int scores[] {8,8,8 ,10,10,12,12,12,12,12,15,15,15, 20,20,25,25};
    constexpr int numberofscores {static_cast<int>(std::size(scores))};
    int totalscore;
    for(int i = 0; i < numberofscores; ++i){
        totalscore += scores[i];
    }
     double avg  {static_cast<double>(totalscore/numberofscores)};
     std::cout<< avg << '\n';
     return 0;
}