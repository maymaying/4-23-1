#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>



/*
//���ֲ���
int binary_search(int arr[], int k, int left, int right)
{
	while(left<=right)
	{
		int mid = left+(right-left)/2;
		if(arr[mid] > k)
		{
			right = mid-1;
		}
		else if(arr[mid] < k)
		{
			left = mid+1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int left = 0;
	int right = sz-1;//int right = sizeof(arr)/sizeof(arr[0])-1;
	                 //int mid=(left+right)/2   �п��ܳ�����Χ
	int ret = binary_search(arr, k, left, right);
	if(ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ���,�±���:%d\n", ret);
	}
	system("pause");
	return 0;
}



int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while(left<=right)
	{
		int mid = left+(right-left)/2;
		if(arr[mid] > k)
		{
			right = mid-1;
		}
		else if(arr[mid] < k)
		{
			left = mid+1;
		}
		else
		{
			printf("�ҵ���,�±���:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	system("pause");
	return 0;
}
*/


/*
int main()
{
	int i = 0;
	int j = 0;
	for(; i<10; i++)
	{//�������ڶ���forѭ����j��0~9��ӡ��hehe��,��j=10�������ڶ���forѭ����
		for(; j<10; j++)//�ص���һ��forѭ������Ϊj=10�����Բ����ϵڶ���forѭ��������Ҳ�Ͳ���ӡ��hehe��
		{
			printf("hehe\n");//��ӡ10����hehe��
		}
	}
 	//for(; i<10; i++)
 	//{
 	//	printf("hehe\n");//��ӡ10����hehe��
 	//}
	system("pause");
	return 0;
}
*/


/*
int main()
{
	int arr[10] = {0};
	int i = 0;
 	for(i=0; i<10; i++)
 	{
 		printf("%d ", arr[i]);
 	}
	system("pause");
	return 0;
}
*/


/*
int main()
{
	int i = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (i = 0; i <= 12; i++)//i��1~12���ٴ�1~12����ѭ����arr�����ھ�����һ��ѭ��ȫ��Ϊ0
	{
		printf("hehe\n");//���������޴�ӡ��hehe��
		arr[i] = 0;
	}
	system("pause");
	return 0;
}
*/


/*
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
		k++;
	system("pause");//i=0,k=0
	return 0;
}
*/


/*
//���� 1!+2!+3!+����+n!
int main()
{
	int i = 0;
	int ret = 1;
	int j = 0;
	int sum = 0;
	for(j=1; j<=3; j++)
	{
		ret *= j;
		sum = sum + ret;
	}
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}


int main()
{
	int i = 0;
	int ret = 1;
	int j = 0;
	int sum = 0;
	int n = 0;
	scanf("%d", &n);
	for(j=1; j<=n; j++)
	{
		ret = 1;//retÿ�δ�һ��ʼ
		for(i=1; i<=j; i++)
		{
			ret *= i;
		}
		sum = sum + ret;
	}
	
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}


//1. ���� n�Ľ׳ˡ�
int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		ret *= i;
	}
	printf("ret = %d\n", ret);
	system("pause");
	return 0;
}
*/


/*
int main()
{
	int ch = 0;
	while((ch=getchar()) != EOF)//EOF  -- end of file
	{
		if (ch < '0' || ch > '9')
			continue;
		putchar(ch);
	}
	system("pause");
	return 0;
}
*/


/*
int main()
{
	int i = 1;//��ʼ��   ��ӡ1~10
	while(i<=10)//�ж�
	{
		printf("%d ", i);
		i++;//����
	}
	system("pause");
	return 0;
}
*/


/*
//break ��continue
int main()
{
	int i = 1;
	do
	{
		if(i == 5)
			continue;//��i=5ʱ��continue����Ĵ��벻ִ�У�ֱ����ת��whileѭ��
		printf("%d ", i);
		i++;
	}
	while(i<=10);//do����whileѭ��  1 2 3 4
	system("pause");
	return 0;
}


int main()
{
	int i = 1;
	while (i <= 10)
	{
		i++;
		if (5 == i)
		{
			continue;
		}
		printf("%d ", i);//2 3 4 6 7 8 9 10
	}
	system("pause");
	return 0;
}


int main()
{
	int i = 0;
	for(i=1; i<=10; i++)
	{
		if(5 == i)
			continue;
		printf("%d ", i);//1 2 3 4 6 7 8 9 10
	}
	system("pause");
	return 0;
}

int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			break;
		printf("%d ", i);//1 2 3 4
	}
	system("pause");
	return 0;
}

int main()
{
	int i = 1;
	while(i<=10)
	{
		if(5 == i)
		{
			continue;//��i=5ʱ��ִ��continue��while(i<=10)��Ȼ������ѭ��
			         //continue��ֹ����ѭ��������ִ��continue����Ĵ��룬ֱ�ӷ���whileѭ�����
		}
		printf("%d ", i);//1 2 3 4
		i++;
	}
	system("pause");
	return 0;
}


int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
		{
			break;//breakֱ������ѭ��
		}
		printf("%d ", i);//1 2 3 4
		i++;
	}
	system("pause");
	return 0;
}
*/


/*
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;//��break
	case 3:
		switch (n)
		{//switch����Ƕ��ʹ��
		case 1:n++;
		case 2:m++;n++;break;
		}
	case 4:m++;break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);//m=5,n=3
	system("pause");
	return 0;
}
*/


/*
//1.����1-5������ǡ�weekday��;2. ����6 - 7�����weekend��;
int main()
{
	int day = 0;
	int n = 1;
	scanf("%d", &day);
	switch(day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("�������\n");
		break;
	}
	system("pause");
	return 0;
}
*/


/*
int main()
{
	int day = 0;
	int n = 1;
	scanf("%d", &day);
	switch(day)
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	default:
		printf("�������\n");
		break;
	}
	system("pause");
	return 0;
}
*/


/*
//���1-100֮�����
int main()
{
	int i = 0;
	//for(i=1; i<=100; i+=2)
	//{
	//	printf("%d ", i);
	//}
	for(i=1; i<=100; i++)
	{
		if(i%2==1)
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}
*/


/*
int main()
 {
 	int num = 3;
 	if(5 == num)
 	{
 		printf("hehe\n");
 	}
 	else
 	{
 		printf("haha\n");
 	}
 	system("pause");
 	return 0;
 }
*/



/*
//welcome to xian!!!!
//###################
//w#################!
//we###############!!
//wel#############!!!
//....
//welcome to xian!!!!
#include<windows.h>
#include <string.h>
int main()
{
	char arr1[] = "welcome to xian!!!!";
	char arr2[] = "###################";

	int left = 0;
	int right = strlen(arr1) - 1;
	////int right = sizeof(arr1)/sizeof(arr1[0])-2;//�ַ������С�\0��,���Լ�2
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		////Sleep(1000);//1��  1000����   #include<windows.h>
		////system("cls");//cls���
		left++;
		right--;
	}
	////printf("%s\n", arr2);
	
	
	//for (left = 0, right = strlen(arr1) - 1;
	//	left <= right;
	//	left++, right--)
	//{
	//	Sleep(1000);
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//}
	system("pause");
	return 0;
}
*/
