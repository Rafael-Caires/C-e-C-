#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;
void Imprimir(map<string,int>&mp){
    map<string,int>::iterator it;
    for(it=mp.begin(); it != mp.end(); it++){
    }
    map<string,int>::iterator contador = std::max_element(mp.begin(),mp.end(),[] 
    (const pair<string,int>& a, const pair<string,int>& b)->bool{ return a.second < b.second; } );
    cout << contador->first<< endl;
}
int main(){
    string s;
    stringstream ss;
    getline(cin,s);
    ss << s;
    string palavra;
    map<string, int> ocorrencia;
    while (ss >> palavra){
        ocorrencia[palavra]++;
    }
    Imprimir(ocorrencia);
    return 0;

}