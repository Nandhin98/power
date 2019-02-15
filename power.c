#include<bits/stdc++.h> 
  
bool isPowerOfTwo(int n) 
{ 
   return (ceil(log2(n)) == floor(log2(n))); 
} 
  
int main() 
{ 
    isPowerOfTwo(31)? cout<<"Yes"<<endl: cout<<"No"<<endl; 
    isPowerOfTwo(64)? cout<<"Yes"<<endl: cout<<"No"<<endl; 
  
    return 0; 
} 
  

