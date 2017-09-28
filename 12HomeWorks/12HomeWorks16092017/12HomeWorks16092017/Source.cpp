#include <iostream>

using namespace std;

void task_1()
{
	struct data
	{
		int day = 0;
		int month = 0;
		int year = 0;
	};

	int diffrientInDays = 0;

	cout << "������� ������ ���� ����� ������: ";
	data dataOne;
	cin >> dataOne.day;
	cin >> dataOne.month;
	cin >> dataOne.year;

	cout << "������� ������ ���� ����� ������: ";
	data dataTwo;
	cin >> dataTwo.day;
	cin >> dataTwo.month;
	cin >> dataTwo.year;

	data timeData;
	if (dataOne.year < dataTwo.year)
	{
		timeData = dataOne;
		dataOne = dataTwo;
		dataTwo = timeData;
	}
	else
	{
		if (dataOne.year == dataTwo.year)
		{
			if (dataOne.month < dataTwo.month)
			{
				timeData = dataOne;
				dataOne = dataTwo;
				dataTwo = timeData;
			}
			else
			{
				if (dataOne.month == dataTwo.month)
				{
					if (dataOne.day < dataTwo.day)
					{
						timeData = dataOne;
						dataOne = dataTwo;
						dataTwo = timeData;
					}
				}
			}
		}
	}
	

	while (dataOne.year > dataTwo.year)
	{
		if (dataOne.year % 4 == 1)
		{
			diffrientInDays = diffrientInDays + 366;
			dataOne.year--;
		}
		else
		{
			diffrientInDays = diffrientInDays + 365;
			dataOne.year--;
		}		
	}
	if (dataOne.month > dataTwo.month)
	{
		while (dataOne.month > dataTwo.month)
		{
			switch (dataOne.month)
			{
				case 1:
				{
					diffrientInDays += 31;
					dataOne.month--;
					break;
				}
				case 2:
				{
					if (dataOne.year % 4 == 0)
					{
						diffrientInDays += 29;
					}
					else
					{
						diffrientInDays += 28;
					}
					dataOne.month--;
					break;
				}
				case 3:
				{
					diffrientInDays += 31;
					dataOne.month--;
					break;
				}
				case 4:
				{
					diffrientInDays += 30;
					dataOne.month--;
					break;
				}
				case 5:
				{
					diffrientInDays += 31;
					dataOne.month--;
					break;
				}
				case 6:
				{
					diffrientInDays += 30;
					dataOne.month--;
					break;
				}
				case 7:
				{
					diffrientInDays += 31;
					dataOne.month--;
					break;
				}
				case 8:
				{
					diffrientInDays += 31;
					dataOne.month--;
					break;
				}
				case 9:
				{
					diffrientInDays += 30;
					dataOne.month--;
					break;
				}
				case 10:
				{
					diffrientInDays += 31;
					dataOne.month--;
					break;
				}
				case 11:
				{
					diffrientInDays += 30;
					dataOne.month--;
					break;
				}
				case 12:
				{
					diffrientInDays += 31;
					dataOne.month--;
					break;
				}
			default:
				break;
			} 			
		}
	}
	else
	{
		while (dataTwo.month > dataOne.month)
		{
			switch (dataTwo.month)
			{
			case 1:
			{
				diffrientInDays -= 31;
				dataTwo.month--;
				break;
			}
			case 2:
			{
				if (dataTwo.year % 4 == 0)
				{
					diffrientInDays -= 29;
				}
				else
				{
					diffrientInDays -= 28;
				}
				dataTwo.month--;
				break;
			}
			case 3:
			{
				diffrientInDays -= 31;
				dataTwo.month--;
				break;
			}
			case 4:
			{
				diffrientInDays -= 30;
				dataTwo.month--;
				break;
			}
			case 5:
			{
				diffrientInDays -= 31;
				dataTwo.month--;
				break;
			}
			case 6:
			{
				diffrientInDays -= 30;
				dataTwo.month--;
				break;
			}
			case 7:
			{
				diffrientInDays -= 31;
				dataTwo.month--;
				break;
			}
			case 8:
			{
				diffrientInDays -= 31;
				dataTwo.month--;
				break;
			}
			case 9:
			{
				diffrientInDays -= 30;
				dataTwo.month--;
				break;
			}
			case 10:
			{
				diffrientInDays -= 31;
				dataTwo.month--;
				break;
			}
			case 11:
			{
				diffrientInDays -= 30;
				dataTwo.month--;
				break;
			}
			case 12:
			{
				diffrientInDays -= 31;
				dataTwo.month--;
				break;
			}
			default:
				break;
			}
		}
	}
	if (dataOne.day > dataTwo.day)
	{
		diffrientInDays += dataOne.day - dataTwo.day;
	}
	else
	{
		diffrientInDays -= dataTwo.day - dataOne.day;
	}

	cout << "������� � ����� � " << diffrientInDays << " ���" << endl;
}

