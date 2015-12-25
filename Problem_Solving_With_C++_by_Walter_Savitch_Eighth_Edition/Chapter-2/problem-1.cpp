//----------------------------------------------------------------------------------------------//
//	Name -		problem-1.cpp								//
//	Description -	A metric ton is 35,273.92 ounces. Write a program that will read the	//
//			weight of a package of breakfast cereal in ounces and iutput the weight	//
//			in metric tons as well as the number of boxes needed to yield 1 metric 	//
//			ton of cereal. Programme should allow user to repeat the calculation.	//
//	Created -	24/12/2015								//
//	Last Modified -	24/12/2015								//
//	Errors -	None									//
//	Sample Run -										//
//			Please enter the weight of a breakfast cereal in ounces: 56466		//
//			The total weight in metric ton is 1.60079				//
//			1959 boxes will be required to yield 1 metric ton of			//
//			cereal assuming a box of cereal weighs 18 oz.				//
//			----------------------------------------------------------------	//
//			Would you like to calculate again?(y/n) y				//
//			Please enter the weight of a breakfast cereal in ounces: 23656		//
//			The total weight in metric ton is 0.670637				//
//			1959 boxes will be required to yield 1 metric ton of			//
//			cereal assuming a box of cereal weighs 18 oz.				//
//			----------------------------------------------------------------	//
//			Would you like to calculate again?(y/n) n				//
//			Press any key to continue...						//
//----------------------------------------------------------------------------------------------//

#include <iostream>
using namespace std;

int main(void)
{
	double	weight;
	char	continueReply;

	do
	{
		cout << "Please enter the weight of a breakfast cereal in ounces: ";
		cin >> weight;

		cout << "The total weight in metric ton is " << weight / 35273.92 << endl;
		cout << (int)35273.92 / 18 << " boxes will be required to yield 1 metric ton of \n"
			"cereal assuming a box of cereal weighs 18 oz.\n";
		cout << "----------------------------------------------------------------\n";
		
		cout << "Would you like to calculate again?(y/n) ";
		cin >> continueReply;
	} while (continueReply == 'Y' || continueReply == 'y');

	cout << "Press any key to continue...";
	cin.get();
	getchar();

	return 0;
}