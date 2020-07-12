#include<iostream>
#include<vector>
using namespace std;

class Bag{
    private:
        vector<double> goods;
        double weights;
    public:
        void push(double good){
            goods.push_back(good);
            weights += good;
        }
        double testAdd(double good){
            return weights + good;
        }
        void pop(){
            double b = goods.back();
            goods.pop_back();
            weights -= b;
        }
        void print(){
            for(int i=0;i<goods.size();i++){
                cout<<goods[i]<<" ";
            }
            cout<<endl;
        }
        bool checkisAt(double good){
            for(int i=0;i<goods.size();i++){
                if(goods[i]==good)
                    return true;
            }
            return false;
        }
        double getW(){
            return weights;
        }
};

void backtrack(vector<double> goods,double W,Bag current,Bag& res){
    for(int i=0;i<goods.size();i++){
        if(!current.checkisAt(goods[i])){
            if(current.testAdd(goods[i])<=W){
                current.push(goods[i]);
                backtrack(goods,W,current,res);
                current.pop();
            }else{
                if(current.getW()>res.getW()) res = current;
            }
        }
    }
}

int main(){
    double W = 10; // 背包可容纳重量的大小
    vector<double> goods{3,4,6,8}; // 物品的重量

    Bag current,res;
    backtrack(goods,W,current,res);
    res.print();
    return 0;
}