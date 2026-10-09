#include<iostream>
using namespace std;
int main(void)
{
	cout << "计算函数y=x^3+4中的y值" << endl;
	cout << "请输入x的值：x=";
	int x,y;
	cin >> x;
	y = x * x * x + 4;
    cout << y << endl;
	cin.get();

	return 0;
}
/**************************************
可以使用以下代码来增大可输出最大数值：
第七行起：int x;
          long long y;
第九行：y=(long long)x*x*x+4;
***************************************/
