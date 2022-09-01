#include<iostream>
using namespace std;
class employee
{
    int id;
    static int count;
    public:
    void setdata(void){
        cout<<"enter the id"<<endl;
        cin>>id;
        count++;

    }
    void getdata(void){
        cout<<"this is the emplyee id "<<id<<endl<<" this is employe num "<<count<<endl;
    }
    static void getcount(void){
        cout<<"the count num is "<<count;
    }
    

};
int employee::count;

int main(){
    employee ravi , rohan;
    ravi.setdata();
     ravi.getdata();
     ravi.getcount();
    
        
    return 0;
}