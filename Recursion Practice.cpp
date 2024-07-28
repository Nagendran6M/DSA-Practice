#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string ;
void PrintName(int num,string Name){
    if(num>0){
        //Print N Times Names
        PrintName(num-1,Name);
        cout<<Name<<endl;
    }
}
int main(){
    PrintName(5,"User Name");
}