#include<iostream>
using namespace std;
class Rocket{
    public :
        int x , y , distance;
        char position;
        Rocket(){
            x=0;
            y=0;
        }
        void change_position(int d , char p){
            distance = d;
            position = p;
            if(p=='R'){
                x = x+distance;
            }
            else if(p=='L'){
                x = x-distance;
            }
            else if(p=='U'){
                y = y+distance;
            }
            else if (p=='D'){
                y = y-distance;
            }
        }
        void get_position(){
            cout<<"Position of x coordinate is "<<x<<endl;
            cout<<"Position of y coordinate is "<<y;
        }
};
int main(){
    int d;
    char p;
    Rocket r;
    cout<<"Enter distance of rocket : ";
    cin>>d;
    cout<<"Enter position of rocket(U/D/L/R): ";
    cin>>p;
    r.change_position(d,p);
    r.get_position();
}