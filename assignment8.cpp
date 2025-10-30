#include <iostream>
using namespace std; 
 
template<class T> 
void sortArray(T a[], int n) {    
  int i, j, minIndex; 
  for(i = 0; i < n - 1; i++) { 
    minIndex = i; 
    for(j = i + 1; j < n; j++) {  
      if(a[j] < a[minIndex]) {         
        minIndex = j; 
            } 
        } 
        // Swap smallest element with a[i]         if(minIndex != i) {             T temp = a[i];             a[i] = a[minIndex];             a[minIndex] = temp; 
        } 
    } 
} 
 
template<class T> 
void display(T a[], int n) {  
  for(int i = 0; i < n; i++)       
    cout << a[i] << " ";  
  cout << endl; 
} 
 
int main() {   
  int choice, n;   
  cout << "Choose array type:\n1. Integer\n2. Float\nEnter choice: ";    
  cin >> choice; 
 
    cout << "Enter number of elements: ";   
  cin >> n; 
 
    if(choice == 1) { 
      
      int arr[100];     
      cout << "Enter " << n << " integers:\n";  
      for(int i = 0; i < n; i++)   
        cin >> arr[i]; 
 
        sortArray(arr, n); 
 
        cout << "Sorted array: ";   
      display(arr, n); 
    } 
    else if(choice == 2) { 
        float arr[100];     
      cout << "Enter " << n << " floats:\n"; 
      for(int i = 0; i < n; i++)         
        cin >> arr[i];         sortArray(arr, n);   
      cout << "Sorted array: ";        
      display(arr, n); 
    }     else {      
      cout << "Invalid choice!" << endl; 
    } 
    return 0; 
} 
 
