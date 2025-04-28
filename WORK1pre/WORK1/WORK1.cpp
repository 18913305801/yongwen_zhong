#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class shape{
public:
    virtual double getarea() const = 0;
    virtual string getshape() const = 0;
    virtual ~shape() {};
};
class rectangle : public shape {
private:
    double width;
    double length;
public:
    rectangle(double w, double l) :width(w), length(l) {}
    double getarea() const override {
        return width * length;
    }
    string getshape() const override {
        return "rectangle";
    }
    double getwidth() const {
        return width;
    }
    double getlehgth() const {
        return length;
    }
};
class circle : public shape {
private:
    double radio;
public:
    circle(double r) :radio(r) {}
    double getarea() const override {
        return 3.14 * radio * radio;
    }
    string getshape() const override {
        return "circle";
    }
    double getradio() const {
        return radio;
    }
};
class triangle : public shape {
private:
    double la,lb,lc;
public:
    triangle(double a,double b,double c) :la(a),lb(b),lc(c) {}
    double getarea() const override {
        double s = (la + lb + lc) / 2;
        return sqrt(s * (s - la) * (s - lb) * (s - lc));
    }
    string getshape() const override {
        return "triangle";
    }
    double getla() const {
        return la;
    }
    double getlb() const {
        return lb;
    }
    double getlc() const {
        return lc;
    }
};
class table :public shape {
private:
    double height;
    shape* shap;
public:
    table(shape* s, double h) :shap(s), height(h) {};
    double getarea() {
        return shap->getarea();
    }
    string getshape() {
        return shap->getshape();
    }
    double getheight() const{
        return height;
    }
    ~table() {
        delete shap;
    }
};