#include<iostream>
#include<string>
using namespace std;
class table {
private:
    double width;
    double length;
    double height;
    string shape;
public:
    table(double w, double l, double h, string s) :
        width(w), length(l), height(h), shape(s) {}
    double getarea() const{
        return width * length;
    }
    string getshape() const{
        return shape;
    }
    void getlwh() const{
        cout << "width :" << width << endl;
        cout << "length :" << length << endl;
        cout << "height :" << height << endl;
    }
 
};
int main(){
    table table1(1.5, 2.0, 1.5, "¾ØÐÎ");
    table1.getlwh();
return 0;
}