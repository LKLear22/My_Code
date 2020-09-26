#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

//int MyAdd(int _x, int _y)//返回值：可有（int,char）可无（void）
//                         //函数名：见名知意，单词首字母大写（驼峰原理）{命名变量的时候用单词+下划线}
//						 //形参列表：MyAdd(x,y),里面的x,y为实参，函数声明里面的_x,_y为形参
//						 //函数体：代表函数的核心代码
//{
//	int _z = _x + _y;
//
//	return _z;
//
//}
//void fun1(){
//
//	}
//void fun2(){
//
//	}
//
//int MyMul(int _x, int _y)
//{
//
//	int _z = _x * _y;
//	return _z;
//
//}
//
//int MyDiv(int _x, int _y)
//{
//	if (0 == _y)
//	{
//		printf("div zero!\n");
//		return -1;
//	}
//
//
//	int _z = _x / _y;
//
//	return _z;
//
//}
//
void show()

{
	printf("hello world!\n");

}
//int MyMax(_x, _y)
//{
//	int _max = 0;
//	if (_x > _y){
//	
//		_max = _x;
//	
//	}
//
//	else {
//	
//		_max = _y;
//	}
//
//	return _max;


	//int _max = _x > _y ? _x : _y;
	//return _max;

//   }

   typedef unsigned long long ull_t;//typedef：类型重命名，除非特殊需求，一般不推荐。
//关键字         老的类型    新的类型（名字）

