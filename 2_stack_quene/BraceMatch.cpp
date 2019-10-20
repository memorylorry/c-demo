/**
 * 括号匹配：利用栈来判断表达式中的括号是否匹配正确！
 **/

#include <malloc.h>
#include <unistd.h>
#include "LiStack.h"

bool verifyExpression(char *expr){
    LiStack s;
    InitStack(&s);//初始化栈
    void* t;//接受站定字符
    char* c;

    while (*expr){
        if(*expr == '{' || *expr == '[' || *expr == '('){
            t = expr;
            Push(&s,t);
        }else if(*expr == '}' || *expr == ']' || *expr == ')'){
            GetTop(s,t);
            c = (char*)t;
            if( (*expr == '}' && *c == '{') ||
                (*expr == ']' && *c == '[') || 
                (*expr == ')' && *c == '(') ) Pop(&s,&t);
            else return false;
        }
        expr++;
    }

    return IsEmpty(s);
}

int main(){
    // 从用户输入获取表达式
    char *expr = (char*)malloc(sizeof(char)*100);
    scanf("%s",expr);
    bool flag = verifyExpression(expr);
    printf("%s : %d",expr,flag);
    return 0;
}