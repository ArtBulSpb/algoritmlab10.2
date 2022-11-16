#include <iostream>



using namespace std;



int cycle(int number, int &rest) 
	{
		int power = 0;
		while (rest % number == 0)
			{
				rest = rest / number;
				power++;
			}
	
		return power;
	 }


int main()
{
	setlocale(LC_ALL, "Rus");
	int arr[2][4] ={{2, 3, 5, 7}, {0, 0, 0, 0}};

	int i = 0;
	cout << "Введите любое натуральное число:\n";
	int start;
	cin >> start;

	while(start > 1) {
		arr[1][i] =	cycle(arr[0][i], start);
		if (arr[1][i] > 0) {
			cout << arr[0][i] << "^" << arr[1][i];
			if(start > 1) cout << " * ";
		}
		i++;
	}
	cout << endl;
	return 0;
}