void task_2()
{
	int value = 0;
	cout << "������� �����: ";
	cin >> value;
	cout << "����� ���� " << value % 10 + value / 10 % 10 + value / 100 << endl;
	cout << "������������ ���� " << (value % 10) * ((value / 10) % 10) * (value / 100) << endl;
}

void task_3()
{
	int rubles = 0;
	int copy = 0;
	cout << "������� ��� ����� ����� ������ ";
	cin >> rubles;
	cin >> copy;
	cout << rubles;
	
	if (rubles % 10 == 1)
	{
		switch (rubles)
		{
		case 11:
		{
			cout << " ������ ";
			break;
		}
		default:
		{
			cout << " ����� ";
			break;
		}
		}
	}
	else
	{
		if (rubles == 12 || rubles == 13 || rubles == 14)
		{
			cout << " ������ ";
		}
		else
		{
			switch (rubles % 10)
			{
			case 4:
			{
				cout << " ����� ";
				break;
			}
			case 3:
			{
				cout << " ����� ";
				break;
			}
			case 2:
			{
				cout << " ����� ";
				break;
			}
			default:
			{
				cout << " ������ ";
				break;
			}
			}
		}
	}

	cout << copy;

	if (copy % 10 == 1)
	{
		switch (copy)
		{
		case 11:
		{
			cout << " ������ ";
			break;
		}
		default:
		{
			cout << " ������� ";
			break;
		}
		}
	}
	else
	{
		if (copy == 12 || copy == 13 || copy == 14)
		{
			cout << " ������ ";
		}
		else
		{
			switch (copy % 10)
			{
			case 4:
			{
				cout << " ������� ";
				break;
			}
			case 3:
			{
				cout << " ������� ";
				break;
			}
			case 2:
			{
				cout << " ������� ";
				break;
			}
			default:
			{
				cout << " ������ ";
				break;
			}
			}
		}
	}
}

void task_4()
{
	cout << "������� ����� ";
	int value = 0;
	cin >> value;
	cout << "� ������� ������� ��������� ���� ����� ����� ";

	for (int i = 0; i < value / 1000; i++)
	{
		cout << "M";
		value -= 1000;
	}

	switch (value / 100)
	{
	case 9:
	{
		cout << "XM";
		break;
	}
	case 4:
	{
		cout << "XD";
		break;
	}
	default:
	{
		if (value / 100 > 4)
		{
			cout << "D";
		}
		for (int i = 0; i < (value / 100) % 5; i++)
		{
			cout << "C";
		}
	}
	}

	value = value % 100;

	switch (value / 10)
	{
	case 9:
	{
		cout << "XC";
		break;
	}
	case 4:
	{
		cout << "XL";
		break;
	}
	default:
	{
		if (value / 10 > 4)
		{
			cout << "L";
		}
		for (int i = 0; i < (value / 10) % 5; i++)
		{
			cout << "X";
		}
	}
	}

	value = value % 10;

	switch (value)
	{
	case 9:
	{
		cout << "IX";
		break;
	}
	case 4:
	{
		cout << "IV";
		break;
	}
	default:
	{
		if (value > 4)
		{
			cout << "V";
		}
		for (int i = 0; i < value % 5; i++)
		{
			cout << "I";
		}
	}
	}

	cout << endl;
}

