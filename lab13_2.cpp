#include<iostream>
using namespace std;

int gcd(int,int);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int A,int B){
    if(A%B == 0){
        return B;    
    }else{
        return gcd(B,A%B);    
    }  
}
