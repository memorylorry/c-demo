#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
class Solution {
public:
    string toTime(vector<int> current){
        int hour = 0;
        int min = 0;
        int tmp;
        for(int i=0;i<current.size();i++){
            tmp = current[i];
            if(tmp>0){
                min += tmp;
            }else{
                hour += abs(tmp);
            }
        }

        // 错误时间避免, 若时间错误,返回空串
        if(hour>11||min>59) return "";

        string str = to_string(hour)+":";
        if(min<10) str+="0"+to_string(min);
        else str += to_string(min);
        return str;
    }
    bool checkIsExist(vector<string>& res,string val){
        for(string s:res){
            if(s==val) return true;
        }
        return false;
    }

    void backtrack(vector<int> options,vector<int> flags,vector<int> current,int size,vector<string>& res){
        // 若已满足条件
        if(current.size()==size){
            string val = toTime(current);
            if(val.size()>0 && !checkIsExist(res,val))
                res.push_back(val);
            return;
        }

        // 继续添加
        for(int i=0;i<options.size();i++){
            if(!flags[i]){
                current.push_back(options[i]);
                flags[i] = true;
                backtrack(options,flags,current,size,res);
                flags[i] = false;
                current.pop_back();
            }
        }
    }
    vector<string> readBinaryWatch(int num) {
        vector<int> options{1,2,4,8,16,32,-1,-2,-4,-8};
        vector<int> flags(10,false);
        vector<string> res;
        backtrack(options,flags,{},num,res);
        return res;
    }
};

int main(){
    Solution s;
    vector<string>  res = s.readBinaryWatch(7);
    return 0;
}