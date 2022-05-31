#include <iostream>
#include <ctype.h>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
	int CY = 0; //CUBIC YEARDS
	int grading = 0;
	string input = "";
	float price = 0.0;
	int extra;
	bool digit = true;
	bool valid = false;

	do{
		cout << "Type 1 for Grading plan check fee or type 2 for Grading permit fee: ";
		cin >> grading;

		if(grading == 1)
		{

			do
			{
				cout << "Enter total cubic yards: ";
				cin >> input;
				digit = true;
				for(unsigned long int i = 0; i < input.size(); i ++)
				{
					if(isdigit(input[i]) == false)
					{
						digit = false;
						break;
					}
				}

				if(digit)
				{
					CY = stoi(input);	

					if(CY >= 0 && CY <= 100)
					{
						price = 510.00;
						valid = true;
						break;
					}
					else if(CY >= 101 && CY <= 1000)
					{
						price = 1021.00;
						extra = ( (CY - 101) / 100 );
						price = price + 226 * extra;	
						valid = true;
						break;
					}
					else if(CY >= 1001 && CY <= 10000)
					{
						price = 3055.00;
						extra = ( (CY - 1001) / 1000 );
						price = price + 194.78 * extra;
						valid = true;
						break;
					}
					else if(CY >= 10001 && CY <= 100000)
					{
						price = 4808.00;
						extra = ( (CY - 10001) / 10000 );
						price = price + 280.56 * extra;
						valid = true;
						break;
					}
					else if(CY >= 100001 && CY <= 200000)
					{
						price = 7333.00;
						extra = ( (CY - 100001) / 10000 );
						price = price + 443.00 * extra;
						valid = true;
						break;
					}
					else if(CY >= 200001 && CY <= 400000)
					{
						price = 11763.00;
						extra = ( (CY - 100001) / 100000 );
						price = price + 143.00 * extra;
						valid = true;
						break;
					}
					else if(CY >= 400001 && CY <= 1000000)
					{
						price = 12049.00;
						extra = ( (CY - 100001) / 100000 );
						price = price + 143.00 * extra;
						valid = true;
						break;
					}
					else if(CY >= 1000001)
					{
						price = 12907.00;
						extra = ( (CY - 100001) / 100000 );
						price = price + 1290.70 * extra;
						valid = true;
						break;
					}
					else
					{
						cout << "Please enter a positive number for the cubic yards.\n";
						std::cin.clear();
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					}
				}
				else
				{
					cout << "Please enter only numbers for the cubic yards.\n";
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}

			}while(1);
		}
		else if(grading == 2)
		{
			do
			{
				cout << "Enter total cubic yards: ";
				cin >> input;
				digit = true;
				for(unsigned long int i = 0; i < input.size(); i ++)
				{
					if(isdigit(input[i]) == false)
					{
						digit = false;
						break;
					}
				}

				if(digit)
				{
					CY = stoi(input);	

					if(CY >= 0 && CY <= 100)
					{
						price = 510.00;
						valid = true;
						break;
					}
					else if(CY >= 101 && CY <= 1000)
					{
						price = 517.00;
						extra = ( (CY - 101) / 100 );
						price = price + 103.78 * extra;	
						valid = true;
						break;
					}
					else if(CY >= 1001 && CY <= 10000)
					{
						price = 1451.00;
						extra = ( (CY - 1001) / 1000 );
						price = price + 105.11 * extra;
						valid = true;
						break;
					}
					else if(CY >= 10001 && CY <= 100000)
					{
						price = 2397.00;
						extra = ( (CY - 10001) / 10000 );
						price = price + 200.67 * extra;
						valid = true;
						break;
					}
					else if(CY >= 100001 && CY <= 200000)
					{
						price = 4203.00;
						extra = ( (CY - 100001) / 10000 );
						price = price + 200.10 * extra;
						valid = true;
						break;
					}
					else if(CY >= 200001 && CY <= 400000)
					{
						price = 6204.00;
						extra = ( (CY - 100001) / 100000 );
						price = price + 305.55 * extra;
						valid = true;
						break;
					}
					else if(CY >= 400001 && CY <= 1000000)
					{
						price = 12315.00;
						extra = ( (CY - 100001) / 100000 );
						price = price + 1528.33 * extra;
						valid = true;
						break;
					}
					else if(CY >= 1000001)
					{
						price = 21485.00;
						extra = ( (CY - 100001) / 100000 );
						price = price + 2148.50 * extra;
						valid = true;
						break;
					}
					else
					{
						cout << "Please enter a positive number for the cubic yards.\n";
						std::cin.clear();
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					}
				}
				else
				{
					cout << "Please enter only numbers for the cubic yards.\n";
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}


			}while(1);

		}
		else
		{
			cerr << "Invalid input, Please only enter 1 or 0.\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if(valid)
		{
			break;
		}

	}while(1);
	
	cout << fixed << setprecision(2) << "Total price is $" << price << endl;

	return 0;
}
