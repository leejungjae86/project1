
#include <iostream>
#include <Windows.h>

using namespace std;

// 함수 만들기 함수이름: printTo100, 1~100까지 출력
// 입력값, 출력값 = 없음

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
	//함수 이름 : printToEven
	//동작 : 0~100 까지 짝수 출력
	//입력값,출력값 : 없음
	int number[1000] = { 0 };
	for (int i = 1; i < 100; i += 2)
	{
		number[i] = i;
		cout << number[i] << endl;
	}
}

void printToOdd()
{
//함수 이름 : printToOdd
//동작 : 0~100 까지 홀수 출력
//입력값,출력값 : 없음
	int number[1000] = { 0 };
	for (int i = 1; i < 100; ++i)
	{
		number[i] = i * 2 + 1;
		cout << number[i] << endl;
	}
}

void printTo3Dra()
{
	//함수 이름 : printTo3Dra
//동작 : 0~100 까지 3배수 출력
//입력값,출력값 : 없음int main()
	int number[1000] = { 0 };
	for (int i = 0; i < 34; i++)
	{
		number[i] = i * 3;
		cout << number[i] << endl;
	}
}

void printTo3multi()
{
	//함수 이름 : printTo3multi
	//동작 : 0~100 까지 3승수 출력
	//입력값,출력값 : 없음
	int number[1000] = { 0 };
	for (int i = 0; i < 10; ++i)
	{
		number[i] = 1;

		for (int j = 0; j < i; ++j)
		{
			number[i] = number[i] * 3; //  number[i] * =3;  이렇게해도됨
		}
		cout << number[i] << endl;
	}
}

void printToGogogdan(int n)
{
//함수 이름 : printToGoggodan
//동작 : n의 구구단 * 9까지 출력
//입력값 : int n
//출력값 : 없음
	int number[1000] = { 0 };
	
	for (int i = 1; i <= 9; ++i)
	{
		int result = n * i;
		cout << n << " * " << i << " = " << result << endl;
	}
}

//함수 이름 : printFactorial
//동작 : n!을 구한 결과값을 반환한다 (출력)
//입력값 : int n
//출력값 : int
int printFactorial(int n)
{
	int result = 1;
	for (int i = 1; i <= n; ++i)
	{
		result *= i;
	}
	return  result;
}
// main 안에 이거 	int result = 0;
//                  result = printFactorial(5);
//                  cout << result << endl;
//넣어주자

int main ()
{
	// x를 Location X라고 가정하고 + 방향으로 갔다가 -방향으로 움직이게 해주자
	int x = { 0 };
	bool IsMoveRight = true;

	while (1)
	{
		system("cls");  // cls 화면을 한번 지워주는거
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
	// 위에 넘버안에 1부터99까지 생성하고 싶다 할때 for문 i라 쓴건 뭐라써도 상관없음
	{
		number[i] = i;
		cout << number[i] << endl;
	}
	// <--100보다 크면 여기로 빠져나옴
	

	// 0-100 까지 짝수만 넣어서 출력 number에
	for (int i = 1; i < 100; i+=2  ) // ++i 식으로 짝수가 나오게끔 할 수 있다
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

	// number에 0~100까지 3의 배수 출력
	for (int i = 0; i < 34; i++)
	{
		number[i] = i *3  ;
		cout << number[i] << endl;
	}
	/////////////////////////////////////////////////
	// 이중 for문 i에 j 를 곱하여 3^ 를 만드는
		for (int i = 0; i < 10; ++i)
	{
			number[i] = 1;

			for (int j = 0; j < i; ++j)
			{
				number[i] = number[i] * 3; //  number[i] * =3;  이렇게해도됨
			}
			cout << number[i] << endl;
	}
	
// 함수0~100까지 짝수,홀수 ,3의 배수 나오게 하는 for문

	// cput << number[i] << endl;
	// 2 * 1 = 2
	// 2 * 1 = 4
	// 2 * 1 = 6
	// 2 * 1 = 8
	// 2 * 1 = 10
	// 2 * 1 = 12
	// 2 * 1 = 14
	// 2 * 1 = 16  이런식으로 출력되게 하고 싶다 할때
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
	// 숫자 하나를 입력 받아서 그 숫자를 2~9 구구단 출력
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
	* // 팩토리얼 계산기
	int num, result = 1;
	printf("팩토리얼 수를 입력 \n");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		result = result * i;
	}
	printf("%d", result);
	return 0;
	*/
/*
	int a = { 0 }; // 팩토리얼 계산 하기
	cin >> a;

	int result = 1;
	for (int i = 1; i <= a; ++i)
	{
		result *= i;
	}
	cout << result << endl;
	*/


}	