void task_5()
{
	int n = 0;
	cout << "������� ����� ";
	cin >> n;

	string value = {};

	for (int i = 0; i < 3; i++)
	{
		if (n % 1000 != 0)
		{
			switch (i)
			{
			case 1:
			{
				if (n % 100 > 10 && n % 100 < 20)
				{
					value = " ����� " + value;
				}
				else
				{
					switch (n % 10)
					{
					case 1:
					{
						value = " ������ " + value;
						break;
					}
					case 2:
					{
						value = " ������ " + value;
						break;
					}
					case 3:
					{
						value = " ������ " + value;
						break;
					}
					case 4:
					{
						value = " ������ " + value;
						break;
					}
					default:
					{
						value = " ����� " + value;
						break;
					}
					}
				}
				break;
			}
			case 2:
			{
				if (n % 100 > 10 && n % 100 < 20)
				{
					value = " ��������� " + value;
				}
				else
				{
					switch (n % 10)
					{
					case 1:
					{
						value = " ������� " + value;
						break;
					}
					case 2:
					{
						value = " �������� " + value;
						break;
					}
					case 3:
					{
						value = " �������� " + value;
						break;
					}
					case 4:
					{
						value = " �������� " + value;
						break;
					}
					default:
					{
						value = " ��������� " + value;
						break;
					}
					}
				}
				break;
			}
			}
		}

		if (n % 100 > 19 || n % 100 < 10)
		{
			switch (n % 10)
			{
			case 1:
			{
				if (n % 1000 == 1 && i == 1)
				{
					value = " ���� " + value;
					break;
				}
				value = " ���� " + value;
				break;
			}
			case 2:
			{
				value = " ��� " + value;
				break;
			}
			case 3:
			{
				value = " ��� " + value;
				break;
			}
			case 4:
			{
				value = " ������ " + value;
				break;
			}
			case 5:
			{
				value = " ���� " + value;
				break;
			}
			case 6:
			{
				value = " ����� " + value;
				break;
			}
			case 7:
			{
				value = " ���� " + value;
				break;
			}
			case 8:
			{
				value = " ������ " + value;
				break;
			}
			case 9:
			{
				value = " ������ " + value;
				break;
			}
			}

			n /= 10;

			switch (n % 10)
			{
			case 1:
			{
				value = value + "������";
				break;
			}
			case 2:
			{
				value = " �������� " + value;
				break;
			}
			case 3:
			{
				value = " �������� " + value;
				break;
			}
			case 4:
			{
				value = " ����� " + value;
				break;
			}
			case 5:
			{
				value = " ��������� " + value;
				break;
			}
			case 6:
			{
				value = " ���������� " + value;
				break;
			}
			case 7:
			{
				value = " ��������� " + value;
				break;
			}
			case 8:
			{
				value = " ����������� " + value;
				break;
			}
			case 9:
			{
				value = " ��������� " + value;
				break;
			}
			}

			n /= 10;
		}
		else
		{
			switch (n % 100)
			{
			case 11:
			{
				value = " ����������� " + value;
				break;
			}
			case 12:
			{
				value = " ����������� " + value;
				break;
			}
			case 13:
			{
				value = " ���������� " + value;
				break;
			}
			case 14:
			{
				value = " ������������ " + value;
				break;
			}
			case 15:
			{
				value = " ���������� " + value;
				break;
			}
			case 16:
			{
				value = " ����������� " + value;
				break;
			}
			case 17:
			{
				value = " ���������� " + value;
				break;
			}
			case 18:
			{
				value = " ������������ " + value;
				break;
			}
			case 19:
			{
				value = " ������������ " + value;
				break;
			}
			}
			n /= 100;
		}

		switch (n % 10)
		{
		case 1:
		{
			value = " ��� " + value;
			break;
		}
		case 2:
		{
			value = " ������ " + value;
			break;
		}
		case 3:
		{
			value = " ������ " + value;
			break;
		}
		case 4:
		{
			value = " ��������� " + value;
			break;
		}
		case 5:
		{
			value = " ������� " + value;
			break;
		}
		case 6:
		{
			value = " �������� " + value;
			break;
		}
		case 7:
		{
			value = " ������� " + value;
			break;
		}
		case 8:
		{
			value = " ��������� " + value;
			break;
		}
		case 9:
		{
			value = " ��������� " + value;
			break;
		}
		}

		n /= 10;
	}
	for (int i = 0; i < value.length(); i++)
	{
		cout << value[i];
	}
	cout << endl;
}

