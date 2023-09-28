// Naive approach, but erroneous 

#include <iostream>
using namespace std;

int main(){
    double n;
    cin>> n;
    double a,b;
    cin>> a;
    cin>>b;
    if(a+b == 0){
        cout<< 0;
        return 0;
    }
    double ans = (double)(n* (a == 0? 1.0 : a) * (b == 0? 1.0:b) /(a+b));
    if(int(ans) == ans){
        cout<< ans;
        return 0;
    }
    int floor_a = floor(ans/a)*a;
    int floor_b = floor(ans/b)*b;
    int ceil_a = ceil(ans/a)*a ;
    int ceil_b = ceil(ans/b)*b;
    if(abs(floor_a -  ceil_b) < abs(ceil_a - floor_b)){
        cout<< max(floor_a, ceil_b);
    }else{
        cout<<max(ceil_a, floor_b);
    }
    return 0;
}

/* Let us put the problem in these perspective:
     A and B takes a seconds and b seconds for completing a single task, respectively. Now if N tasks are given 
     and both of them work at the same time together, we need to find the minimum time of completion.
     Now the minimum time of completion is also the time through which A and B both work *almost* together 
     for the limited no. of tasks, so that none of them rest while another one is working. 
     So, the difference between the time taken by A to complete x tasks and the time taken by B 
     to complete N-x tasks, should be minimum (almost equal to 0), so that only minimum idle time 
     is wasted by someone who already finishes his task earlier than the other. This arises due to the fact 
     that each task is unitary,i.e., cannot be divided into fractions of tasks and distributed to both parties.
     By minimizing the time difference, we will be approaching the minimum time to complete the task.
    time difference(x) = xa - (N-x)b
    rate of change of time difference (x) = m = a+b
    hence time difference (x) = (a+b)x - Nb, where Nb = y intercept or time difference (x) = -nB at x = 0 
    and x lies in the interval [0,N] and we need to minimize it.
    then for the corresponding x, we just need to multiply x with a or b with n-x whichever is maximum, to
    find the time taken together to complete the work.
*/


