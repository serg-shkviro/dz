#include <iostream> 
#include <numeric> 

using namespace std;

void swap(float& a, float& b, float& c) 
{ 
float t = a; 
a = c; 
c = b; 
b = t; 
} 

float min (float a, float b, float c) 
{ 
return (a < b) ? (a < c ? a : c) : (b < c ? b : c); 
} 
float max (float a, float b, float c) 
{ 
return (a > b) ? (a > c ? a : c) : (b > c ? b : c); 
} 
float med (float a, float b, float c) 
{ 
return a + b + c - min(a, b, c) - max(a, b, c); 
} 
float avg(float a, float b, float c) 
{ 
return (a + b + c)/3; 
} 

int main() { 
float a, b, c; 
cin >> a;
cin >> b ;
cin >> c; 
cout << "MAX : " << max(a, b, c) << "\n"; 
cout << "MIN" << min(a, b, c) << "\n"; 
cout << "MED:" << med(a,b,c) << "\n"; 
cout << "AVG: " << avg(a, b, c) << "\n"; 
cout <<"original recording: " << a <<b << c << "\n"; 
swap (a, b, c); 
cout « "swap : " «a « b «c« "\n"; 
return 0; 
}