void task_6()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cout << i * j << "  ";
			if (i * j < 10)
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}

void task_7()
{
	cout << "������� n ";
	int n = 0;
	cin >> n;
	double result = 0;
	double down = 0;
	for (int i = 1; i <= n; i++)
	{
		down += sin(i);
		result += 1 / down;
	}
	cout << "����� " << result << endl;
}

int task_8_fact(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}

void task_8()
{
	cout << "������� n ";
	int n = 0;
	cin >> n;
	cout << "������� k ";
	int k = 0;
	cin >> k;
	cout << "���-�� ��������� " << task_8_fact(n) / (task_8_fact(k) * task_8_fact(n - k)) << endl;
}

void task_9()
{
	cout << "������� n ";
	int red = 0;
	cin >> red;
	cout << "������� k ";
	int k = 0;
	cin >> k;
	int green = 0;
	for (int i = 0; i < k; i++)
	{
		int oldRed = red;
		red = green;
		green += green;
		green += oldRed;
	}
	cout << "����� " << k << " ������ ������� ����� " << red + green << " ��������" << endl;
}

void task_10()
{
	cout << "������� ������ ���������� ";
	double rad = 0;
	cin >> rad;
	int maxInt = 0;
	while (maxInt + 1 <= rad)
	{
		maxInt++;
	}
	int numbersOfCoords = 0;
	for (int i = -maxInt; i <= maxInt; i++)
	{
		for (int j = -maxInt; j <= maxInt; j++)
		{
			if (sqrt(i * i + j * j) <= rad)
			{
				numbersOfCoords++;
			}
		}
	}
	cout << "���-�� ������������� ��������� : " << numbersOfCoords << endl;
}

int task_10_BlockSumFloors(int block)
{
	int sum = 0;
	for (int i = 0; i < block; i++)
	{
		sum += i;
	}
	return sum;
}

int task10_BlockSumRooms(int block)
{
	int sum = 0;
	for (int i = 0; i < block; i++)
	{
		sum += i * i;
	}
	return sum;
}

void task_11()
{
	cout << "������� ����� ������� ";
	long int numberOfRoom = 0;
	cin >> numberOfRoom;
	long int checkingBlock = numberOfRoom;
	long int numberOFBlock = 0;
	while (checkingBlock > 0)
	{
		numberOFBlock++;
		checkingBlock -= numberOFBlock * numberOFBlock;		
	}
	int floor = 0;
	int numberOfFindingRoomFromLeft = 0;
	int numberOfRoomInBlock = numberOfRoom - task10_BlockSumRooms(numberOFBlock);
	int searchingNumber = 0;
	for (int i = 1; i <= numberOFBlock; i++)
	{
		for (int j = 1; j <= numberOFBlock; j++)
		{
			searchingNumber++;
			if (searchingNumber == numberOfRoomInBlock)
			{
				floor = i + task_10_BlockSumFloors(numberOFBlock);
				numberOfFindingRoomFromLeft = j;
				break;
			}
		}
		if (searchingNumber == numberOfRoomInBlock)
		{
			break;
		}
	}
	cout << "���� ������� �� ����� ����� " << floor << endl;
	cout << "����� ������� ����� " << numberOfFindingRoomFromLeft << endl;
}

void task_12()
{
	cout << "������� ����� ";
	int n = 0;
	cin >> n;
	int countOfTakts = 0;
	int maxElement = 1;
	while (n != 1)
	{
		if (maxElement < n)
		{
			maxElement = n;
		}
		if (n == 1)
		{
			break;
		}
		if (n % 2 == 0)
		{
			n /= 2;
		}
		else
		{
			n = n * 3 + 1;
		}
		countOfTakts++;
	}
	cout << "���-�� ������ " << countOfTakts << endl;
	cout << "������������ ������� " << maxElement << endl;
}

void main()
{
	setlocale(LC_ALL, "Russian");
	//task_1();
	//task_2();
	//task_3();
	//task_4();
	//task_5();
	//task_6();
	//task_7();
	//task_8();
	//task_9();
	//task_10();
	//task_11();
	//task_12();
}