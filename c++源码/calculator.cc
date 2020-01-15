#include"calculator.h"
#include<iostream>
#include<string>
#include<cmath>
#include<map>

using namespace std;



Calculator::Calculator(){
  //
}

void Calculator::SetExpression(string expr){
    cout<<"SetExpr(): the expr is "<<expr<<endl;
    expression = expr+"#";
}

int Calculator::get_num(string::iterator& p){
  int sum=0;
  int flag = 0;
  if(*p == '-'){
    flag = 1;
    p++;
  }
  while(isdigit(*p)){
    sum = sum*10 + (*p) -'0';
    p++;
  }
  if(*p == '(') throw int(1);
  if(*p == '!'){
      if(flag)throw int(1);
      if(*(p+1) == '(') throw int(1);
      sum = fac(sum);
      p++;
  }
  return flag?-sum:sum;
}

int Calculator::eval(){
  stack<char> stack_operator;
  stack<int> stack_operand;
  if(expression == "#")return 0;//空串情况 返回0作为求值结果
  if(!isValid()) {
      cout<<"not valid \n";
      throw int(1);
  }
  auto p = expression.begin();
  stack_operator.push('#');
  while(!stack_operator.empty()){

    if(isdigit(*p) || *p == 's' || *p == 'c'){
      stack_operand.push(get_num(p));     
    }
    else if( *p == ' ' ){
      p++;
      continue;
    }
    else{
      if(*p == '-'){//单目负号
        if(!isdigit(*(p+1)) && *(p+1) != '(') throw int(1);  //形如  -*3 错误
        if( p==expression.begin() || (!isdigit(front(p)) && front(p) != '!' && front(p) != ')' )){//是单目
          stack_operand.push(get_num(p));          
          continue;
        }
      }
      int flag = cmp(stack_operator.top(),*p);
      if(flag == -1){// 操作符入栈
        stack_operator.push(*p);
        p++;
      }
      else if(flag == 0){//括号或#出栈
        stack_operator.pop();
        p++;
      }
      else{
        char op = stack_operator.top();
        stack_operator.pop();
        int a=stack_operand.top();
        stack_operand.pop();
        int b = stack_operand.top();
        stack_operand.pop();

        switch(op){
          case '+':{
            stack_operand.push(a+b);            
            break;
          }
          case '-':{//双目
            stack_operand.push(b-a);
            break;
          }
          case '*':{
            stack_operand.push(a*b);
            break;
          }
          case '/':{
            if(a==0) {
                cout<<"/0 error"<<endl;
                throw int(1);
            }
            stack_operand.push(b/a);  //取整除法
            break;
          }
          case '^':{
            stack_operand.push(pow(b,a));
            break;
          }
          case '%':{
            stack_operand.push(b%a);
            break;
          }
        }
      }
    }
  }
  cout<<"eval() : the expr is "<<expression<<" ans= "<<stack_operand.top()<<endl;//log
  return stack_operand.top();
}

int Calculator::fac(int n){
  if (n==0){
    return 1;
  }
  else return n*fac(n-1);
}

char Calculator::front(string::iterator p){
  while(p!=expression.begin()){
    p--;
    if(*p!=' '){
      return *p;
    }
  }
  return '0';
}


int Calculator::cmp(char a  ,char b){
  const char pri[9][9] = { //运算符优先等级 [栈顶] [栈前]
  /* |-------------- 栈前运算符 --------------| */
  /*          +    -    *    /    ^    %    (    )    # */
  /* -- + */ '>', '>', '<', '<', '<', '<', '<', '>', '>',
  /* |  - */ '>', '>', '<', '<', '<', '<', '<', '>', '>',
  /* 栈 * */ '>', '>', '>', '>', '<', '<', '<', '>', '>',
  /* 顶 / */ '>', '>', '>', '>', '<', '<', '<', '>', '>',
  /* 运 ^ */ '>', '>', '>', '>', '>', '>', '<', '>', '>',
  /* 算 % */ '>', '>', '>', '>', '<', '>', '<', '>', '>',
  /* 符 ( */ '<', '<', '<', '<', '<', '<', '<', '=', ' ',
  /* |  ) */ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
  /* -- # */ '<', '<', '<', '<', '<', '<', '<', ' ', '='
  };
  map<char,int> dict;
  dict['+'] = 0;
  dict['-'] = 1;
  dict['*'] = 2;
  dict['/'] = 3;
  dict['^'] = 4;
  dict['%'] = 5;
  dict['('] = 6;
  dict[')'] = 7;
  dict['#'] = 8;
  if(pri[dict[a]][dict[b]] == '>'){
    return 1;
  }
  else if (pri[dict[a]][dict[b]] == '<'){
    return -1;
  }
  else return 0;

}

bool Calculator::isValid(){
    cout<<"isValid(): the expr is "<<expression;
    //简单纠错
    if(!check_bracket_ok()){
      cout<<" error"<<endl;
      return 0;
    }
    int cnt_num = 0;
    int cnt_op = 0;
    auto p = expression.begin();
    while(p!=expression.end()){
        if(isdigit(*p)){
            try {
                get_num(p);
            } catch (int) {
                cout<<" error"<<endl;
                return 0;
            }
            cnt_num++;
        }
        else{
            if(*p == '-' && (p==expression.begin() || (!isdigit(front(p)) && front(p) != '!' && front(p) != ')'))){
                if(!isdigit(*(p+1)) && *(p+1) != '('){
                    cout<<" error"<<endl;
                    return 0;  //形如  -*3 错误
                }
                try{
                    get_num(p);
                }
                catch (int){
                    cout<<" error"<<endl;
                    return 0;
                }
                cnt_num++;
            }
            if(*p != '(' && *p != ')' && *p != '#'){
                cnt_op++;
            }
            p++;
        }
        if(cnt_op == cnt_num+1){
            cout<<" error"<<endl;
            return 0;
        }
    }
    if(cnt_op != cnt_num -1){
        cout<<" error"<<endl;
        return 0;
    }
    cout<<" Ok"<<endl;
    return 1;
}

bool Calculator::check_bracket_ok(){
    int sum = 0;
    auto it = expression.begin();
    while(it != expression.end()){
        if(*it == '(') sum++;
        else if(*it == ')') sum--;
        if (sum<0) return 0;
        it++;
    }
    if(sum != 0) return 0;
    return 1;
}
