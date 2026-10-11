/*#include<iostream>
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
#include<iostream>
using namespace std;
int main(void)
{
	cout << "请输入两个正整数进行加和运算：" << endl;
	cout << "输入数字后请按回车以继续" << endl;
	int x, y, z;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	z = x + y;
	cout << z << endl;
	system("pause");//病毒木马经常调用system()函数调取cmd,程序被阻止原因是杀毒软件监测，可换用cin.get();
	return 0;
}