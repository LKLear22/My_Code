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
	printf("������������С��һ�������֣�<x,y>:");

	scanf("%d %d", &x, &y);
	
	if (x > y)
		printf("max = %d\n", x);

	else
		printf("max = %d\n", y);*/

//int MyMul()//ΪʲôҪ�ú���-----�����Ͻ����������������ǵĴ�������нṹ��---�ÿ�����������Ŀ�ά���ԡ�
//	{			//�������ɣ�1������ֵ���ú����Ƿ���óɹ���
//			    //          2��������������֪�⣻
//				//          3���β��б����潲
//	            //          4�������壺�����
//	int x = 0;
//	int y = 0;
//	printf("�������������֣�<x, y>:");
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
//	printf("�������������֣�<x, y>:");
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
	/*printf("������أ�\n");
	int line = 0;
	while (line < 600){
	
		printf("coding...%d\n",line);
		line++;
	}
	if (line > 600){
	
		printf("��ϲ��ϲ��offer��\n");
	
	}*/
	
	/*do{
		printf(".");
	} while (0);*/
	//int i = 0;//������ʼ��
	//do{						//��ִ�У����ж�
	//	printf("%d\n",i);

	//	i++;//��������

	//} while (0);//�����ж�
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
	//}//��ѭ��
	//int i = 0;//ѭ�������ĳ�ʼ��
	//while (i < 10)//ѭ���������ж�
	//{
	//	printf("%d\n",i);
	//	//i = i + 1;//ѭ�������ĸ���
	//	//i += 1;
	//	i++;
	//	Sleep(1000);//1S = 1000���� = 1000000΢��
	//}
//���룺_x(����1)��_y(����2)
//���أ��ӷ�����֮��Ľ��
//int MyAdd(int _x, int _y)
//{
//
//	int _z = _x + _y;
//	return _z;
//
//}
//
//			printf("��������\n");
//   	}
// }
//int main()
//{
//	while (1)//��ѭ��
//	{
//		printf("���������ѡ��<1 0r 2>");
//		int select = 0;
//		scanf("%d", &select);
//		if (1 == select)
//			{
//				printf("offer\n");
//			}
//		else if (2 == select)
//			{
//				printf("������!\n");
//			}
//		else 
//			{
	//printf("hello word\n");
	//printf("hello word\n");
	//if (0)//if��0)�ﵽע��Ч�������ǲ��Ƽ��˷���
	//{
	//	printf("hello word\n");
	//	printf("hello word\n");
	//	printf("hello word\n");
	//}
	/*int select = 0;
	printf("���������ѡ��<1 or 2>");
	scanf("%d",&select);*/
	//printf("%d\n",select == 10);//����1��ʱ�����Ϊ0���٣�������10��������10��ʱ�����Ϊ1���棬�����10��select��ֵ��10������ȵģ�
	//if (1 == select)//=�Ǹ�ֵ��==�ǱȽ�˫�Ⱥ����������Ƿ���ȡ�//C���У�0Ϊ�٣���0Ϊ�档
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
	//int result = MyAdd(x, y);//����MyAdd
	//printf("%d + %d = %d\n",x, y, result);
	//printf("%d\n",strlen("abcdef"));
	//printf("%d\n",strlen("c:\test\328\test.c"));//\t��\32(ת��Ϊ8����)��\t�ֱ�ת��Ϊһ���ַ���
	//printf("%d\n",strlen("abcd"));//������ַ������ݵĳ���
	//printf("%d\n",sizeof("abcd"));//������ַ���ռ�ݵĿռ��С
	//printf("%c\n",'\'');
	//printf("%s\n", "\"");
	//char c = '\n';
	//printf("%d\n", sizeof(c));//���н����4��
	//printf("%d\n",sizeof("\n"));//���н����2��\n��һ���ַ�������˫�����������һ���ַ�����
	//printf("\\");
	//char *s = "c:\code\test.c";//\tת���൱��table����\c�ǲ���ʶ���ת���ַ������Ա�����
	//printf("%s\n",s);
	//ת���ַ�\,ת���ַ����԰�����ת���⣬Ҳ���԰�����ת����
	//printf("a\"\n");//n,",����������ţ�Ҫ�����������Ҫ�õ�ת���\��"\�����⺬��ת���棬�������",\n�����溬��ת����--���С�
	//printf("a\n");
	//printf("a\n");
	//printf("a\n");
	//printf("a\n");
	//printf("hello bit!\n");
	//'a';
	//"abc";
	//"";//�մ�
	//"1234";//�ַ���
	//printf("%d\n",sizeof("abc"));//c����Ĭ����\0��Ϊ������־���������ַ������ݡ�����abc����ַ���������abc���������Ŀռ���3+1=4��
	//"abc";
	//char *s = "abc";
	//char str[] = "abc";	
	//char arr1 []= "bit";
	//char arr2[] = { 'b', 'i', 't' };
	//char arr3[] = { 'b', 'i', 't' ,'\0'};//\0�������ַ������ݣ����ַ��������ı�־��
	//printf("%s\n",arr1);
	//printf("%s\n",arr2);
	//printf("%s\n",arr3);
	//printf("abc");//c����û���ַ������ͣ�ֻ������ָ��������顣
	

    system("pause");
	return 0;
}