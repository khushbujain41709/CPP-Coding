#include<iostream>
#include<vector>
using namespace std;
class flipkart{
    public:
    float price;
    string item;
    int rating;
    int review;
    static string tag;  // static member - same for all objects // tag is a variable of class that is , it doesnot belong to any object.
    static int ID;
    static void setId(){
        // tag+item; gives error as only static variable can access static function
        ID++;
    }
};
string flipkart::tag = "To - Sell";
int flipkart::ID = 764334;  
int main(){
    vector<flipkart> v;
    for(int i = 0;i<2;i++){
        flipkart *products = new flipkart;
        float product_price;
        cout<<"Enter product price : ";
        cin>> product_price;
        products->price = product_price;
        string product_name;
        cout<<"Enter product name : ";
        cin>> product_name;
        products->item = product_name;
        int product_rating;
        cout<<"Enter product ratings : ";
        cin>> product_rating;
        products->rating = product_rating;
        int product_review;
        cout<<"Enter product review stars : ";
        cin>> product_review;
        products->review = product_review;
        products->tag = flipkart::tag;
        products->ID = flipkart::ID;
        v.push_back(*products);
        cout<<endl;
    }
    cout<<"Name of Products ->"<<endl;
    for(int i = 0;i<v.size();i++){
        cout<<v[i].item<<",";
        cout<<v[i].tag<<",";
        v[i].setId();
        cout<<v[i].ID<<" ";
        cout<<endl; 
    }
    return 0;
}