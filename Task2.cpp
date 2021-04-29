#include <iostream>
#include <string>
using namespace std;

struct Request
{
	int pas;
	string side;
	string position;
};

int main()
{
	int NumOfRow;
	cin >> NumOfRow;
	string *s;
	s = new string[NumOfRow];
	for (int i = 0; i < NumOfRow; ++i)
	{
		cin >> s[i];
	}
	int NumOfReq;
	cin >> NumOfReq;
	Request* Req = new Request[NumOfReq];
	for (int i = 0; i < NumOfReq; ++i)
	{
		cin >> Req[i].pas;
		cin >> Req[i].position;
		cin >> Req[i].side;
	}
	int i;
	for (int k = 0; k < NumOfReq; ++k)
	{
		for (i = 0; i < NumOfRow; ++i)
		{
			if (Req[k].position == "left" and Req[k].side == "aisle")
			{ 
				if (Req[k].pas == 1)
				{
					if (s[i][2] != '.')
						continue;
					cout << "Passengers can take seats: " << i + 1 << "C" << endl;
					for (int g = 0; g < NumOfRow; ++g)
					{
						if (g == i)
						{
							s[g][2] = 'X';
							cout << s[g] <<endl;
							s[g][2] = '#';
						}
						else
							cout << s[g] << endl;
					}
					break;
				}
				if (Req[k].pas == 2)
				{
					if (s[i][1] != '.' || s[i][2] != '.')
						continue;
					cout << "Passengers can take seats: " << i + 1 << "B " << i + 1 << "C" << endl;
					for (int g = 0; g < NumOfRow; ++g)
					{
						if (g == i)
						{
							s[g][1] = 'X';
							s[g][2] = 'X';
							cout << s[g] << endl;
							s[g][1] = '#';
							s[g][2] = '#';
						}
						else
							cout << s[g] << endl;
					}
					break;
				}
				if (Req[k].pas == 3)
				{
					if (s[i][0] != '.' || s[i][1] != '.' || s[i][2] != '.')
						continue;
					cout << "Passengers can take seats: " << i + 1 << "A " << i + 1 << "B " << i + 1 << "C" << endl;
					for (int g = 0; g < NumOfRow; ++g)
					{
						if (g == i)
						{
							s[g][0] = 'X';
							s[g][1] = 'X';
							s[g][2] = 'X';
							cout << s[g] << endl;
							s[g][0] = '#';
							s[g][1] = '#';
							s[g][2] = '#';
						}
						else
							cout << s[g] << endl;
					}
					break;
				}
			}
			if (Req[k].position == "left" and Req[k].side == "window")
			{
				if (Req[k].pas == 1)
				{
					if (s[i][0] != '.')
						continue;
					cout << "Passengers can take seats: " << i + 1 << "A" << endl;
					for (int g = 0; g < NumOfRow; ++g)
					{
						if (g == i)
						{
							s[g][0] = 'X';
							cout << s[g] << endl;
							s[g][0] = '#';
						}
						else
							cout << s[g] << endl;
					}
					break;
				}
				if (Req[k].pas == 2)
				{
					if (s[i][0] != '.' || s[i][1] != '.')
						continue;
					cout << "Passengers can take seats: " << i + 1 << "A " << i + 1 << "B" << endl;
					for (int g = 0; g < NumOfRow; ++g)
					{
						if (g == i)
						{
							s[g][0] = 'X';
							s[g][1] = 'X';
							cout << s[g] << endl;
							s[g][0] = '#';
							s[g][1] = '#';
						}
						else
							cout << s[g] << endl;
					}
					break;
				}
				if (Req[k].pas == 3)
				{
					if (s[i][0] != '.' || s[i][1] != '.' || s[i][2] != '.')
						continue;
					cout << "Passengers can take seats: " << i + 1 << "A " << i + 1 << "B " << i + 1 << "C" << endl;
					for (int g = 0; g < NumOfRow; ++g)
					{
						if (g == i)
						{
							s[g][0] = 'X';
							s[g][1] = 'X';
							s[g][2] = 'X';
							cout << s[g] << endl;
							s[g][0] = '#';
							s[g][1] = '#';
							s[g][2] = '#';
						}
						else
							cout << s[g] << endl;
					}
					break;
				}
			}
			if (Req[k].position == "right" and Req[k].side == "aisle")
			{
				if (Req[k].pas == 1)
				{
					if (s[i][4] != '.')
						continue;
					cout << "Passengers can take seats: " << i + 1 << "D" << endl;
					for (int g = 0; g < NumOfRow; ++g)
					{
						if (g == i)
						{
							s[g][4] = 'X';
							cout << s[g] << endl;
							s[g][4] = '#';
						}
						else
							cout << s[g] << endl;
					}
					break;
				}
				if (Req[k].pas == 2)
				{
					if (s[i][4] != '.' || s[i][5] != '.')
						continue;
					cout << "Passengers can take seats: " << i + 1 << "D " << i + 1 << "E" << endl;
					for (int g = 0; g < NumOfRow; ++g)
					{
						if (g == i)
						{
							s[g][4] = 'X';
							s[g][5] = 'X';
							cout << s[g] << endl;
							s[g][4] = '#';
							s[g][5] = '#';
						}
						else
							cout << s[g] << endl;
					}
					break;
				}
				if (Req[k].pas == 3)
				{
					if (s[i][4] != '.' || s[i][5] != '.' || s[i][6] != '.')
						continue;
					cout << "Passengers can take seats: " << i + 1 << "D " << i + 1 << "E " << i + 1 << "F" << endl;
					for (int g = 0; g < NumOfRow; ++g)
					{
						if (g == i)
						{
							s[g][4] = 'X';
							s[g][5] = 'X';
							s[g][6] = 'X';
							cout << s[g] << endl;
							s[g][4] = '#';
							s[g][5] = '#';
							s[g][6] = '#';
						}
						else
							cout << s[g] << endl;
					}
					break;
				}
			}
			if (Req[k].position == "right" and Req[k].side == "window")
			{
				if (Req[k].pas == 1)
				{
					if (s[i][6] != '.')
						continue;
					cout << "Passengers can take seats: " << i + 1 << "F" << endl;
					for (int g = 0; g < NumOfRow; ++g)
					{
						if (g == i)
						{
							s[g][6] = 'X';
							cout << s[g] << endl;
							s[g][6] = '#';
						}
						else
							cout << s[g] << endl;
					}
					break;
				}
				if (Req[k].pas == 2)
				{
					if (s[i][5] != '.' || s[i][6] != '.')
						continue;
					cout << "Passengers can take seats: " << i + 1 << "E " << i + 1 << "F" << endl;
					for (int g = 0; g < NumOfRow; ++g)
					{
						if (g == i)
						{
							s[g][5] = 'X';
							s[g][6] = 'X';
							cout << s[g] << endl;
							s[g][5] = '#';
							s[g][6] = '#';
						}
						else
							cout << s[g] << endl;
					}
					break;
				}
				if (Req[k].pas == 3)
				{
					if (s[i][4] != '.' || s[i][5] != '.' || s[i][6] != '.')
						continue;
					cout << "Passengers can take seats: " << i + 1 << "D " << i + 1 << "E " << i + 1 << "F" << endl;
					for (int g = 0; g < NumOfRow; ++g)
					{
						if (g == i)
						{
							s[g][4] = 'X';
							s[g][5] = 'X';
							s[g][6] = 'X';
							cout << s[g] << endl;
							s[g][4] = '#';
							s[g][5] = '#';
							s[g][6] = '#';
						}
						else
							cout << s[g] << endl;
					}
					break;
				}
			}
		}
		if ((i == NumOfRow) && (k + 1 != NumOfReq))
			std::cout << "Cannot fulfill passengers requirements" << endl;
		if ((i == NumOfRow) && (k + 1 == NumOfReq))
			std::cout << "Cannot fulfill passengers requirements";
	}
	return 0;
}