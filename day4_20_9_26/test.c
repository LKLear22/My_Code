#include<stdio.h>
#include<windows.h>

//extern int g_value;//����ֻ�ܶ��壨���ٿռ�+�������ݣ�һ�Σ��������Զ��������ע�����ͺͱ������Ϳ����ˣ�����Ҫ��ֵ��ʼ����
//ȫ�ֱ���֧�ֿ��ļ����ʣ����������static����ȫ�ֱ��������ȫ�ֱ���ֻ�ڱ��ļ�����Ч���������ֻ���ڱ��ļ��ڱ����ʡ�
 //static int g_value = 100;

//void Show(){
//
//	static int i = 0;//i�Ǿֲ�����/�Զ�����/��ʱ����;static���ξֲ������ı��˱������������ڣ��þ�̬�ֲ�����������������Ȼ���ڣ�������������������ڲŽ���������������������ʵû�б仯��
//
//	i++;
//
//	printf("current i is : %d\n", i);
//}

//static int x = 100;

//��������Ҳ��֧�ֿ��ļ��ģ�

//static���κ������ú���ֻ���ڱ��ļ��ڱ����û��߷��ʣ����ܿ��ļ����ʡ�

//extern void Show();

//#define Money 43212//�궨��ֻ���򵥵��ı��滻
               //��ĺô������ڴ����ά����
               //�����Ķ�������������֪��
//int Double(int x){
//	int y = x * x;
//
//	return y;
//
//}

//#define DOUBLE(x) x*x//"�꺯��"=��
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
	//����ָ����32λVS�¶���4�ֽڣ�64λ����8�ֽڡ�




	//int a = 10;
	//int *p = &a;

	//printf("%p, %p, %d, %d\n", &a, p, a, *p);//*p���Ƕ�ָ����н����ã�����ľ���ָ����ָ��ı���-----*p����a!!!
	//*p = 20;                                 //�������õ��Ǳ����Ŀռ仹������ȡ��������ֵ���ռ䣩������ֵ�����ݣ�
	//int b = *p;
	//
	//printf("%d,%d\n",a, b);



	             //ΪʲôҪ��ָ�룿����----Ϊ����߲���Ч��
	             //ָ�룺���ǵ�ַ
	//int a = 10;
	//int *p = &a; //p��һ��������p��û�п��ٿռ��أ��У���32λ�£���4���ֽڣ�
	//             //��ַ������ô���ǵġ�
	//             //���ݿ��Է��ڿռ���ô�����ԡ���˿��԰ѵ�ַ�ŵ�p���档
	//int x = 10;

	//int *p;

	//int a = 10;
	//a = 20;//20�õ���a�Ŀռ䣺��ֵ
	//int b = a;//�õ���a�����ݣ���ֵ

	//int a = 10;
	//int b = 20;
	//int *p = &a;
	//p = &b;//p��ָ�������������Ǳ����Ŀռ䡣
	//int *q = p;//p�������p������,p��������һ����ַ





	//�ڼ���������ڴ�Ļ�����Ԫ���ֽڣ���32λ�����Ϊ����2^32*1�ֽ� = (2^10)*(2^10)*(2^10)*(2^2) = 4GB (2^10bit=1Kb,2^10kB=1Mb,2^10MB=1Gb)

	//printf("%d\n", Double(10));

	//printf("%d\n", DOUBLE(10));

	//printf("%d\n", DOUBLE(10));//���滻��������֮ǰ���ģ��൱��10+1*10+1=21��������11*11=121

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

	//int x = 10;//���ٿռ��ʼ������ʼ��ֻ�ܳ�ʼ��һ��
	//x = 20;    //��ֵ
	//x = 200;   //һ�����������Ǳ���θ�ֵ
	//x = 2000;

	//printf("hello world\n");
	system("pause");
	return 0;
}