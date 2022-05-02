#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;


void imprimir (map<string,int> &v){
    map<string,int>::iterator it;
    for (it=v.begin(); it != v.end();it++){
        cout << *it;
    }
}   

//while (palavra << s) {

int main(){ 
    string s;
    stringstream ss;
    getline(cin,s);
    ss << s;
    string palavra;
    map<string,int>contador;
    Imprimir(s);


    }