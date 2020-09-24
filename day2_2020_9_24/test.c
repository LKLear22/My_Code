#include<stdio.h>
#include<windows.h>

#pragma warning(disable:4996)


int get_max(int x, int y){

	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int max = get_max(num1, num2);
	printf("max =  %d\n",max);


	/*int x = 0;
	int y = 0;
	printf("请输入两个大小不一样的数字：<x,y>:");

	scanf("%d %d", &x, &y);
	
	if (x > y)
		printf("max = %d\n", x);

	else
		printf("max = %d\n", y);*/

//int MyMul()//为什么要用函数-----工程上讲，函数可以让我们的代码更具有结构性---好看；提升代码的可维护性。
//	{			//函数构成：1、返回值：该函数是否调用成功；
//			    //          2、函数名：见名知意；
//				//          3、形参列表：后面讲
//	            //          4、函数体：代码块
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数字：<x, y>:");
//
//	scanf("%d %d", &x, &y);
//
//	int z = x * y;
//	return z;
//
//	}

//int MyAdd()
//	{
//
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数字：<x, y>:");
//
//	scanf("%d %d", &x, &y);
//
//	int z = x + y;
//
//
//	return z;
//
//
//	}
//int main()
//{
//	int result = MyMul();
//
//	printf("%d\n",result);
//
//	result = MyAdd();
//
//	printf("%d\n", result);
	//int i = 0;
	//printf("1: &i = %p\n",&i);
	//for (int i = 0; i < 1; i++){
	//	//printf("%d\n", i);
	//	printf("2: &i = %p\n",&i);
	//}
	//printf("-----------%d,%p\n", i, &i);
	/*printf("加入比特！\n");
	int line = 0;
	while (line < 600){
	
		printf("coding...%d\n",line);
		line++;
	}
	if (line > 600){
	
		printf("恭喜，喜提offer！\n");
	
	}*/
	
	/*do{
		printf(".");
	} while (0);*/
	//int i = 0;//条件初始化
	//do{						//先执行，再判定
	//	printf("%d\n",i);

	//	i++;//条件更新

	//} while (0);//条件判定
	//for (;;)
	//{
	//	printf(".");
	//}
	//int i = 0;
	//for (int i=0; i < 10; i++)
	//{
	//	printf("%d\n",i);
	//	Sleep(1000);
	//}
	//while (1)
	//{
	//	printf(".");
	//}//死循环
	//int i = 0;//循环条件的初始化
	//while (i < 10)//循环条件的判定
	//{
	//	printf("%d\n",i);
	//	//i = i + 1;//循环条件的更新
	//	//i += 1;
	//	i++;
	//	Sleep(1000);//1S = 1000毫秒 = 1000000微秒
	//}
//输入：_x(加数1)，_y(加数2)
//返回：加法运算之后的结果
//int MyAdd(int _x, int _y)
//{
//
//	int _z = _x + _y;
//	return _z;
//
//}
//
//			printf("输入有误！\n");
//   	}
// }
//int main()
//{
//	while (1)//死循环
//	{
//		printf("请输入你的选择<1 0r 2>");
//		int select = 0;
//		scanf("%d", &select);
//		if (1 == select)
//			{
//				printf("offer\n");
//			}
//		else if (2 == select)
//			{
//				printf("卖红薯!\n");
//			}
//		else 
//			{
	//printf("hello word\n");
	//printf("hello word\n");
	//if (0)//if（0)达到注释效果，但是不推荐此方法
	//{
	//	printf("hello word\n");
	//	printf("hello word\n");
	//	printf("hello word\n");
	//}
	/*int select = 0;
	printf("请输入你的选择<1 or 2>");
	scanf("%d",&select);*/
	//printf("%d\n",select == 10);//输入1的时候输出为0（假，不等于10），输入10的时候输出为1（真，输入的10和select的值（10）是相等的）
	//if (1 == select)//=是赋值，==是比较双等号左右两边是否相等。//C当中，0为假，非0为真。
	//	{
	//	printf("OK!\n");
	//	
	//	}
	//else if (2 == select)
	//	{
	//	printf("ok!\n");
	//	}
	//else
	//{
	//	printf("AAA\n");
	//	if (select == 3)
	//		{

	//		}
	//	else if (select > 5)
	//		{

	//		}

	//}
	//int x = 0;
	//int y = 0;
	//printf("please enter your data<x,y>:");
	//scanf("%d %d",&x,&y);
	//int result = MyAdd(x, y);//调用MyAdd
	//printf("%d + %d = %d\n",x, y, result);
	//printf("%d\n",strlen("abcdef"));
	//printf("%d\n",strlen("c:\test\328\test.c"));//\t，\32(转义为8进制)，\t分别转义为一个字符。
	//printf("%d\n",strlen("abcd"));//求得是字符串内容的长度
	//printf("%d\n",sizeof("abcd"));//求得是字符串占据的空间大小
	//printf("%c\n",'\'');
	//printf("%s\n", "\"");
	//char c = '\n';
	//printf("%d\n", sizeof(c));//运行结果是4，
	//printf("%d\n",sizeof("\n"));//运行结果是2，\n是一个字符，但是双引号里面的是一个字符串。
	//printf("\\");
	//char *s = "c:\code\test.c";//\t转义相当于table键，\c是不可识别的转义字符，所以保留。
	//printf("%s\n",s);
	//转义字符\,转义字符可以把字面转特殊，也可以把特殊转字面
	//printf("a\"\n");//n,",都是字面符号，要想输出他们需要用到转义符\，"\是特殊含义转字面，输出的是",\n是字面含义转特殊--换行。
	//printf("a\n");
	//printf("a\n");
	//printf("a\n");
	//printf("a\n");
	//printf("hello bit!\n");
	//'a';
	//"abc";
	//"";//空串
	//"1234";//字符串
	//printf("%d\n",sizeof("abc"));//c语言默认以\0作为结束标志，不算做字符串内容。比如abc这个字符串内容是abc，但是他的空间是3+1=4。
	//"abc";
	//char *s = "abc";
	//char str[] = "abc";	
	//char arr1 []= "bit";
	//char arr2[] = { 'b', 'i', 't' };
	//char arr3[] = { 'b', 'i', 't' ,'\0'};//\0不属于字符串内容，是字符串结束的标志。
	//printf("%s\n",arr1);
	//printf("%s\n",arr2);
	//printf("%s\n",arr3);
	//printf("abc");//c语言没有字符串类型，只能利用指针或者数组。
	

    system("pause");
	return 0;
}