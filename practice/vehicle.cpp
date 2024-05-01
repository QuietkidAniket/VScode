// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<vector>
using namespace std;
class vehicle{
    int vid;
    string make;
    string model;
   
    public:
        vehicle(){}
        vehicle(int vi,string m,string mod):vid(vi),make(m),model(mod){}
        virtual void calc_speed(){}
        
        virtual void desc(){
            cout<<"vehicle ID: "<<vid<<", Make: "<<make<<", Model: "<<model<<endl;
        }
   ~vehicle(){}
};

class car:public vehicle{
    int hp;
    float speed;
    public:
        // car(){}
        car(int vi,string m,string mod,int h):vehicle(vi,m,mod),
        hp(h){}
        
        void calc_speed(){
            speed=hp*0.5;
        }
        void desc(){
            vehicle::desc();
            calc_speed();
            cout<<"Horsepower: "<<hp<<" hp, Speed: "<<speed<<" km/h"<<endl;}
            
        // ~car(){}
};

class truck:public vehicle{
    int load;
    float speed;
    public:
        truck(){}
        truck(int vi, string m,string mo,int l):vehicle(vi,m,mo),
        load(l){}
        
        void calc_speed(){
            speed=load*0.1;
        }
        void desc(){
            vehicle::desc();
            calc_speed();
            cout<<"Load: "<<load<<" tons, Speed: "<<speed<<" km/h"<<endl;
        }
        ~truck(){}
};

class motorc:public vehicle{
    int engine_cap;
    float speed;
    public:
        motorc(){}
        motorc(int vi,string m,string mo,int ec):vehicle(vi,m,mo),engine_cap(ec){}
        
      void calc_speed(){
            speed=engine_cap*1.2;
        }
       void desc(){
            vehicle::desc();
            calc_speed();
            cout<<"Engine Capacity: "<<engine_cap<<" cc, Speed: "<<speed<<" km/h"<<endl;
        }
        ~motorc(){}
};

void vehicledesc(vehicle* v){
    v->desc();
}

class garage{
    vehicle* v;
    vector<vehicle*> e;
    public:
        garage(){}
        void addvehicle(){
            int num;
            cin>>num;
            for (int i=0;i<num;i++){
                int vi;string m, mo;int type;
                cin>>type>>vi>>m>>mo;
                if(type==1){
                    int h;
                    cin>>h;
                    v=new car(vi,m,mo,h);
                    e.push_back(v);
                }
                
                else if(type==2){
                    int lo;
                    cin>>lo;
                    v=new truck(vi,m,mo,lo);
                    e.push_back(v);
                }
                else if (type==3){
                    int ec;
                    cin>>ec;
                    v=new motorc(vi,m,mo,ec);
                    e.push_back(v);
                }
            }
        }
    
        
        void display(){
            for(int i=0;i<e.size();i++){
                vehicledesc(e[i]);
            }
        }
        ~garage(){
            for(auto x : e)delete x;
        }
};
int main() {
    garage g;
    g.addvehicle();
    g.display();

}