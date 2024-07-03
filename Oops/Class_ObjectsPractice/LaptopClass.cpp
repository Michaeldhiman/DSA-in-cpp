#include<bits/stdc++.h>
using namespace std;
class laptop{
    private:
    string brand;
    double screensize;
    string processor;
    int ram;
    int storage;
    double batterylevel;
    bool ison;
    public:
    laptop(string brand,double screensize,string processor,int ram , int storage,double batterylevel,bool ison){
        this->brand=brand;
        this->screensize=screensize;
        this->processor=processor;
        this->ram=ram;
        this->storage=storage;
        this->batterylevel=batterylevel;
        this->ison=ison;
    }
    void poweron(){
        this->ison=true;
        cout<<"Power On"<<endl;
    }
    void poweroff(){
        this->ison=false;
        cout<<"Power off"<<endl;
    }
    void charge(int amount){
        int remaining=100-(this->batterylevel);
        if(amount>remaining){
            this->batterylevel+=remaining;
        }else{
            this->batterylevel+=amount;
        }
    }
    void openapps(int apps_number){
        this->batterylevel-=apps_number*2.0;
    }
    void closeapps(int apps_number){
        this->batterylevel+=apps_number*0.5;
    }
    void printspecs(){
        cout<<"Brand:"<<this->brand<<endl;
        cout<<"Screen size:"<<this->screensize<<endl;
        cout<<"Processor:"<<this->processor<<endl;
        cout<<"RAM :"<<this->ram<<endl;
        cout<<"Storage:"<<this->storage<<endl;
        cout<<"Battery Level:"<<this->batterylevel<<endl;
        return ;
    }


};
int main(){
    laptop victus("Hp",15.6,"12500H",16,512,66.3,true);
    victus.charge(30);
    victus.openapps(5);
    victus.printspecs();

    return 0;
}