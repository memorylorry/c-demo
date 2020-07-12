#include<iostream>
#include<string.h>
using namespace std;

/**
 * 读到有换行为止
 **/
void readLine(){
    string word;
    while(cin>>word){
        cout<<word;
    }
}

/**
 * 直接读一行
 **/
void readALine(){
    string word;
    getline(cin,word);

    if(word.empty()) cout<<"empty"<<endl;
    else cout<<"not empty"<<endl;

    cout<<"str size is "<<word.size()<<endl;

    cout<<"str[i] is "<<word[0]<<endl;

    cout<<word;
}

/**
 * 单个字符地遍历字符串
 **/
void view(){
    string word("Hello World");
    for(char w:word){
        cout<<w<<endl;
    }
}

/**
 * 
 **/
void categorize(){
    string word;
    string digists(100,'\0');
    string letters(100,'\0');
    string controls(100,'\0');
    int d = 0, l = 0, cnt = 0;

    getline(cin,word);
    for(char c:word){
        if(isdigit(c))
            digists[d++] = c;
        else if(isalpha(c))
            letters[l++] = c;
        else if(iscntrl(c))
            controls[cnt++] = c;
    }

    cout<<"digists are "<<digists<<endl;
    cout<<"letters are "<<letters<<endl;
    cout<<"controls are "<<controls<<endl;
}

int main(){
    string a = "test";
    categorize();
    return 0;
}