#include<iostream>
using namespace std;

int fibonacci (int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int N){
    if(N <= 1){
        return N;    
    }else{
        return fibonacci(N-1) + fibonacci(N-2);   
    }
}
    