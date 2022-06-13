
#include <iostream>
#include <Windows.h>

using namespace std;

// �Լ� ����� �Լ��̸�: printTo100, 1~100���� ���
// �Է°�, ��°� = ����

void printTo100()
{
	int number[1000] = { 0 };
	for (int i = 0; i < 100; ++i)
	{
		number[i] = i;
		cout << number[i] << endl;
	}
}

void printToEven()
{
	//�Լ� �̸� : printToEven
	//���� : 0~100 ���� ¦�� ���
	//�Է°�,��°� : ����
	int number[1000] = { 0 };
	for (int i = 1; i < 100; i += 2)
	{
		number[i] = i;
		cout << number[i] << endl;
	}
}

void printToOdd()
{
//�Լ� �̸� : printToOdd
//���� : 0~100 ���� Ȧ�� ���
//�Է°�,��°� : ����
	int number[1000] = { 0 };
	for (int i = 1; i < 100; ++i)
	{
		number[i] = i * 2 + 1;
		cout << number[i] << endl;
	}
}

void printTo3Dra()
{
	//�Լ� �̸� : printTo3Dra
//���� : 0~100 ���� 3��� ���
//�Է°�,��°� : ����int main()
	int number[1000] = { 0 };
	for (int i = 0; i < 34; i++)
	{
		number[i] = i * 3;
		cout << number[i] << endl;
	}
}

void printTo3multi()
{
	//�Լ� �̸� : printTo3multi
	//���� : 0~100 ���� 3�¼� ���
	//�Է°�,��°� : ����
	int number[1000] = { 0 };
	for (int i = 0; i < 10; ++i)
	{
		number[i] = 1;

		for (int j = 0; j < i; ++j)
		{
			number[i] = number[i] * 3; //  number[i] * =3;  �̷����ص���
		}
		cout << number[i] << endl;
	}
}

void printToGogogdan(int n)
{
//�Լ� �̸� : printToGoggodan
//���� : n�� ������ * 9���� ���
//�Է°� : int n
//��°� : ����
	int number[1000] = { 0 };
	
	for (int i = 1; i <= 9; ++i)
	{
		int result = n * i;
		cout << n << " * " << i << " = " << result << endl;
	}
}

//�Լ� �̸� : printFactorial
//���� : n!�� ���� ������� ��ȯ�Ѵ� (���)
//�Է°� : int n
//��°� : int
int printFactorial(int n)
{
	int result = 1;
	for (int i = 1; i <= n; ++i)
	{
		result *= i;
	}
	return  result;
}
// main �ȿ� �̰� 	int result = 0;
//                  result = printFactorial(5);
//                  cout << result << endl;
//�־�����

int main ()
{
	// x�� Location X��� �����ϰ� + �������� ���ٰ� -�������� �����̰� ������
	int x = { 0 };
	bool IsMoveRight = true;

	while (1)
	{
		system("cls");  // cls ȭ���� �ѹ� �����ִ°�
		cout << x << endl;

		if (IsMoveRight)
		{
			x++;
			if (x >= 50)
			{
				IsMoveRight = false;
			}
		}
		else
		{
			x--;
			if (x <= 0)
			{
				IsMoveRight = true;
			}
		}
		Sleep(100);
		system("cls");
		
	}


	/*
	for (int i = 0; i < 100; i++) 
	// ���� �ѹ��ȿ� 1����99���� �����ϰ� �ʹ� �Ҷ� for�� i�� ���� ����ᵵ �������
	{
		number[i] = i;
		cout << number[i] << endl;
	}
	// <--100���� ũ�� ����� ��������
	

	// 0-100 ���� ¦���� �־ ��� number��
	for (int i = 1; i < 100; i+=2  ) // ++i ������ ¦���� �����Բ� �� �� �ִ�
	{
		// i= 0,1,2,3,4,5,6,7,8,9,10...
		// i *2= 0,2,4,

		number[i] = i;
		cout << number[i] << endl;
	}
	///////////////////////////////////////////////////
	for (int i = 1; i < 100; ++i)
	{
		number[i] = i * 2 + 1;
		cout << number[i] << endl;
	}
	//////////////////////////////////////////////////

	// number�� 0~100���� 3�� ��� ���
	for (int i = 0; i < 34; i++)
	{
		number[i] = i *3  ;
		cout << number[i] << endl;
	}
	/////////////////////////////////////////////////
	// ���� for�� i�� j �� ���Ͽ� 3^ �� �����
		for (int i = 0; i < 10; ++i)
	{
			number[i] = 1;

			for (int j = 0; j < i; ++j)
			{
				number[i] = number[i] * 3; //  number[i] * =3;  �̷����ص���
			}
			cout << number[i] << endl;
	}
	
// �Լ�0~100���� ¦��,Ȧ�� ,3�� ��� ������ �ϴ� for��

	// cput << number[i] << endl;
	// 2 * 1 = 2
	// 2 * 1 = 4
	// 2 * 1 = 6
	// 2 * 1 = 8
	// 2 * 1 = 10
	// 2 * 1 = 12
	// 2 * 1 = 14
	// 2 * 1 = 16  �̷������� ��µǰ� �ϰ� �ʹ� �Ҷ�
	for (int i = 1; i < 10; ++i)
	{
		number[i] = i * 2;
		cout << " 2 * "<<  i << " = " << number[i] << endl;
	}
	
	/// //////////////////////////////////////////////////////
	for (int j = 2; j <= 9; ++j)
	{

		for (int i = 1; i < 9; ++i)
		{
			int result = j * i;
			cout << j << " * " << i << " = " << result << endl;
		}
	}
	*/

	/*
	// ���� �ϳ��� �Է� �޾Ƽ� �� ���ڸ� 2~9 ������ ���
	// ex) 10 * 1 = 10
	// 10 * 2 = 20
	// 10 * 3 = 30
	// 10 * 4 = 40
	
	int  a = { 0 };
	cin >> a;

	for (int i = 1; i <= 9; ++i)
	{
		int result = a * i;
		cout << a << " * " << i << " = " << result << endl;
	} */
	/*
	* // ���丮�� ����
	int num, result = 1;
	printf("���丮�� ���� �Է� \n");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		result = result * i;
	}
	printf("%d", result);
	return 0;
	*/
/*
	int a = { 0 }; // ���丮�� ��� �ϱ�
	cin >> a;

	int result = 1;
	for (int i = 1; i <= a; ++i)
	{
		result *= i;
	}
	cout << result << endl;
	*/


}	