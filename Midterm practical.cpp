
#include <iostream>
#include <time.h>
void Check_ans(int correct, int user_input);

int main()
{
	//how many questions wher ran threw
	int runs = 0;

	bool end;
	end = true;

	while (end)
	{
		//correct ans 
		int correct = 0;

		//users input
		int user_ans = 0;

		//question
		int question = 0;


		//randoms the numbers
		srand(time(0));
		question = rand() % 4 + 1;

		//picks question based on int question 
		switch (question)
		{
		case 1:
			correct = 4;
			std::cout << "What class is this midtern for?\n1.Programing 2\n2.Linear Algabra\n3.Systems Programing\n4.System Engeenering" << std::endl;
			std::cin >> user_ans;
			Check_ans(correct, user_ans);
			break;

		case 2:
			correct = 1;
			std::cout << "What tempature does water freeze at?\n1.32F \n2.32C \n3.50F\n4.69C" << std::endl;
			std::cin >> user_ans;

			Check_ans(correct, user_ans);
			
			break;

		case 3:
			correct = 2;
			std::cout << "Which game do you win by making your friends bankrupt?\n1.Life\n2.Monopoly\n3.Uno\n4.Candy Land" << std::endl;
			std::cin >> user_ans;
			Check_ans(correct, user_ans);
			
			break;

		case 4:
			correct = 3;
			std::cout << "If your going 65 mph how long will it take to go 65 miles?\n1. 30 Mins\n2. 55 Mins \n3. 1 Hour \n4. The car broke down" << std::endl;
			std::cin >> user_ans;
			Check_ans(correct, user_ans);
			break;
		}

		//checks the amount of questions asked 
		if (runs >= 0) {
			end = false;
		}
		else
		{
			runs++;
		}
	}
}


void Check_ans(int correct, int user_input) {

	if (user_input == correct)
	{
			std::cout << "COOOORRREEEECCCCTTTTT!!!!!!" << std::endl;
	}
	else
	{
			std::cout << "Thats to bad your anser was wrong time to move to the next question" << std::endl;
	}

}