int main()
{

	//unsigned long long x = 100;
	//unsigned long long y = 200;
	ull_t x = 100;
	ull_t y = 200;

	printf("llu\n", x);
	printf("llu\n", y);









	/*printf("Please Enter<x, y>: ");
	int x = 0;
	int y = 0;
	scanf("%d %d", &x, &y );
	int max = MyMax(x, y);
	printf("max = %d\n",max);*/
	//char s[] = { 'b', 'i', 't' };
	//printf("%d\n",sizeof(s));
	
	//printf("%d\n",sizeof(s));
	//printf("%d\n",strlen(s));
	//printf("%d, %s\n",sizeof(s),strlen(s));
	//show();//()代表函数的调用

	//int a[10];
	//a[3] = 10;

	//int a = (1, 2, 3, 4, 5, 6);//逗号表达式，结果是最后一个逗号之后的数字
	//printf("%d\n",a);

	//printf("请输入对应的两个数据 <x, y> :  ");
	//int x = 0;
	//int y = 0;
	//scanf("%d %d", &x, &y );
	//int max = x > y ? x : y;//三目运算符

	//printf("max = %d\n", max );
	//int max = 0;
	/*if ( x > y){
		max = x;
	}
	else{
		max = y;
	}
	printf("max = %d\n",max );
*/



	/*int x = 1;
	int y = 20;*/

	//x == 1 && printf("ok!\n");//第一个成立，继续执行第二个；第一个不成立，不执行第二个。
	//x == 1 || printf("ok!\n");//第一个成立，则不执行第二个；第一个不成立，执行第二个。
	
	//&&(逻辑与--针对两个表达式） vs &(按位与---针对比特位)
	//                                    //||（逻辑或） vs |（按位或）
	//if (x >= 10 && y <= 20)
	//     {
	//	   printf("AAAAAAAA\n");
 //        }
	//else
	//     {
	//	   printf("BBBBBBBB\n");
	//
	//     }





	//int x = 10;
	//int y = 20;

	//if (x !=y){//关系运算：>,>=,<,<=,!=(不等于)，==（等于）。
	//	printf("AAAAAAAA\n");
	//}
	//else{
	//	printf("BBBBBBBB\n");
	//
	//}
	//int i = 10;
	////int x = ++i;//前置++:先自增，再赋值。//--类似
	//int x = i++;//后置++：先赋值，再自增。//for循环（包括while循环）中，++i和i++在使用层面上是没有区别的。
	//printf("%d\n",i);
	//printf("%d\n",x);
	//system("calc");

	//unsigned int x = 1; //0000 0000 0000 0000 0000 0000 0000 0000
	//printf("%u\n", ~x );//1111 1111 1111 1111 1111 1111 1111 1110

	//int x = 10;
	//printf("%d\n", x );//%d代表十进制
	//printf("0x%p\n", &x);//%p代表十六进制
	/*int x = 10;
	printf("%d\n", +x);
	printf("%d\n", -x);*/
	////int flag = 1;
	//int flag = 0;
	////if (!(1 == flag))
	//if (!flag)
	//{
	//	printf("hello world!\n"); 
	//}
	//else {
	//	printf("hello bit!");
	//}

	////定义变量：1）开辟空间，大小由类型决定；2）向对应的空间放置内容数据

	//int x = 0;//初始化 ：把开辟空间和放置内容数据一起进行
	//          //VS 赋值
	//int y;    //开辟空间
	//y = 20;   //赋内容

	//x += 20;
	//x *= 10;
	//x /= 10;
	//x -= 10;
	//x %= 10;
	//x >>= 1;//x = x >> 1 ;
	//x <<= 1;//x = x << 1 ;
	//x &= 1;//x = x & 1;
	//x |= 1;//x = x | 1;
	//x ^= 1;//x = x ^ 1;

	//printf("%d\n",1&1);//按位与：1&1 = 1，1&0 = 0，0&1 = 0，0&0 = 0。有假（0）必为假（0）.
	//printf("%d\n",2&6);//0010
    //                     0110 &
    //		               0010 = 2	

	//printf("%d\n",1|0);//按位或：1|1 = 1，1|0 = 1，0|1 = 1，0|0 = 0。有真（1）必为真（1）。
	//printf("%d\n",2|6);//0010
	//                   0110 |
	//                   0110 = 6

	//printf("%d\n", 2^6);//按位异或：1^1 = 0, 0^1 = 1，1^0 = 1,0^0 = 0。相同为假,不同为真。
	//                   0010
	//                   0110 ^
	//                   0100 = 4

	//int x = 15;
	//printf("%d\n", x >> 1);
	//printf("%d\n", x >> 2);//将整数进行右移1位相当于对整数除2 
    //	x = x + 10;
	//x = x >> 1;
	//printf("%d\n",x);
	//int x = 15;//1111(二进制)
	//printf("%d\n",x >> 1);
	//printf("%d\n",x << 1);
	//int x = 10;
	//int y = 5;
	//printf("%d\n", x + y );
	//printf("%d\n", x - y);
	//printf("%d\n", x * y);
	//printf("%d\n", x / y);
	//printf("%d\n", x % y);//10 / 3 = 3......1
	//int arr[10];   //定义数组.局部数组没有初始化数组内容是随机值。
	//int arr[10] = { 1, 2, 3, 4, 5 };
	//遍历---通过循环遍历
	//int arr[] = { 1, 2, 3, 4, 5, };
	//int num = sizeof(arr) / sizeof(arr[0]);//求数组元素的个数
	//printf("%d\n",sizeof(arr));//整个数组的大小
	//printf("%d\n", sizeof(arr[0]));//一个元素的大小
	//printf("%d\n", sizeof(arr)/sizeof(arr[0]));//元素个数
	//int total = 0;
	//int i = 0;
	//for (; i < num; i++){
	//
	//	printf("arr[%d] : %d\n", i, arr[i]);//对数组的一次遍历
	//	total = total + arr[i];
	//}
	//printf("total : %d\n",total);
	//char a2[20];   //定义数组。包括类型+数组名+数据
	//double a3[30];//
//
//	int x = 0;
//	int y = 0;
//	printf("请输入你的数据<x,y>: ");
//	scanf("%d %d",&x, &y);
//
//	printf("result : %d\n", MyAdd(x, y));
//	printf("result : %d\n", MyMul(x, y));
//	printf("result : %d\n", MyDiv(x, y));

	//int result = MyAdd(x, y);

	//int z = x + y;
	//printf("result : %d\n", result);
	system("pause");
	return 0;
}