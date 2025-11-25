#include <iostream>
using namespace std;
long long factorial(int n){
    if (n==1)
     return 1;
    else if(n==0)
     return 1;
    else
     return factorial(n-1)*n;
}
long long sum(int n){
    if (n==1)
     return 1;
    else if(n==0)
     return 0;
    else
     return sum(n-1)+n;
}
int main() {
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    cout<<sum(n)<<endl;
    return 0;
}
