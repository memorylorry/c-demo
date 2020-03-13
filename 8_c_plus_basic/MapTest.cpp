#include<iostream>
#include<map>
#include<string.h>
using namespace std;

int main(){
    map<string,int> m;
    m["age"] = 1;
    m.insert(map<string,int>::value_type("amount",3));

    // m.erase("age");
    map<string,int>::iterator it = m.find("age");
    if(it== m.end())
        m.erase(it);
    cout<<m["age"]<<m.max_size();
    
    return 0;
}