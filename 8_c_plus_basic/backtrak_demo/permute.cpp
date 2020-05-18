#include<iostream>
#include<string.h>
#include<map>
#include<vector>
using namespace std;

bool checkIsAt(vector<int> current,int data){
    for(int i=0;i<current.size();i++){
        if(current[i]==data)
            return true;
    }
    return false;
}

/**
 * 采用回溯法求全排列
 * @param data 可选字段
 * @param size 可选路径的长度
 * @param current 存储当前路径
 * @param data 结果集合
 **/
void backtrack(vector<int> data,int size,vector<int> current,vector<vector<int>>& res){
    // 若已经达到目标长度
    if(current.size()==size){
        res.push_back(current);
        return;
    }

    for(int i=0;i<data.size();i++){
        if(!checkIsAt(current,data[i])){
            current.push_back(data[i]);
            backtrack(data,size,current,res);
            current.pop_back();
        }
    }

}

int main(){
    vector<vector<int>> res;
    vector<int> data = {1,2,3,4};
    backtrack(data,3,{},res);
    for(int i=0;i<res.size();i++){
        vector<int> row = res[i];
        for(int j=0;j<row.size();j++)
            cout<<row[j]<<" ";
        cout<<endl;
    }
    return 0;
}