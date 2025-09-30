#include <iostream> using namespace std; 
 
class shape { protected: 
    float x, y; public: 
    void getdata() {  
     cout << "Enter the 1st element: ";    
     cin >> x;       
     cout << "Enter the 2nd element: "; 
     cin >> y; 
    } 
    virtual void display() = 0;   
}; 
 
class triangle : public shape
{ public: 
    void display() override {    
     
    float area = 0.5 * x * y;  
      cout << "Area of triangle: " << area << endl;     } 
}; 
 
class Rect : public shape { 
public: 
    void display() override {   
      float area = x * y;      
      cout << "Area of Rectangle: " << area << endl; 
    } 
}; 
 
int main() {  
  shape* st;   
  triangle t; 
  st = &t;   
  st->getdata();  
  st->display(); 
 
    shape* rect;   
  Rect p;   
  rect = &p;    
  rect->getdata();  
  rect->display(); 
 
    return 0; 
} 
