#include<stdio.h>
#include<windows.h>

//extern int g_value;//定义只能定义（开辟空间+放置内容）一次，声明可以多次声明（注明类型和变量名就可以了，不需要赋值初始化）
//全局变量支持跨文件访问，但是如果被static修饰全局变量代表该全局变量只在本文件内有效！！！因此只能在本文件内被访问。
 //static int g_value = 100;

//void Show(){
//
//	static int i = 0;//i是局部变量/自动变量/临时变量;static修饰局部变量改变了变量的生命周期，让静态局部变量出来作用域依然存在，到程序结束，生命周期才结束，但是他的作用域其实没有变化。
//
//	i++;
//
//	printf("current i is : %d\n", i);
//}

//static int x = 100;

//函数访问也是支持跨文件的！

//static修饰函数：该函数只能在本文件内被调用或者访问，不能跨文件访问。

//extern void Show();

//#define Money 43212//宏定义只做简单的文本替换
               //宏的好处：便于代码的维护性
               //方便阅读，能做到见名知意
//int Double(int x){
//	int y = x * x;
//
//	return y;
//
//}

//#define DOUBLE(x) x*x//"宏函数"=宏
//#define DOUBLE(x) (x)*(x)
//#define DOUBLE(x) ((x)+(x))
//DOUBLE (10) 10+10
//10*DOUBLE(10+1)  10*10+1+10+1

int main()
{
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(float*));
	//所有指针在32位VS下都是4字节，64位下是8字节。




	//int a = 10;
	//int *p = &a;

	//printf("%p, %p, %d, %d\n", &a, p, a, *p);//*p就是对指针进行解引用，代表的就是指针所指向的变量-----*p就是a!!!
	//*p = 20;                                 //但具体用的是变量的空间还是内容取决于是左值（空间）还是右值（内容）
	//int b = *p;
	//
	//printf("%d,%d\n",a, b);



	             //为什么要有指针？？？----为了提高查找效率
	             //指针：就是地址
	//int a = 10;
	//int *p = &a; //p是一个变量，p有没有开辟空间呢？有，在32位下，是4个字节；
	//             //地址是数据么？是的。
	//             //数据可以放在空间里么？可以。因此可以把地址放到p里面。
	//int x = 10;

	//int *p;

	//int a = 10;
	//a = 20;//20用的是a的空间：左值
	//int b = a;//用的是a的内容：右值

	//int a = 10;
	//int b = 20;
	//int *p = &a;
	//p = &b;//p是指针变量，代表的是变量的空间。
	//int *q = p;//p代表的是p的内容,p的内容是一个地址





	//在计算机访问内存的基本单元是字节；以32位计算机为例，2^32*1字节 = (2^10)*(2^10)*(2^10)*(2^2) = 4GB (2^10bit=1Kb,2^10kB=1Mb,2^10MB=1Gb)

	//printf("%d\n", Double(10));

	//printf("%d\n", DOUBLE(10));

	//printf("%d\n", DOUBLE(10));//宏替换是在运算之前做的，相当于10+1*10+1=21，而不是11*11=121

	//printf("%d\n", 10*DOUBLE(10+1));//10*10+1+10+1

	/*int x = Money;
	int y = Money;
	printf("%d\n", Money);
	printf("%d\n", Money);
	printf("%d\n", Money);
	printf("%d\n", Money);
	printf("%d\n", Money);
	printf("%d\n", Money);
	printf("%d\n", x);
	printf("%d\n", y);
*/

	/*int x = M;
	int Mx = 10;
	printf("M = %d\n",x);
	printf("M = %d\n",M);*/

	//Show();

	//printf("%d\n",g_value);

	//printf("%d\n",x );

	/*int i = 0;
	for (; i < 10; i++)
	{
		Show();
	}
	Sleep(500);*/

	//int x = 10;//开辟空间初始化，初始化只能初始化一次
	//x = 20;    //赋值
	//x = 200;   //一个变量可以是被多次赋值
	//x = 2000;

	//printf("hello world\n");
	system("pause");
	return 0;
}