#include "splib.h"
/*
实现加号，乘号，括号三项规则优先度判断
*/
const char number = '8';
const char print = ';';
const char quit = 'q';
const char result = '=';

class Token {
public:
    char kind;
    double value;
    Token(char ch)
        :kind(ch), value(0) {}      //value没写就是0
    Token(char ch, double val)
        :kind(ch), value(val) {}
};

class Token_stream {
public:
    Token_stream();         //初始化,cin
    Token get();            //获取token
    void putback(Token t);  //放回token

private:
    bool full;      //表示寄存器空闲
    Token buffer;   //寄存器
};

Token_stream::Token_stream()
    :full(false), buffer(0) {}

Token Token_stream::get()
{
    if (full)
    {
        full = false;
        return buffer;
    }

    char ch;
    cin >> ch;

    switch (ch)
    {
        case print: 
        case quit: 
        case '(': 
        case ')':
        case '+': 
        case '-': 
        case '*': 
        case '/':
        case '%':
            return Token(ch);
        case '.':
        case '0': case '1': case '2': case '3':
        case '4': case '5': case '6': case '7':
        case '8': case '9':
        {
            cin.putback(ch);    //数字回滚进输入
            double val;
            cin >> val;
            return Token(number, val);
        }
        default:
            throw "Bad token";
    }
}

void Token_stream::putback(Token t)
{
    if (full) throw "putback() into a full buffer";
    buffer = t;     //放入寄存器
    full = true;    //寄存器满
}

Token_stream ts;
double expression();

double primary()        //括号
{
    Token t = ts.get();
    switch (t.kind)
    {
        case '(':
        {
            double d = expression();
            t = ts.get();
            if (t.kind != ')') throw "')' expected";
            return d;
        }
        case number:       
            return t.value;
        case '-':
            return -primary();
        case '+':
            return primary();
        default:
            throw "primary expected";
    }
}

double term()       //乘号
{
    double left = primary();
    Token t = ts.get();
    while (true)
    {
        switch (t.kind)
        {
            case '*':
                left *= primary();
                t = ts.get();
                break;
            case '/':
            {
                double d = primary();
                if (d == 0) throw "divide by zero";
                left /= d;
                t = ts.get();
                break;
            }
            case '%':
            {
                double d = primary();
                if (int(left) != left) throw "left not int";
                if (int(d) != d) throw "right not int";
                if (d == 0) throw "%: divide by zero";
                left = int(left)%int(d);
                t = ts.get();
                break;
            }
            default:
                ts.putback(t);      //回滚
                return left;
        }
    }
}

double expression()     //加号
{
    double left = term();
    Token t = ts.get();
    while (true)
    {
        switch(t.kind)
        {
            case '+':
                left += term();
                t = ts.get();
                break;
            case '-':
                left -= term();
                t = ts.get();
                break;
            default:
                ts.putback(t);
                return left;
        }
    }
}

void calculate() {
    while (cin) 
        {
            Token t = ts.get();
            while (t.kind == print) t = ts.get();
            if (t.kind == quit) return 0;
            ts.putback(t);
            cout << result << expression() << endl;
        }
}


int main() {
    try
    {
        calculate();
        return 0;
    }
    catch(const char* ch) 
    {
        cout << "error: " << ch << endl;
    }
}