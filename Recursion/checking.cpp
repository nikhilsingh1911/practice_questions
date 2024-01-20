#include<iostream>
using namespace std;

void print(int n){
    if(n==0){
        return ;
    }
    print(n-1);

    cout<<n<<endl;
}

int main(){
    int numbers[5];
    int *p;
    p= numbers;
    *p=10;
    p++;
    *p=20;
    p= &numbers[2];
     *p=30;
    p= numbers+3;
    *p=40;
    p= numbers;
    *(p+4)=50;
    for(int i=0;i<5;i++)
        cout<<numbers[i]<<",";
}