#include<iostream>
#include<stdlib.h>
#include<string.h>
#include <cmath>
#include<windows.h>

int seller()
{
	int i = 0, num = 0, sum = 0;
	int numArray[100]{};
	int num1Array[100]{};
	std::cout << "등록할 물건은 몇개? (ex> 400원*10개면 공통인자이므로 1개로 칩니다. ): ";
	std::cin >> num;
	for (i = 0; i < num; i++)
	{
		std::cout << "물품의 가격을 입력해주세요 : ";
		std::cin >> numArray[i];
		std::cout << "물품의 개수를 입력해주세요 : ";
		std::cin >> num1Array[i];
		if (numArray[i] == 1)
		{
			std::cout << "수수료는 " << 1 * num1Array[i] << "원" << std::endl;
			sum += (numArray[i] * num1Array[i]);
		}
		else if (numArray[i] <= 20 && numArray[i] > 1)
		{
			std::cout << "수수료는 " << 1 * num1Array[i] << "원" << std::endl;
			sum += ((numArray[i] - 1) * num1Array[i]);
		}
		else if (numArray[i] > 20)
		{
			int charge = (numArray[i] / 20);
			std::cout << "수수료는 " << charge * num1Array[i] << "원" << std::endl;
			sum += ((numArray[i] - charge) * num1Array[i]);
		}
		else if (numArray[i] <= 0)
		{
			std::cout << "마이너스 값은 할당하지 않습니다 즉시 종료합니다. 지금까지 계산한 값의 수수료합은 " << sum << "입니다." << std::endl;
		}
	}
	std::cout << "수수료를 제외한 합계는 " << sum << "원입니다" << std::endl;
	Sleep(20000);
	return 0;
}
int buyer()
{
	int i = 0, num = 0, sum = 0, gagong=0;
	int numArray[100]{};
	int num1Array[100]{};
	int wanNumber = 0, wanPrice = 0, wanSu = 0, wanze=0;
	std::cout << "재료는 총 몇종류? (ex> 400원*10개면 공통인자이므로 1종류로 칩니다. ): ";
	std::cin >> num;
	for (i = 0; i < num; i++)
	{
		std::cout << "물품의 가격을 입력해주세요 : ";
		std::cin >> numArray[i];
		std::cout << "물품의 개수를 입력해주세요 : ";
		std::cin >> num1Array[i];
		sum += (numArray[i] * num1Array[i]);
		if (numArray[i] <= 0)
		{
			std::cout << "마이너스 값은 할당하지 않습니다 즉시 종료합니다. 지금까지 계산한 값의 수수료합은 " << sum << "입니다." << std::endl;
		}
	}
	std::cout << "재료의 총 가격은 " << sum << "원입니다" << std::endl;
	std::cout << "가공 비용을 입력하세요 : ";
	std::cin >> gagong;
	std::cout << "완제품 개수를 입력하세요 : ";
	std::cin >> wanNumber;
	std::cout << "완제품 개당 가격을 입력하세요 : ";
	std::cin >> wanPrice;
	if (wanPrice <= 20 && wanPrice >= 1)
	{
		std::cout << "수수료는 " << 1 * wanNumber << "원" << std::endl;
		wanze += (wanPrice * wanNumber-1*wanNumber);
	}
	else if (wanSu > 20)
	{
		int charge = (wanPrice / 20);
		std::cout << "수수료는 " << charge * wanNumber << "원" << std::endl;
		wanze += ((wanPrice - charge) * wanNumber);
	}
	std::cout << "총 판매금액은 " << wanze << "원이고 차익은 " << wanze - (sum + gagong) << "원입니다"<<std::endl;
	return 0;
};

int main(void)
{
	int i = 0, num = 0, sum = 0;
	int numArray[100]{};
	int num1Array[100]{};
	//sum값은 수수료를 제한 금액들의 합
	while (1) {
		std::cout << "1.판매자입장   2.구매자입장    3.종료    1,2,3중 선택 : ";
		std::cin >> i;
		if (i == 1)
		{
			seller();
		}
		else if (i == 2)
		{
			buyer();
		}
		else if (i == 3)
			return 0;
	}
	return 0;
}