   
#include <iostream>

#include "searchSortAlgorithms.h"
 
using namespace std;
 
const int SIZE = 1000;

void printListInfo(int list[]);
void fill(int list[]);

int main()
{
	int intList[SIZE];

	int num;
	int loc;

    int comparisons;

	fill(intList);

	selectionSort(intList, SIZE);

	cout << "The list after sorting: " << endl;
	printListInfo(intList);

	cout << "Enter search item: ";
	cin  >>  num;
	cout << endl;

	cout << "Using sequential search : " ;

    loc = seqSearch(intList, SIZE, num);
    if (loc != -1)
		cout << "Item found at " << loc
			 << ";  Number of comparisons = "
			 << comparisons << endl;
	else
		cout << "Item not in the list. "
			 << " Number of comparisons = "
			 << comparisons << endl;

	cout << "Using binary search : " ;

    comparisons = 0;
	loc = binarySearch(intList, SIZE, num);

	if (loc != -1)
		cout << "Item found at " << loc
			 << ";  Number of comparisons = "
			 << comparisons << endl;
	else
		cout << "Item not in the list. "
			 << " Number of comparisons = "
			 << comparisons << endl;

	// cout << "*****Using binary and sequential search*****" << endl;

	// comparisons = 0;
	// loc = binSeqSearch15(intList, SIZE, comparisons, num);

	// comparisons = 0;
	// loc = binSeqSearch15(intList, SIZE, comparisons, num);

	// if (loc != -1)
	// 	cout << num << " found at position " << loc
	// 		 << ";  Number of comparisons = "
	// 		 << comparisons << endl;
	// else
	// 	cout << num << " is not in the list. "
	// 		 << " Number of comparisons = "
	// 		 << comparisons << endl;


	return 0;
}

void printListInfo(int list[])
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << list[i] << " ";
        if (i % 15 == 0)
            cout << endl;
    }

    cout << endl;
}

void fill(int list[])
{
	int seed = 47;

	int multiplier = 2743;

	int addOn = 5923;

    int index = 0;

	while (index < SIZE)
	{
	   list[index++] = seed;
	   seed = int((seed * multiplier + addOn) % 100000);
	}

	cout << endl;
}