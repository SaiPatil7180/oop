#include <iostream>
#include <string.h>
using namespace std ;
class empo_inf
{
 	string name ;
  	int empid;
 	string dep;
 	string join ;
 	string  add  ;
  	int telmob ;
    static int count ;
public:
	/*void  empo_inf::accept() {
 	cout << " Enter the name:  ";
 	cin>> name ;
 	cout << " Enter employee id : \n";
 	cin>>  emp_id ;
 	cout << " enter your department : \n";
 	cin>>  dep;
 	cout << " enter the join date : \n";
 	cin>> join ;
 	cout << " enter the address  : \n";
 	cin>> add ;
 	cout << " enter the telephone number   : \n";
      	cin>> tel_mob  ;
}*/


   	empo_inf (string n ,long int ide ,string de , string joi ,string addres ,long int moblie ){
   	    	count++;
     	cout<< "PARAMETRIES CONSTRUTOR \n" ;
      	 
 	name =n;
 	empid= ide;
 	dep=de;
 	join=joi;
 	add  =addres;
 	telmob=moblie;
 }  // default construtar   
	empo_inf() {
     	cout<< "default CONSTRUTOR \n" ;
    	name= " sai ";
    	count++;
   	empid =  1234;
      	dep ="cs";
      	join="5454";
      	add="fghgfyg";
      	telmob= 1234 ;
       	}
	 
	 
   	empo_inf (empo_inf & emp ){
      	 
   	cout<<"copy constructor\n";
   		count++;
    	name=emp.name;
    	empid= emp.empid;
    	dep=emp.dep;
    	join=emp.join;
    	add=emp.add;
    	telmob=emp.telmob;
       	}
          ~	empo_inf (){
              count--;
              cout<< "\nyou are in destructor . remaing object :"<< count << endl ;
          }

    	void display();
         


   	 
	};
	
	int empo_inf::count=0 ;
    
      	 
	void  empo_inf::display() {
     	cout<< "   name:"<<name<<"\n" ;
     	cout<< "   employee id :"<< empid<< "\n" ;
     	cout<< "   department :"<<dep << "\n";
     	cout<< "   join date :"<< join  << "\n";
     	cout<< "   address:"<< add  << "\n";
     	cout<< "  telephone number  :"<<telmob  << "\n";
	}
    
	int main () {
    	string n ;
    	long int id ;
    	string de ;
    	string joi;
    	string addres;
    	long int telmoblie;
   	 
	cout << " Enter the name:  ";
 	cin>> n;
 	cout << " Enter employee id : \n";
 	cin>> id ;
 	cout << " enter your department : \n";
 	cin>>  de;
 	cout << " enter the join date : \n";
 	cin>> joi ;
 	cout << " enter the address  : \n";
 	cin>> addres ;
 	cout << " enter the telephone number   : \n";
      	cin>> telmoblie  ;
 	empo_inf obj1 ;
 	obj1.display();
	 

 	empo_inf obj2 (n ,id,de,joi, addres,telmoblie);
 	obj2.display();
	 
 	empo_inf emp(obj2) ;
 	emp.display();  

    empo_inf * e1= new  empo_inf("sai",  2234  ,"werr","sai","fdg" ,123) ;
    e1-> display();
    delete e1 ;
   	 
	return 0;
}
