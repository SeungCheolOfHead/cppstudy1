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
	std::cout << "����� ������ �? (ex> 400��*10���� ���������̹Ƿ� 1���� Ĩ�ϴ�. ): ";
	std::cin >> num;
	for (i = 0; i < num; i++)
	{
		std::cout << "��ǰ�� ������ �Է����ּ��� : ";
		std::cin >> numArray[i];
		std::cout << "��ǰ�� ������ �Է����ּ��� : ";
		std::cin >> num1Array[i];
		if (numArray[i] == 1)
		{
			std::cout << "������� " << 1 * num1Array[i] << "��" << std::endl;
			sum += (numArray[i] * num1Array[i]);
		}
		else if (numArray[i] <= 20 && numArray[i] > 1)
		{
			std::cout << "������� " << 1 * num1Array[i] << "��" << std::endl;
			sum += ((numArray[i] - 1) * num1Array[i]);
		}
		else if (numArray[i] > 20)
		{
			int charge = (numArray[i] / 20);
			std::cout << "������� " << charge * num1Array[i] << "��" << std::endl;
			sum += ((numArray[i] - charge) * num1Array[i]);
		}
		else if (numArray[i] <= 0)
		{
			std::cout << "���̳ʽ� ���� �Ҵ����� �ʽ��ϴ� ��� �����մϴ�. ���ݱ��� ����� ���� ���������� " << sum << "�Դϴ�." << std::endl;
		}
	}
	std::cout << "�����Ḧ ������ �հ�� " << sum << "���Դϴ�" << std::endl;
	Sleep(20000);
	return 0;
}
int buyer()
{
	int i = 0, num = 0, sum = 0, gagong=0;
	int numArray[100]{};
	int num1Array[100]{};
	int wanNumber = 0, wanPrice = 0, wanSu = 0, wanze=0;
	std::cout << "���� �� ������? (ex> 400��*10���� ���������̹Ƿ� 1������ Ĩ�ϴ�. ): ";
	std::cin >> num;
	for (i = 0; i < num; i++)
	{
		std::cout << "��ǰ�� ������ �Է����ּ��� : ";
		std::cin >> numArray[i];
		std::cout << "��ǰ�� ������ �Է����ּ��� : ";
		std::cin >> num1Array[i];
		sum += (numArray[i] * num1Array[i]);
		if (numArray[i] <= 0)
		{
			std::cout << "���̳ʽ� ���� �Ҵ����� �ʽ��ϴ� ��� �����մϴ�. ���ݱ��� ����� ���� ���������� " << sum << "�Դϴ�." << std::endl;
		}
	}
	std::cout << "����� �� ������ " << sum << "���Դϴ�" << std::endl;
	std::cout << "���� ����� �Է��ϼ��� : ";
	std::cin >> gagong;
	std::cout << "����ǰ ������ �Է��ϼ��� : ";
	std::cin >> wanNumber;
	std::cout << "����ǰ ���� ������ �Է��ϼ��� : ";
	std::cin >> wanPrice;
	if (wanPrice <= 20 && wanPrice >= 1)
	{
		std::cout << "������� " << 1 * wanNumber << "��" << std::endl;
		wanze += (wanPrice * wanNumber-1*wanNumber);
	}
	else if (wanSu > 20)
	{
		int charge = (wanPrice / 20);
		std::cout << "������� " << charge * wanNumber << "��" << std::endl;
		wanze += ((wanPrice - charge) * wanNumber);
	}
	std::cout << "�� �Ǹűݾ��� " << wanze << "���̰� ������ " << wanze - (sum + gagong) << "���Դϴ�"<<std::endl;
	return 0;
};

int main(void)
{
	int i = 0, num = 0, sum = 0;
	int numArray[100]{};
	int num1Array[100]{};
	//sum���� �����Ḧ ���� �ݾ׵��� ��
	while (1) {
		std::cout << "1.�Ǹ�������   2.����������    3.����    1,2,3�� ���� : ";
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