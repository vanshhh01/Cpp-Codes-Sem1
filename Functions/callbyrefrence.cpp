#include <iostream> 
using namespace std; 

void swap(int& x, int& y) 
{ 
 int t = x; 
 x = y; 
 y = t; 

} 

int main() 
{ 
 int x = 1, y = 2; 
 cout << "Before Swapping: "; 
 cout << "x: " << x << ", y: " << y << endl; 
 swap(x, y); 
 cout << "After Swapping: " << x 
 << ", y: " << y << endl; 
 return 0; 
} 