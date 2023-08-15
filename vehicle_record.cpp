#include<iostream>
using namespace std;
int main(){
    int enter;
    int bike=0,car=0,rickshaw=0;
    while(true){
        cout<<"Press 1 for adding bike"<<endl;
        cout<<"Press 2 for adding car"<<endl;
        cout<<"Press 3 for adding rickshaw"<<endl;
        cout<<"Press 4 to show the record"<<endl;
        cout<<"Press 5 to delete the record"<<endl;
        cout<<"Press 6 to exit"<<endl;
        cout<<"Enter the Number"<<endl;
        cin>>enter;
        if(enter==1){
            bike++;
            cout<<"Bike is added"<<endl;
        }
        else if(enter == 2){
            car++;
            cout<<"Car is added"<<endl;
        }
        else if(enter == 3){
            rickshaw++;
            cout<<"Rickshaw is added"<<endl;
        }
        else if (enter == 4){
            cout<<"Bike : "<<bike<<endl;
            cout<<"Car : "<<car<<endl;
            cout<<"Rickshaw : "<<rickshaw<<endl;
        }
        else if (enter == 5){
            bike=0;
            car=0;
            rickshaw=0;
            cout<<"All record has been deleted"<<endl;
        }
        else if (enter == 6 ){
            exit(0);
        }
        else{
            cout<<"Invalid"<<endl;
        }
    }
return 0;
}