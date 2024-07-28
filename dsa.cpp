#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main(){
    int num=5;
    for(int i=0;i<num;i++){
        for(char A='E'-i;A<='E';A++){
            cout<<A;
        }
        cout<<endl;
    }
}