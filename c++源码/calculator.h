#pragma once
#include<stack>
#include<string>

using namespace std;

class Calculator{
  public:
  Calculator();
  void SetExpression(string expr);
  int eval();
  int get_num(string::iterator& p);
  int fac(int n);
  char front(string::iterator p);
  int cmp(char a ,char b);
  bool isValid();
  bool check_bracket_ok();
  private:
  string expression;

};
