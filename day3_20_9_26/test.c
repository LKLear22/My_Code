#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

//int MyAdd(int _x, int _y)//����ֵ�����У�int,char�����ޣ�void��
//                         //������������֪�⣬��������ĸ��д���շ�ԭ��{����������ʱ���õ���+�»���}
//						 //�β��б�MyAdd(x,y),�����x,yΪʵ�Σ��������������_x,_yΪ�β�
//						 //�����壺�������ĺ��Ĵ���
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

   typedef unsigned long long ull_t;//typedef��������������������������һ�㲻�Ƽ���
//�ؼ���         �ϵ�����    �µ����ͣ����֣�

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
	//show();//()�������ĵ���

	//int a[10];
	//a[3] = 10;

	//int a = (1, 2, 3, 4, 5, 6);//���ű��ʽ����������һ������֮�������
	//printf("%d\n",a);

	//printf("�������Ӧ���������� <x, y> :  ");
	//int x = 0;
	//int y = 0;
	//scanf("%d %d", &x, &y );
	//int max = x > y ? x : y;//��Ŀ�����

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

	//x == 1 && printf("ok!\n");//��һ������������ִ�еڶ�������һ������������ִ�еڶ�����
	//x == 1 || printf("ok!\n");//��һ����������ִ�еڶ�������һ����������ִ�еڶ�����
	
	//&&(�߼���--����������ʽ�� vs &(��λ��---��Ա���λ)
	//                                    //||���߼��� vs |����λ��
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

	//if (x !=y){//��ϵ���㣺>,>=,<,<=,!=(������)��==�����ڣ���
	//	printf("AAAAAAAA\n");
	//}
	//else{
	//	printf("BBBBBBBB\n");
	//
	//}
	//int i = 10;
	////int x = ++i;//ǰ��++:���������ٸ�ֵ��//--����
	//int x = i++;//����++���ȸ�ֵ����������//forѭ��������whileѭ�����У�++i��i++��ʹ�ò�������û������ġ�
	//printf("%d\n",i);
	//printf("%d\n",x);
	//system("calc");

	//unsigned int x = 1; //0000 0000 0000 0000 0000 0000 0000 0000
	//printf("%u\n", ~x );//1111 1111 1111 1111 1111 1111 1111 1110

	//int x = 10;
	//printf("%d\n", x );//%d����ʮ����
	//printf("0x%p\n", &x);//%p����ʮ������
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

	////���������1�����ٿռ䣬��С�����;�����2�����Ӧ�Ŀռ������������

	//int x = 0;//��ʼ�� ���ѿ��ٿռ�ͷ�����������һ�����
	//          //VS ��ֵ
	//int y;    //���ٿռ�
	//y = 20;   //������

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

	//printf("%d\n",1&1);//��λ�룺1&1 = 1��1&0 = 0��0&1 = 0��0&0 = 0���м٣�0����Ϊ�٣�0��.
	//printf("%d\n",2&6);//0010
    //                     0110 &
    //		               0010 = 2	

	//printf("%d\n",1|0);//��λ��1|1 = 1��1|0 = 1��0|1 = 1��0|0 = 0�����棨1����Ϊ�棨1����
	//printf("%d\n",2|6);//0010
	//                   0110 |
	//                   0110 = 6

	//printf("%d\n", 2^6);//��λ���1^1 = 0, 0^1 = 1��1^0 = 1,0^0 = 0����ͬΪ��,��ͬΪ�档
	//                   0010
	//                   0110 ^
	//                   0100 = 4

	//int x = 15;
	//printf("%d\n", x >> 1);
	//printf("%d\n", x >> 2);//��������������1λ�൱�ڶ�������2 
    //	x = x + 10;
	//x = x >> 1;
	//printf("%d\n",x);
	//int x = 15;//1111(������)
	//printf("%d\n",x >> 1);
	//printf("%d\n",x << 1);
	//int x = 10;
	//int y = 5;
	//printf("%d\n", x + y );
	//printf("%d\n", x - y);
	//printf("%d\n", x * y);
	//printf("%d\n", x / y);
	//printf("%d\n", x % y);//10 / 3 = 3......1
	//int arr[10];   //��������.�ֲ�����û�г�ʼ���������������ֵ��
	//int arr[10] = { 1, 2, 3, 4, 5 };
	//����---ͨ��ѭ������
	//int arr[] = { 1, 2, 3, 4, 5, };
	//int num = sizeof(arr) / sizeof(arr[0]);//������Ԫ�صĸ���
	//printf("%d\n",sizeof(arr));//��������Ĵ�С
	//printf("%d\n", sizeof(arr[0]));//һ��Ԫ�صĴ�С
	//printf("%d\n", sizeof(arr)/sizeof(arr[0]));//Ԫ�ظ���
	//int total = 0;
	//int i = 0;
	//for (; i < num; i++){
	//
	//	printf("arr[%d] : %d\n", i, arr[i]);//�������һ�α���
	//	total = total + arr[i];
	//}
	//printf("total : %d\n",total);
	//char a2[20];   //�������顣��������+������+����
	//double a3[30];//
//
//	int x = 0;
//	int y = 0;
//	printf("�������������<x,y>: ");
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