#include<iostream>
#include<string>

// 结论： 函数定义里面有const的，必须传const
// 如果定义里面没有const的，也可以传const给它

using namespace std;

void foo(const string &str){
	cout << "foo\n";
}

void foo1(string &str){
	cout << "foo1\n";
}

int main(){
	const string a("sb");
	foo("heheh");
	foo(a);
	//foo1(a);
	//foo1("heheh");
	return 0;
}