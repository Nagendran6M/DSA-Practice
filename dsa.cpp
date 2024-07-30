1.#include<iostream>
using std::endl;
using std::cin;
using std::cout;
int main(){
    int num=5;
    int num1=3;
    int star;
    for(int i=0;i<=num;i++){
        (num1<i)?star=i+1:star=i;
        for(int j=0;j<star;j++){

            cout<<"*";
        }
        cout<<endl;
    }

}
2.#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main(){
    int num=5;
    for(int i=0;i<=num;i++){
            //space
        for(int j=0;j<num-i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
3.#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main(){
    int number =5;
    for(int i=1;i<=number;i++){
        for(int j=0;j<number-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
4.#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main(){
    int number =5;
    for(int i=0;i<=number;i++){
            //space
        for(int j=0;j<i;j++){
            cout<<" " ;
        }
        for(int j=0;j<number-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
5.#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main(){
    int number=5;
    for(int i=1;i<=number;i++){
            //space
    for(int j=0;j<number-i;j++){
        cout<<" ";
    }
    //star
    for(int j=0;j<i;j++){
        cout<<"*"<<" ";
    }
    //Space
     for(int j=0;j<number-i;j++){
        cout<<" ";
    }
    cout<<endl;
    }

}
