#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>



/*
//二分查找
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
	                 //int mid=(left+right)/2   有可能超过范围
	int ret = binary_search(arr, k, left, right);
	if(ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了,下标是:%d\n", ret);
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
			printf("找到了,下标是:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
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
	{//先跳到第二个for循环，j从0~9打印“hehe”,当j=10后，跳出第二个for循环，
		for(; j<10; j++)//回到第一个for循环，因为j=10，所以不符合第二个for循环条件，也就不打印“hehe”
		{
			printf("hehe\n");//打印10个“hehe”
		}
	}
 	//for(; i<10; i++)
 	//{
 	//	printf("hehe\n");//打印10个“hehe”
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
	for (i = 0; i <= 12; i++)//i从1~12后，再从1~12无限循环，arr数组内经过第一轮循环全变为0
	{
		printf("hehe\n");//本程序无限打印“hehe”
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
//计算 1!+2!+3!+……+n!
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
		ret = 1;//ret每次从一开始
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


//1. 计算 n的阶乘。
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
	int i = 1;//初始化   打印1~10
	while(i<=10)//判断
	{
		printf("%d ", i);
		i++;//调整
	}
	system("pause");
	return 0;
}
*/


/*
//break 和continue
int main()
{
	int i = 1;
	do
	{
		if(i == 5)
			continue;//当i=5时，continue后面的代码不执行，直接跳转到while循环
		printf("%d ", i);
		i++;
	}
	while(i<=10);//do……while循环  1 2 3 4
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
			continue;//当i=5时，执行continue到while(i<=10)，然后无限循环
			         //continue终止本次循环，不再执行continue后面的代码，直接返回while循环入口
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
			break;//break直接跳出循环
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
	case 2:n++;//无break
	case 3:
		switch (n)
		{//switch允许嵌套使用
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
//1.输入1-5输出的是“weekday”;2. 输入6 - 7输出“weekend”;
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
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输入错误\n");
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
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期天\n");
		break;
	default:
		printf("输入错误\n");
		break;
	}
	system("pause");
	return 0;
}
*/


/*
//输出1-100之间的奇
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
	////int right = sizeof(arr1)/sizeof(arr1[0])-2;//字符串里有‘\0’,所以减2
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		////Sleep(1000);//1秒  1000毫秒   #include<windows.h>
		////system("cls");//cls清空
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
