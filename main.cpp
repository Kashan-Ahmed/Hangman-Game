#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
	int tries = 0, score = 0, loss = 0, random;
	char start, alpha;

	//making dictionary

	char word1[] = { 'a', 'p', 'p', 'l', 'e' };
	char word2[] = { 't', 'e', 'a', 'm' };
	char word3[] = { 'd', 'u', 'c', 'k' };
	char word4[] = { 'g', 'a', 'm', 'e' };
	char word5[] = { 'm', 'a', 'z', 'e' };

	cout << " \n \n-------------------------    WELCOME TO HANGMAN GAME    -------------------------\n \n \n";
	do
	{
		cout << "\n enter 'y' to play and 'n' to exit \n";
		cin >> start;

		//counting tries
		if (start == 'y')
		{
			srand(time(0));
			random = (rand() % 5) + 1;
		}

		else
			break;





		if (random == 1)
		{
			//hint
			cout << endl << " hint : fruit " << endl;
			tries++;
			//printing blanks
			for (int i = 0; i<sizeof(word1); i++)
			{
				cout << " _ ";
			}
			int wrong = 0, right = 0, count = 0;

			//making array of dashes 
			char blank[100] = {};
			for (int i = 0; i<sizeof(word1); i++)
				blank[i] = '_';

			while (wrong<sizeof(word1))
			{

				bool flag = false;
				cout << "\n guess an alphabet \n " << blank << endl;
				cin >> alpha;
				//checking entered alphabet
				for (int i = 0; i<sizeof(word1); i++)
				{

					if (alpha == word1[i])
					{
						flag = 1;
						right++;
						count++;
						blank[i] = alpha;
					}
					else
					{
						right = 0;
					}

				}
				if (flag == 1)
					cout << " \n -------- you found right letter -------- \n ";
				else
				{
					cout << "\n -------- you found wrong letter -------- \n ";
					wrong++;
					cout << " guesses left : " << sizeof(word1) - wrong << endl;
				}
				flag = 0;
				if (wrong >= sizeof(word1))
				{
					cout << " ___ YOU HAVE BEEN HANGED ___ \n THE WORD WAS ";
					//printing word
					for (int x = 0; x<sizeof(word1); x++)
					{
						cout << word1[x];
					}
					loss++;
					break;
				}
				else if (count == sizeof(word1))
				{
					cout << " ___ YOU GOT IT RIGHT ____";
					score++;
					break;
				}

			}

		}
		//repeating same process for all words

		if (random == 2)
		{
			tries++;
			cout << endl << " hint : players " << endl;
			for (int i = 0; i<sizeof(word2); i++)
			{
				cout << " _ ";
			}
			int wrong = 0, right = 0, count = 0;

			char blank[100] = {};
			for (int i = 0; i<sizeof(word2); i++)
				blank[i] = '_';


			while (wrong<sizeof(word2))
			{
				bool flag = false;
				cout << "\n guess an alphabet \n " << blank << endl;
				cin >> alpha;
				for (int i = 0; i<sizeof(word2); i++)
				{

					if (alpha == word2[i])
					{
						flag = 1;
						right++;
						count++;
						blank[i] = alpha;
					}
					else
					{
						right = 0;
					}

				}

				if (flag == 1)
					cout << " \n -------- you found right letter -------- \n ";
				else
				{
					cout << "\n -------- you found wrong letter -------- \n ";
					wrong++;
					cout << " guesses left : " << sizeof(word2) - wrong << endl;
				}
				flag = 0;
				if (wrong >= sizeof(word2))
				{
					cout << " ___ YOU HAVE BEEN HANGED ___ \n THE WORD WAS ";
					//printing word
					for (int x = 0; x<sizeof(word2); x++)
					{
						cout << word2[x];
					}
					loss++;
					break;
				}
				else if (count == sizeof(word2))
				{
					cout << " ___ YOU GOT IT RIGHT ____";
					score++;
					break;
				}
			}
		}


		if (random == 3)
		{
			tries++;
			cout << endl << " hint : bird " << endl;
			for (int i = 0; i<sizeof(word3); i++)
			{
				cout << " _ ";
			}
			int wrong = 0, right = 0, count = 0;
			char blank[100] = {};
			for (int i = 0; i<sizeof(word3); i++)
				blank[i] = '_';

			while (wrong<sizeof(word3))
			{
				bool flag = false;
				cout << "\n guess an alphabet \n " << blank << endl;
				cin >> alpha;
				for (int i = 0; i<sizeof(word3); i++)
				{

					if (alpha == word3[i])
					{
						flag = 1;
						right++;
						count++;
						blank[i] = alpha;
					}
					else
					{
						right = 0;
					}

				}

				if (flag == 1)
					cout << "\n -------- you found right letter -------- \n ";
				else
				{
					cout << "\n -------- you found wrong letter -------- \n ";
					wrong++;
					cout << " guesses left : " << sizeof(word3) - wrong << endl;
				}

				flag = 0;
				if (wrong >= sizeof(word3))
				{
					cout << " ___ YOU HAVE BEEN HANGED ___ \n THE WORD WAS ";
					//printing word
					for (int x = 0; x<sizeof(word3); x++)
					{
						cout << word3[x];
					}
					loss++;
					break;
				}
				else if (count == sizeof(word3))
				{
					cout << " ___ YOU GOT IT RIGHT ____";
					score++;
					break;
				}
			}
		}


		if (random == 4)
		{
			tries++;
			cout << endl << " hint : play " << endl;
			for (int i = 0; i<sizeof(word4); i++)
			{
				cout << " _ ";
			}
			int wrong = 0, right = 0, count = 0;
			char blank[100] = {};
			for (int i = 0; i<sizeof(word4); i++)
				blank[i] = '_';
			while (wrong<sizeof(word4))
			{
				bool flag = false;
				cout << "\n guess an alphabet \n " << blank << endl;
				cin >> alpha;
				for (int i = 0; i<sizeof(word4); i++)
				{

					if (alpha == word4[i])
					{
						flag = 1;
						right++;
						count++;
						blank[i] = alpha;
					}
					else
					{
						right = 0;
					}

				}

				if (flag == 1)
					cout << "\n -------- you found right letter -------- \n ";
				else
				{
					cout << "\n -------- you found wrong letter -------- \n ";
					wrong++;
					cout << " guesses left : " << sizeof(word4) - wrong << endl;
				}
				flag = 0;
				if (wrong >= sizeof(word4))
				{
					cout << " ___ YOU HAVE BEEN HANGED ___ \n THE WORD WAS ";
					//printing word
					for (int x = 0; x<sizeof(word4); x++)
					{
						cout << word4[x];
					}
					loss++;
					break;
				}
				else if (count == sizeof(word4))
				{
					cout << " ___ YOU GOT IT RIGHT ____";
					score++;
					break;
				}
			}
		}


		if (random == 5)
		{
			tries++;
			cout << endl << " hint : game " << endl;
			for (int i = 0; i<sizeof(word5); i++)
			{
				cout << " _ ";
			}
			int wrong = 0, right = 0, count = 0;
			char blank[100] = {};
			for (int i = 0; i<sizeof(word5); i++)
				blank[i] = '_';

			while (wrong<sizeof(word5))
			{

				bool flag = false;
				cout << "\n guess an alphabet \n " << blank << endl;
				cin >> alpha;
				for (int i = 0; i<sizeof(word5); i++)
				{

					if (alpha == word5[i])
					{
						flag = 1;
						right++;
						count++;
						blank[i] = alpha;
					}
					else
					{
						right = 0;
					}

				}

				if (flag == 1)

					cout << " \n -------- you found right letter -------- \n ";
				else
				{
					cout << "\n -------- you found wrong letter -------- \n ";
					wrong++;
					cout << " guesses left : " << sizeof(word5) - wrong << endl;
				}

				if (wrong >= sizeof(word5))
				{
					cout << " ___ YOU HAVE BEEN HANGED ___ \n THE WORD WAS ";
					//printing word
					for (int x = 0; x<sizeof(word5); x++)
					{
						cout << word5[x];
					}
					loss++;
					break;
				}
				else if (count == sizeof(word5))
				{
					cout << " ___ YOU GOT IT RIGHT ____";
					score++;
					break;
				}
			}
		}



	} while (start != 'n');
	if (start == 'n')
	{
		cout << " your wins are = " << score << endl;
		cout << " your losses are = " << loss << endl;
	}


	return 0;
}
