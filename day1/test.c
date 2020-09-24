#include<stdio.h>
#include<windows.h>

//int global = 100;
//double weight = 160.5;
//
//void fun()
//{
//
//	printf("%f\n", weight);
//	//printf("%f\n", high);
//
//}
#pragma warning(disable:4996)

//#define AGE 80//宏-----见名知意/提升代码的可维护性，一个一改，其他的全部都能改动（为什么要有宏）

//int global = 100;
//void fun()
//{
//	int x = 10;
//}

//enum color{
//	YELLOW,//常量
//	BLACK,//常量
//	RED,//常量
//	BLUE,//常量
//};
int main()
{
	//char*str = "abc";
	//char str1[] = "xyz";
	//printf("%s\n",str);
	//printf("%s\n",str1);//C语言是没有字符出类型的，所以需要借助char*(指针)或者char[]（数组）来进行字符串的使用。
	//3;
	//'x';//字符
	//"xyz";//字符串
	//"x"//字符串里面可以有一个字符
	//int x = AGE;//赋值只能在宏定义后面
	#define AGE 60//宏定义一般也在开始定义。
	//int global = 100;//	全局变量只能在开头定义
	//宏可以在任何地方定义
	//int x = AGE;
	//const int x = 100;   //初始化,x为常变量，不经常变化的量，不可被直接 修改。
	//int const x = 100;
	//x = 200;       //赋值
//	enum color c = YELLOW;//枚举常量。
	//AGE = 10; // 宏常量，不能被修改
	/*printf("%d\n",AGE);
	int x = AGE;
	printf("%d\n",x);*/
	//10;
	//3.14;
	//'c';
	//"hello world";//字面常量
	//int x = 10;
	//int y = 10 +20;
	/*float f = 0.0f;
	scanf("%f", &f);
	printf("%f\n",f);*/
	/*printf("before!\n");
	fun();
	printf("after!\n");*/
	/*int x = 0;
	int y = 0;
	printf("请输入对应的数据：");
	scanf("%d %d",&x,&y);
	int z = x + y;
	printf("result:%d\n",z);*/
	//scanf("%d",&y);
	/*int x = 200;全局变量and局部变量
	int global = 300;
	printf("%d,%d\n",x,global);*/
	/*double high = 190.8;
	printf("%f\n", weight);
	printf("%f\n", high);
	fun();
	*/
	/*double m1 = 10.5;
	double m2 = 1.5;
	printf("%f\n", m1 + m2);*/

	///*double pi = 3.14;
	//double r = 2;
	//printf("面积：%f\n", pi*r*r);

	//char c = 'A';
	//for (; c <= 'Z'; c++){

	//	printf("%c ", c);

	//}
	//printf("\n");

	//printf("hello 比特!\n");
	//printf("int:   %d\n", sizeof(int));
	//printf("float: %d\n", sizeof(float));
	//printf("double:%d\n", sizeof(double));
	//printf("char:  %d\n", sizeof(char));
	//printf("short: %d\n", sizeof(short));
	//printf("long:  %d*/\n", sizeof(long));
	//printf("long long:%d\n", sizeof(long long));
	//printf("llong:%d\n", sizeof(long long));
	//printf("long double:%d\n", sizeof(long double));

	system("pause");

	return 0;
}