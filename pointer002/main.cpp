#include <iostream>

using namespace std;

int call_by_value(int n){
    cout<<"address of n in call_by_function : "<<&n<<endl;
    n *= n;
    return n;
}

void call_by_ref_pointer(int* n){
    cout<<"address of n in call_by_ref: "<<n<<endl;
    *n *= *n;
}
void call_by_ref_add(int& n){
    cout<<"address of n in call_by_ref: "<<&n<<endl;
    n *= n;
}


int main(){
    int n=8;
    cout<<"address of n in main(): "<<&n<<endl;
    call_by_ref_add(n);
    cout<<"ans: "<<n<<endl;
    cout<<"value of n: "<<n<<endl; 
    return 0;
}
