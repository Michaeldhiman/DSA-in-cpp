#include<bits/stdc++.h>
using namespace std;
class car{
    private:
    string  model;
    int year;
    double fuelLevel;
    int speed;
    bool isRunning;
    
    public:
    // constructor
    car(string model,int year,double fuelLevel,int speed,bool isRunning){
        this->model=model;
        this->year=year;
        this->fuelLevel=fuelLevel;
        this->speed=speed;
        this->isRunning=isRunning;
    }
    bool startEngine(){
        this->isRunning=true;
        cout<<"Engine start:"<<this->isRunning<<endl;
        return this->isRunning;
    }
    bool stopEngine(){
        this->isRunning=false;
        cout<<"Engine Stop:"<<this->isRunning<<endl;
        return this->isRunning;
    }
    void acccelerate(int amount){
        if(this->fuelLevel>0 && this->isRunning){
            this->speed+=amount;
        }
    }
    void brake(int intensity){
        int initial_speed=this->speed;
        if((initial_speed-=intensity)>0)
        this->speed-=intensity;
        else{
        this->speed=0;

        }
    }
    void refuel(int amount){
        double empty=100-(this->fuelLevel);
        if(empty){
            if(amount>empty){
                this->fuelLevel+=empty;
            }else{
                this->fuelLevel+=amount;
            }
        }
    }
    void printstatus(){
        cout<<"Model:"<<this->model<<endl;
        cout<<"fuel:"<<this->fuelLevel<<endl;
        cout<<"Speed:"<<this->speed<<endl;
        cout<<"Engine state:"<<this->isRunning<<endl;
    }
};
int main(){
    car nano("M321",2004,23.2,45,1);
    nano.stopEngine();
    nano.startEngine();
    // nano.acccelerate(30);
    nano.refuel(40.3);
    nano.brake(30);
    nano.printstatus();

    
    return 0;
}