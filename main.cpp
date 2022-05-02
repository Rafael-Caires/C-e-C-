#include <iostream>
#include <map>
#include <string>

using namespace std;
void Imprimir(map<int,int>&mp){
    map<int,int>::iterator it;
    for(it=mp.begin(); it != mp.end(); it++){
        cout << (*it).first << ":" << (*it).second<<endl;
    }
}
int main(){
    int a[10] = {1,1,1,2,2,2,4,4,5,6};
    map <int,int> freq;
    for(int i=0; i<10; i++){
        freq[a[i]]++;
    }
    Imprimir(freq);

    return 0;
}