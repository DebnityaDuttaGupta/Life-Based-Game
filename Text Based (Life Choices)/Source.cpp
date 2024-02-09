#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <Windows.h>
using namespace std;



void MazeGame()
{
	cout << "You got to play an amazing maze game" << endl;
}
int secretNumber = 2004;
void Numberguess()
{
	cout << "\n\t\t\tWelcome to Guess the Number!!!" << endl;
	cout << "You have to guess a number but you will have limited choices on thelevel you choose, So Good Luck" << endl;
	cout << "The number id athe total additon of your birth date, birth month and birth year" << endl;
	while (true)
	{
		cout << "\nEnter the difficulty level: \n";
		cout << "1 for easy!\t";
		cout << "2 for medium!\t";
		cout << "3 for difficult!\t" << endl;

		int ab;
		cout << "Enter the Difficulty level : " << endl;
		cin >> ab;

		
		int choice;
		if (ab == 1)
		{
			cout << "\nYou have 10 choices for finding the "
				"secret number between.";
			int choicesLeft = 10;
			for (int i = 1; i <= 10; i++)
			{
				cout << "\n\nEnter the number: " << endl;
				cin >> choice;
				if (choice == secretNumber)
				{
					cout << "Well done! you won " << choice << " is the secret number" << endl;
					break;
				}
				else
				{
					cout << "Nope " << choice << " is not the right number" << endl;
					if (choice > secretNumber)
					{
						cout << "The secret number is smaller than the number you have choosen" << endl;
					}
					else
					{
						cout << "The secret number is greater than the number you have choosen" << endl;
					}
					choicesLeft--;
					cout << "Choices Left : " << choicesLeft << endl;
					if (choicesLeft == 0)
					{
						cout << "You couldn't find the number, it was " << secretNumber << " You LOSE YOU ARE A SORE LOSER" << endl;
					}
				}
			}
		}
		else if (ab == 2)
		{
			cout << "\nYou have 5 choices for finding the "
				"secret number.";
			int choicesLeft = 5;
			for (int i = 1; i <= 5; i++)
			{
				cout << "\n\nEnter the number: " << endl;
				cin >> choice;
				if (choice == secretNumber)
				{
					cout << "Well done! you won " << choice << " is the secret number" << endl;
					break;
				}
				else
				{
					cout << "Nope " << choice << " is not the right number" << endl;
					if (choice > secretNumber)
					{
						cout << "The secret number is smaller than the number you have choosen" << endl;
					}
					else
					{
						cout << "The secret number is greater than the number you have choosen" << endl;
					}
					choicesLeft--;
					cout << "Choices Left : " << choicesLeft << endl;
					if (choicesLeft == 0)
					{
						cout << "You couldn't find the number, it was " << secretNumber << " You LOSE YOU ARE A SORE LOSER" << endl;
					}
				}
			}
		}
		else if (ab == 3)
		{
			cout << "\nYou have 2 choices for finding the "
				"secret number between.";
			int choicesLeft = 2;
			for (int i = 1; i <= 2; i++)
			{
				cout << "\n\nEnter the number: " << endl;
				cin >> choice;
				if (choice == secretNumber)
				{
					cout << "Well done! you won " << choice << " is the secret number" << endl;
					break;
				}
				else
				{
					cout << "Nope " << choice << " is not the right number" << endl;
					if (choice > secretNumber)
					{
						cout << "The secret number is smaller than the number you have choosen" << endl;
					}
					else
					{
						cout << "The secret number is greater than the number you have choosen" << endl;
					}
					choicesLeft--;
					cout << "Choices Left : " << choicesLeft << endl;
					if (choicesLeft == 0)
					{
						cout << "You couldn't find the number, it was " << secretNumber << " You LOSE YOU ARE A SORE LOSER" << endl;
					}
				}
			}
		}
		else
		{
		cout << "Wrong choice, Enter valid choice to play the game!(1, 2 or 3)" << endl;
		}
	}
}

void LifeChoices()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 2);
	
	//cout << "\n\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
	
	cout << "\n\t\t   |--|            |-----------------|  |-----------|  |-----------|";
	cout << "\n\t\t   |  |            |______    _______|  |   ________|  |  |--------|";
	cout << "\n\t\t   |  |                   |  |          |   |          |  |"; 
	cout << "\n\t\t   |  |                   |  |          |   |          |  |";
	cout << "\n\t\t   |  |                   |  |          |   -----|     |  ---------|";
	cout << "\n\t\t   |  |                   |  |          |   _____|     |  _________|";
	cout << "\n\t\t   |  |                   |  |          |   |          |  |";
	cout << "\n\t\t   |  ----------|  |------    -------|  |   |          |  |________|";
	cout << "\n\t\t   |____________|  |_________________|  |___|          |___________|" << endl;;
	cout << endl;
	cout << endl;
	cout << "\n|------------|  |--|       |--|  |---------|  |-----------------|  |------------|  |-----------|  |-----------|";
	cout << "\n|  __________|  |  |       |  |  |  _____  |  |______    _______|  |  __________|  |  |--------|  |  _________|";
	cout << "\n|  |            |  |       |  |  |  |   |  |         |  |          |  |            |  |           |  |";
	cout << "\n|  |            |  |       |  |  |  |   |  |         |  |          |  |            |  |           |  |";
	cout << "\n|  |            |  ---------  |  |  |   |  |         |  |          |  |            |  ---------|  |  ---------|";
	cout << "\n|  |            |  ---------  |  |  |   |  |         |  |          |  |            |  _________|  |________|  |";
	cout << "\n|  |            |  |       |  |  |  |   |  |         |  |          |  |            |  |                    |  |";
	cout << "\n|  |---------|  |  |       |  |  |  |___|  |  |------    -------|  |  |---------|  |  |________|  |--------|  |";
	cout << "\n|____________|  |__|       |__|  |_________|  |_________________|  |____________|  |___________|  |___________|" << endl;
	for (int i = 0; i < 78; i++)
	{
		cout << "* ";
	}
	cout << endl;
	SetConsoleTextAttribute(h, 7);
}

void SystemClear()
{
	_getch();
	system("cls");
}

void DeadBastard()
{
	system("cls");
	cout << "AS you didn't choose a suitable option you dide of brain hemorage due to the complex situation of your brain. It means YOU'RE A FOOL";
}

int main()
{
	string x;
	int a, z=3;
	
	LifeChoices();
	
	cout << "\nYoure Born at 2nd Feb on the year of 2000"<<endl;
	cout << "\nDecide what would be your name" << endl;
	cin >> x;
	cout << "\nWelcome to the world " << x << endl;
	cout << "\nStarting at Age 0" << endl;
	cout << "\nYour Mom and Dad looks at you cheerfully " << "\nChosse what type of toy you want to pick up" << "\n1. Baby Penguin\n2. Grab your Mom phone" << endl;
	while (true)
	{
		while(z>=0)
		{
			cout << "Choose 1 or 2" << endl;
			cin >> a;
			if (a == 1 || a == 2)
			{
				switch (a)
				{
				case 1:
					cout << "You turn out to be happy and cheerfull" << endl;
					SystemClear();
					cout << "\nStarting at Age 1" << endl;
					cout << "\nYour Mom and Dad looks at you cheerfully " << "\nChosse what you want to do" << "\n1. You slowly start to walk after crwaling\n2. You throw your toy away" << endl;
					do
					{
						cout << "Choose 1 or 2" << endl;
						a = 0;
						cin >> a;
						if (a == 1 || a == 2)
						{
							switch (a)
							{
							case 1:
								cout << "Your Mom and Dad turns out to be more joyfull and are happy to look at your 1st baby steps" << endl;
								SystemClear();
								cout << "\nStarting at Age 2" << endl;
								cout << "\nYour Mom and Dad looks at you cheerfully " << "\nChosse what you want to do" << "\n1. You say your first word - 'Momma'\n2. You say your first word - 'Papa'" << endl;
								do
							{
								cout << "Choose 1 or 2" << endl;
								a = 0;
								cin >> a;
								if (a == 1 || a == 2)
								{
									switch (a)
									{
									case 1:
										cout << "Your mom is happy to hear you say her name first but your father is a bit sad but nevertheless happy you spoke" << endl;
										
										cout << "\nStarting at Age 3" << endl;
										cout << "\nYour Mom and Dad ask you happily if you wanna go out for a walk" << "\nChosse what you want to do" << "\n1. You choose to go out with your mom\n2. You choose to go with your dad" << endl;
										do
										{
											cout << "Choose 1 or 2" << endl;
											a = 0;
											cin >> a;
											if (a == 1 || a == 2)
											{
												switch (a)
												{
												case 1:
													cout << "You tend to lean towards your mom a bit";
													
													cout << "\nStarting at Age 4" << endl;
													cout << "\nYour Mom and Dad asks if you wanna go out and play and make friends" << "\nChosse what you want to do" << "\n1. You choose to go out and play as they say\n2. You choose to stay within your house" << endl;
													do
													{
														cout << "Choose 1 or 2" << endl;
														a = 0;
														cin >> a;
														if (a == 1 || a == 2)
														{
															switch (a)
															{
															case 1:
																cout << "You made some new friends today out playing" << endl;
																
																cout << "\nStarting at Age 5" << endl;
																cout << "\nYour mom and dad discuss if they want to send you to school or not" << "\nChosse what you want to do" << "\n1. You choose to go out and attend school with your friends as they say\n2. You make a cute looking teary eyed face saying you don't wanna go and just play all day" << endl;
																do
																{
																	cout << "Choose 1 or 2" << endl;
																	a = 0;
																	cin >> a;
																	if (a == 1 || a == 2)
																	{
																		switch (a)
																		{
																		case 1:
																			cout << "You start attending school with Class KG and have seem to made some more new frnds" << endl;
																			
																			cout << "\nStarting at Age 6" << endl;
																			cout << "\nYou are now in Class 1 and you decide whether to foucus more on study or more in sports and extra curricular activities" << "\nChosse what you want to do" << "\n1. You decide to focus more on studies\n2. You decide to focus more on sports and extra curricular activities" << endl;
																			do
																			{
																				cout << "Choose 1 or 2" << endl;
																				a = 0;
																				cin >> a;
																				if (a == 1 || a == 2)
																				{
																					switch (a)
																					{
																					case 1:
																						cout << "You gonna turn out to be more nerdy in the future" << endl;
																						
																						cout << "\nStarting at Age 7" << endl;
																						cout << "\nYour are in Class 2 now decide if you still wanna focus on studies or on games" << "\nChosse what you want to do" << "\n1. You gonna stick with studies\n2. You still loves to play games and participate in extra cirricular activites" << endl;
																						do
																						{
																							cout << "Choose 1 or 2" << endl;
																							a = 0;
																							cin >> a;
																							if (a == 1 || a == 2)
																							{
																								switch (a)
																								{
																								case 1:
																									cout << "You are now learning about other stuff other than your studies from libraries- 'You are turnig more smarter'" << endl;
																									
																									cout << "\nStarting at Age 8" << endl;
																									cout << "\nYour are in Class 3 now and youre stuck between history or economy studies" << "\nChosse what you want to do" << "\n1. You gonna leanr more history about your ancestor and stuff\n2. You are gonna learn more money related things and learn how the country runs" << endl;
																									do
																									{
																										cout << "Choose 1 or 2" << endl;
																										a = 0;
																										cin >> a;
																										if (a == 1 || a == 2)
																										{
																											switch (a)
																											{
																											case 1:
																												cout << "Your mom and dad are happy as you turned out to be a genius" << endl;
																												break;
																											case 2:
																												cout << "Your mom and dad are happy as you turned out to be a genius" << endl;
																												break;
																											default:
																												break;
																											}
																										}
																										else
																										{
																											cout << "Choose the correct option" << endl;
																											z--;
																										}
																										a = 0;
																									} while (z >= 0);
																									cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																									break;
																								case 2:
																									cout << "You are turning to be a normal kid you loves to play and study both - 'You are just a normal kid'" << endl;
																									
																									cout << "\nStarting at Age 8" << endl;
																									cout << "You have now moved to Child Phase" << endl;
																									cout << "Your mon and dad gives you a console on your birthday" << "\n1. You decide to play on it.\n2. You decide to play it on a later time" << endl;
																									do
																									{
																										cout << "Choose 1 or 2" << endl;
																										a = 0;
																										cin >> a;
																										if (a == 1 || a == 2)
																										{
																											switch (a)
																											{
																											case 1:
																												//MazeGame();
																												break;
																											case 2:
																												cout << "You forgot about the console and move on with your life" << endl;
																											default:
																												break;
																											}
																										}
																										else
																										{
																											cout << "Choose the correct option" << endl;
																											z--;
																										}
																										a = 0;
																									} while (z >= 0);
																									cout << "You just missed a big oppurtunity but anyways as you didn't choose anything I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																									break;
																								default:
																									break;
																								}
																							}
																							else
																							{
																								cout << "Choose the correct option" << endl;
																								z--;
																							}
																							a = 0;
																						}while(z >= 0);
																						cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;
																						break;
																						break;
																					case 2:
																						cout << "You're gonna turn out to be active in physical activity making you more popular in school" << endl;
																						system("cls");
																						cout << "\nStarting at Age 7" << endl;
																						cout << "\nYour are in Class 2 now decide if you still wanna focus on studies or on games" << "\nChosse what you want to do" << "\n1. You gonna start with studies\n2. You still loves to play games and participate in extra cirricular activites" << endl;
																						do
																						{
																							cout << "Choose 1 or 2" << endl;
																							a = 0;
																							cin >> a;
																							if (a == 1 || a == 2)
																							{
																								switch (a)
																								{
																								case 1: 
																									cout << "You are turning to be a normal kid you loves to play and study both - 'You are just a normal kid'" << endl;
																									system("cls");
																									cout << "\nStarting at Age 8" << endl;
																									cout << "You have now moved to Child Phase" << endl;
																									cout << "Your mon and dad gives you a console on your birthday" << "\n1. You decide to play on it.\n2. You decide to play it on a later time" << endl;
																									do
																									{
																										cout << "Choose 1 or 2" << endl;
																										a = 0;
																										cin >> a;
																										if (a == 1 || a == 2)
																										{
																											switch (a)
																											{
																											case 1:
																												MazeGame();
																												break;
																											case 2:
																												cout << "You forgot about the console and move on with your life" << endl;
																											default:
																												break;
																											}
																										}
																										else
																										{
																											cout << "Choose the correct option" << endl;
																											z--;
																										}
																										a = 0;
																									} while (z >= 0);
																									cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																									break;
																								case 2:
																									cout << "Your mom and dad worry a bit that you are still not studying but nevertheless are happy that you are active atleast" << endl;
																									system("cls");
																									cout << "\nStarting at Age 8" << endl;
																									cout << "You have now moved to Child Phase" << endl;
																									cout << "Your mon and dad gives you a console on your birthday" << "\n1. You decide to play on it.\n2. You decide to play it on a later time" << endl;
																									do
																									{
																										cout << "Choose 1 or 2" << endl;
																										a = 0;
																										cin >> a;
																										if (a == 1 || a == 2)
																										{
																											switch (a)
																											{
																											case 1:
																												MazeGame();
																												break;
																											case 2:
																												cout << "You forgot about the console and move on with your life" << endl;
																											default:
																												break;
																											}
																										}
																										else
																										{
																											cout << "Choose the correct option" << endl;
																											z--;
																										}
																										a = 0;
																									} while (z >= 0);
																									cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;
																									
																									break;
																								default:
																									break;
																								}
																							}
																							else
																							{
																								cout << "Choose the correct option" << endl;
																								z--;
																							}
																							a = 0;
																						} while (z >= 0);
																						cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;
																						break;
																					default:
																						break;
																					}
																				}
																				else
																				{
																					cout << "Choose the correct option" << endl;
																					z--;
																				}
																				a = 0;
																			} while (z >= 0);
																			cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																			break;
																		case 2:
																			cout << "Your mom and dad discuss about it and decide just to wait for a year before sending him to school" << endl;
																			system("cls");
																			cout << "\nStarting at Age 6" << endl;
																			cout << "\nYour mom and dad asks something of you" << "\nChoose what you want to do" << "\n1. You decide to study in school from now. \2. You decide to take up study up in home" << endl;
																			do
																			{
																				cout << "Choose 1 or 2" << endl;
																				a = 0;
																				cin >> a;
																				if (a == 1 || a == 2)
																				{
																					switch (a)
																					{
																					case 1:
																						cout << "You gonna turn out to be more nerdy in the future" << endl;
																						system("cls");
																						cout << "\nStarting at Age 7" << endl;
																						cout << "\nYour are in Class 2 now decide if you still wanna focus on studies or on games" << "\nChosse what you want to do" << "\n1. You gonna stick with studies\n2. You still loves to play games and participate in extra cirricular activites" << endl;
																						do
																						{
																							cout << "Choose 1 or 2" << endl;
																							a = 0;
																							cin >> a;
																							if (a == 1 || a == 2)
																							{
																								switch (a)
																								{
																								case 1:
																									cout << "You are now learning about other stuff other than your studies from libraries- 'You are turnig more smarter'" << endl;
																									system("cls");
																									cout << "\nStarting at Age 8" << endl;
																									cout << "\nYour are in Class 3 now and youre stuck between history or economy studies" << "\nChosse what you want to do" << "\n1. You gonna leanr more history about your ancestor and stuff\n2. You are gonna learn more money related things and learn how the country runs" << endl;
																									do
																									{
																										cout << "Choose 1 or 2" << endl;
																										a = 0;
																										cin >> a;
																										if (a == 1 || a == 2)
																										{
																											switch (a)
																											{
																											case 1:
																												cout << "Your mom and dad are happy as you turned out to be a genius" << endl;
																												break;
																											case 2:
																												cout << "Your mom and dad are happy as you turned out to be a genius" << endl;
																												break;
																											default:
																												break;
																											}
																										}
																										else
																										{
																											cout << "Choose the correct option" << endl;
																											z--;
																										}
																										a = 0;
																									} while (z >= 0);
																									cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																									break;
																								case 2:
																									cout << "You are turning to be a normal kid you loves to play and study both - 'You are just a normal kid'" << endl;
																									system("cls");
																									cout << "\nStarting at Age 8" << endl;
																									cout << "You have now moved to Child Phase" << endl;
																									cout << "Your mon and dad gives you a console on your birthday" << "\n1. You decide to play on it.\n2. You decide to play it on a later time" << endl;
																									do
																									{
																										cout << "Choose 1 or 2" << endl;
																										a = 0;
																										cin >> a;
																										if (a == 1 || a == 2)
																										{
																											switch (a)
																											{
																											case 1:
																												Numberguess();
																												if (secretNumber == 2004)
																												{
																													cout << "\nYou have moved from baby to child phase" << endl;
																													system("cls");
																													cout << "\nStarting at Age 9" << endl;
																												}

																												break;
																											case 2:
																												cout << "You forgot about the console and move on with your life" << endl;
																											default:
																												break;
																											}
																										}
																										else
																										{
																											cout << "Choose the correct option" << endl;
																											z--;
																										}
																										a = 0;
																									} while (z >= 0);
																									cout << "You just missed a big oppurtunity but anyways as you didn't choose anything I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																									break;
																								default:
																									break;
																								}
																							}
																							else
																							{
																								cout << "Choose the correct option" << endl;
																								z--;
																							}
																							a = 0;
																						} while (z >= 0);
																						cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;
																					}
																				}
																				else
																				{
																					cout << "Choose the correct option" << endl;
																					z--;
																				}
																				a = 0;
																			} while (z >= 0);

																			break;
																		default:
																			break;
																		}
																	}
																	else
																	{
																		cout << "Choose the correct option" << endl;
																		z--;
																	}
																	a = 0;
																} while (z >= 0);
																cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																break;
															case 2:
																cout << "Your mom and dad are a bit worried of you not going out and making friends" << endl;
																system("cls");
																cout << "\nStarting at Age 5" << endl;
																break;
															default:
																break;
															}
														}
														else
														{
															cout << "Choose the correct option" << endl;
															z--;
														}
														a = 0;
													} while (z >= 0);
													cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

													break;
												case 2:
													cout << "You tends to lean both towards you mom and dad";
													system("cls");
													cout << "\nStarting at Age 4" << endl;
													break;
												default:
													break;
												}
											}
											else
											{
												cout << "Choose the correct option" << endl;
												z--;
											}
											a = 0;
										} while (z >= 0);
										cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;
										break;
									case 2:
										cout << "Your father is happy to hear you say his name first but your mom is a bit sad but nevertheless happy you spoke" << endl;
										system("cls");
										cout << "\nStarting at Age 3" << endl;
										break;
									default:
										break;
									}
								}
								else
								{
									cout << "Choose the correct option" << endl;
									z--;
								}
								a = 0;
							} while (z >= 0);
								break;
								break;
							case 2:
								cout << "Your mom and dad looks confused at why you throw it away and think maybe you want another toy so they buy you a new one" << endl;
								SystemClear();
								cout << "\nStarting at Age 2" << endl;
								cout << "\nYour Mom and Dad looks at you cheerfully " << "\nChosse what you want to do" << "\n1. You slowly start to walk after crwaling\n2. You throw away the toy again" << endl;
								do
							{
								cout << "Choose 1 or 2" << endl;
								a = 0;
								cin >> a;
								if (a == 1 || a == 2)
								{
									switch (a)
									{
									case 1:
										break;
									case 2:
										break;
									}
								}
								else
								{
									cout << "Choose the correct option" << endl;
									z--;
								}
								a = 0;
							} while (z >= 0);
								cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;
								break;
							default:
								break;
							}
						}
						else
						{
							cout << "Choose the correct option" << endl;
							z--;
						}
						a = 0;
					} while (z >= 0);
					break;
					break;
				case 2:
					cout << "You annoy your mom a bit" << endl;
					SystemClear();
					cout << "\nStarting at Age 1" << endl;
					cout << "\nYour Dad looks at you cheerfully but mom a bit annoyingly but still hoping for best" << "\nChosse what you want to do" << "\n1. You throw your dad phone\n2. You slowly start to walk after crawling" << endl;
					do
				{
					cout << "Choose 1 or 2" << endl;
					cin >> a;
					if (a == 1 || a == 2)
					{
						switch (a)
						{
						case 1:
							cout << "Both your mom and dad got annoyed by you throwing thier phone" << endl;
							SystemClear();
							cout << "\nStarting at Age 2" << endl;
							cout << "\nYour mom and dad looks at you annoyingly" << "\nChoose what you want to do" << "\n1. You slowly start to walk after crwaling\2. You pick up the home telephone and throws it away" << endl;
							do
							{
								cout << "Your Mom and Dad turns out to be more joyfull and are happy to look at your 1st baby steps" << endl;
								SystemClear();
								cout << "\nStarting at Age 3" << endl;
								cout << "\nYour Mom and Dad looks at you cheerfully " << "\nChosse what you want to do" << "\n1. You say your first word - 'Momma'\n2. You say your first word - 'Papa'" << endl;
								do
								{
									cout << "Choose 1 or 2" << endl;
									a = 0;
									cin >> a;
									if (a == 1 || a == 2)
									{
										switch (a)
										{
										case 1:
											cout << "Your mom is happy to hear you say her name first but your father is a bit sad but nevertheless happy you spoke" << endl;
											SystemClear();
											cout << "\nStarting at Age 4" << endl;
											cout << "\nYour Mom and Dad ask you happily if you wanna go out for a walk" << "\nChosse what you want to do" << "\n1. You choose to go out with your mom\n2. You choose to go with your dad" << endl;
											do
											{
												cout << "Choose 1 or 2" << endl;
												a = 0;
												cin >> a;
												if (a == 1 || a == 2)
												{
													switch (a)
													{
													case 1:
														cout << "You tend to lean towards your mom a bit";
														SystemClear();
														cout << "\nStarting at Age 5" << endl;
														cout << "\nYour Mom and Dad asks if you wanna go out and play and make friends" << "\nChosse what you want to do" << "\n1. You choose to go out and play as they say\n2. You choose to stay within your house" << endl;
														do
														{
															cout << "Choose 1 or 2" << endl;
															a = 0;
															cin >> a;
															if (a == 1 || a == 2)
															{
																switch (a)
																{
																case 1:
																	cout << "You made some new friends today out playing" << endl;
																	SystemClear();
																	cout << "\nStarting at Age 6" << endl;
																	cout << "\nYour mom and dad discuss if they want to send you to school or not" << "\nChosse what you want to do" << "\n1. You choose to go out and attend school with your friends as they say\n2. You make a cute looking teary eyed face saying you don't wanna go and just play all day" << endl;
																	do
																	{
																		cout << "Choose 1 or 2" << endl;
																		a = 0;
																		cin >> a;
																		if (a == 1 || a == 2)
																		{
																			switch (a)
																			{
																			case 1:
																				cout << "You start attending school with Class KG and have seem to made some more new frnds" << endl;
																				SystemClear();
																				cout << "\nStarting at Age 7" << endl;
																				cout << "\nYou are now in Class 1 and you decide whether to foucus more on study or more in sports and extra curricular activities" << "\nChosse what you want to do" << "\n1. You decide to focus more on studies\n2. You decide to focus more on sports and extra curricular activities" << endl;
																				do
																				{
																					cout << "Choose 1 or 2" << endl;
																					a = 0;
																					cin >> a;
																					if (a == 1 || a == 2)
																					{
																						switch (a)
																						{
																						case 1:
																							cout << "You gonna turn out to be more nerdy in the future" << endl;
																							SystemClear();
																							cout << "\nStarting at Age 8" << endl;
																							cout << "\nYour are in Class 2 now decide if you still wanna focus on studies or on games" << "\nChosse what you want to do" << "\n1. You gonna stick with studies\n2. You still loves to play games and participate in extra cirricular activites" << endl;
																							do
																							{
																								cout << "Choose 1 or 2" << endl;
																								a = 0;
																								cin >> a;
																								if (a == 1 || a == 2)
																								{
																									switch (a)
																									{
																									case 1:
																										cout << "You are now learning about other stuff other than your studies from libraries- 'You are turnig more smarter'" << endl;
																										SystemClear();
																										cout << "\nStarting at Age 9" << endl;
																										cout << "\nYour are in Class 3 now and youre stuck between history or economy studies" << "\nChosse what you want to do" << "\n1. You gonna leanr more history about your ancestor and stuff\n2. You are gonna learn more money related things and learn how the country runs" << endl;
																										do
																										{
																											cout << "Choose 1 or 2" << endl;
																											a = 0;
																											cin >> a;
																											if (a == 1 || a == 2)
																											{
																												switch (a)
																												{
																												case 1:
																													cout << "Your mom and dad are happy as you turned out to be a genius" << endl;
																													break;
																												case 2:
																													cout << "Your mom and dad are happy as you turned out to be a genius" << endl;
																													break;
																												default:
																													break;
																												}
																											}
																											else
																											{
																												cout << "Choose the correct option" << endl;
																												z--;
																											}
																											a = 0;
																										} while (z >= 0);
																										cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																										break;
																									case 2:
																										cout << "You are turning to be a normal kid you loves to play and study both - 'You are just a normal kid'" << endl;
																										SystemClear();
																										cout << "\nStarting at Age 9" << endl;
																										cout << "You have now moved to Child Phase" << endl;
																										cout << "Your mon and dad gives you a console on your birthday" << "\n1. You decide to play on it.\n2. You decide to play it on a later time" << endl;
																										do
																										{
																											cout << "Choose 1 or 2" << endl;
																											a = 0;
																											cin >> a;
																											if (a == 1 || a == 2)
																											{
																												switch (a)
																												{
																												case 1:
																													//MazeGame();
																													Numberguess();
																													if (secretNumber == 2004)
																													{
																														cout << "You have succesfully cleared the game" << endl;
																														cout << "\nStarting at Age 10" << endl;
																														cout << "You have succesfully cleared the pre Alpha stage of the game come after 4 months for the full game and don't forget to follow me on my Insta @debnityd.gupta" << endl;
																													}
																													break;
																												case 2:
																													cout << "You forgot about the console and move on with your life" << endl;
																												default:
																													break;
																												}
																											}
																											else
																											{
																												cout << "Choose the correct option" << endl;
																												z--;
																											}
																											a = 0;
																										} while (z >= 0);
																										cout << "You just missed a big oppurtunity but anyways as you didn't choose anything I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																										break;
																									default:
																										break;
																									}
																								}
																								else
																								{
																									cout << "Choose the correct option" << endl;
																									z--;
																								}
																								a = 0;
																							} while (z >= 0);
																							cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;
																							break;
																							break;
																						case 2:
																							cout << "You're gonna turn out to be active in physical activity making you more popular in school" << endl;
																							SystemClear();
																							cout << "\nStarting at Age 8" << endl;
																							cout << "\nYour are in Class 2 now decide if you still wanna focus on studies or on games" << "\nChosse what you want to do" << "\n1. You gonna start with studies\n2. You still loves to play games and participate in extra cirricular activites" << endl;
																							do
																							{
																								cout << "Choose 1 or 2" << endl;
																								a = 0;
																								cin >> a;
																								if (a == 1 || a == 2)
																								{
																									switch (a)
																									{
																									case 1:
																										cout << "You are turning to be a normal kid you loves to play and study both - 'You are just a normal kid'" << endl;
																										SystemClear();
																										cout << "\nStarting at Age 9" << endl;
																										cout << "You have now moved to Child Phase" << endl;
																										cout << "Your mon and dad gives you a console on your birthday" << "\n1. You decide to play on it.\n2. You decide to play it on a later time" << endl;
																										do
																										{
																											cout << "Choose 1 or 2" << endl;
																											a = 0;
																											cin >> a;
																											if (a == 1 || a == 2)
																											{
																												switch (a)
																												{
																												case 1:
																													//MazeGame();
																													Numberguess();
																													if (secretNumber == 2004)
																													{
																														cout << "You have succesfully cleared the game" << endl;
																														SystemClear();
																														cout << "\nStarting at Age 10" << endl;
																														cout << "You have succesfully cleared the pre Alpha stage of the game come after 4 months for the full game and don't forget to follow me on my Insta @debnityd.gupta" << endl;
																													}
																													break;
																												case 2:
																													cout << "You forgot about the console and move on with your life" << endl;
																												default:
																													break;
																												}
																											}
																											else
																											{
																												cout << "Choose the correct option" << endl;
																												z--;
																											}
																											a = 0;
																										} while (z >= 0);
																										cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																										break;
																									case 2:
																										cout << "Your mom and dad worry a bit that you are still not studying but nevertheless are happy that you are active atleast" << endl;
																										SystemClear();
																										cout << "\nStarting at Age 9" << endl;
																										cout << "You have now moved to Child Phase" << endl;
																										cout << "Your mon and dad gives you a console on your birthday" << "\n1. You decide to play on it.\n2. You decide to play it on a later time" << endl;
																										do
																										{
																											cout << "Choose 1 or 2" << endl;
																											a = 0;
																											cin >> a;
																											if (a == 1 || a == 2)
																											{
																												switch (a)
																												{
																												case 1:
																													//MazeGame();
																													Numberguess();
																													if (secretNumber == 2004)
																													{
																														cout << "You have succesfully cleared the game" << endl;
																														SystemClear();
																														cout << "\nStarting at Age 10" << endl;
																														cout << "You have succesfully cleared the pre Alpha stage of the game come after 4 months for the full game and don't forget to follow me on my Insta @debnityd.gupta" << endl;
																													}
																													break;
																												case 2:
																													cout << "You forgot about the console and move on with your life" << endl;
																												default:
																													break;
																												}
																											}
																											else
																											{
																												cout << "Choose the correct option" << endl;
																												z--;
																											}
																											a = 0;
																										} while (z >= 0);
																										cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																										break;
																									default:
																										break;
																									}
																								}
																								else
																								{
																									cout << "Choose the correct option" << endl;
																									z--;
																								}
																								a = 0;
																							} while (z >= 0);
																							cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;
																							break;
																						default:
																							break;
																						}
																					}
																					else
																					{
																						cout << "Choose the correct option" << endl;
																						z--;
																					}
																					a = 0;
																				} while (z >= 0);
																				cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																				break;
																			case 2:
																				cout << "Your mom and dad discuss about it and decide just to wait for a year before sending him to school" << endl;
																				system("cls");
																				cout << "\nStarting at Age 7" << endl;
																				cout << "\nYour mom and dad asks something of you" << "\nChoose what you want to do" << "\n1. You decide to study in school from now. \2. You decide to take up study up in home" << endl;
																				do
																				{
																					cout << "Choose 1 or 2" << endl;
																					a = 0;
																					cin >> a;
																					if (a == 1 || a == 2)
																					{
																						switch (a)
																						{
																						case 1:
																							cout << "You gonna turn out to be more nerdy in the future" << endl;
																							SystemClear();
																							cout << "\nStarting at Age 8" << endl;
																							cout << "\nYour are in Class 2 now decide if you still wanna focus on studies or on games" << "\nChosse what you want to do" << "\n1. You gonna stick with studies\n2. You still loves to play games and participate in extra cirricular activites" << endl;
																							do
																							{
																								cout << "Choose 1 or 2" << endl;
																								a = 0;
																								cin >> a;
																								if (a == 1 || a == 2)
																								{
																									switch (a)
																									{
																									case 1:
																										cout << "You are now learning about other stuff other than your studies from libraries- 'You are turnig more smarter'" << endl;
																										SystemClear();
																										cout << "\nStarting at Age 9" << endl;
																										cout << "\nYour are in Class 3 now and youre stuck between history or economy studies" << "\nChosse what you want to do" << "\n1. You gonna leanr more history about your ancestor and stuff\n2. You are gonna learn more money related things and learn how the country runs" << endl;
																										do
																										{
																											cout << "Choose 1 or 2" << endl;
																											a = 0;
																											cin >> a;
																											if (a == 1 || a == 2)
																											{
																												switch (a)
																												{
																												case 1:
																													cout << "Your mom and dad are happy as you turned out to be a genius" << endl;
																													SystemClear();
																													cout << "\nStarting at Age 10" << endl;
																													cout << "You have succesfully cleared the pre Alpha stage of the game come after 4 months for the full game and don't forget to follow me on my Insta @debnityd.gupta" << endl;
																													break;
																												case 2:
																													cout << "Your mom and dad are happy as you turned out to be a genius" << endl;
																													SystemClear();
																													cout << "\nStarting at Age 10" << endl;
																													cout << "You have succesfully cleared the pre Alpha stage of the game come after 4 months for the full game and don't forget to follow me on my Insta @debnityd.gupta" << endl;
																													break;
																												default:
																													break;
																												}
																											}
																											else
																											{
																												cout << "Choose the correct option" << endl;
																												z--;
																											}
																											a = 0;
																										} while (z >= 0);
																										cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																										break;
																									case 2:
																										cout << "You are turning to be a normal kid you loves to play and study both - 'You are just a normal kid'" << endl;
																										cout << "\nStarting at Age 9" << endl;
																										cout << "You have now moved to Child Phase" << endl;
																										cout << "Your mon and dad gives you a console on your birthday" << "\n1. You decide to play on it.\n2. You decide to play it on a later time" << endl;
																										do
																										{
																											cout << "Choose 1 or 2" << endl;
																											a = 0;
																											cin >> a;
																											if (a == 1 || a == 2)
																											{
																												switch (a)
																												{
																												case 1:
																													//MazeGame();
																													Numberguess();
																													if (secretNumber == 2004)
																													{
																														cout << "You have succesfully cleared the game" << endl;
																														SystemClear();
																														cout << "\nStarting at Age 10" << endl;
																														cout << "You have succesfully cleared the pre Alpha stage of the game come after 4 months for the full game and don't forget to follow me on my Insta @debnityd.gupta" << endl;
																													}
																													break;
																												case 2:
																													cout << "You forgot about the console and move on with your life" << endl;
																													SystemClear();
																													cout << "\nStarting at Age 10" << endl;
																													cout << "You have succesfully cleared the pre Alpha stage of the game come after 4 months for the full game and don't forget to follow me on my Insta @debnityd.gupta" << endl;
																												default:
																													break;
																												}
																											}
																											else
																											{
																												cout << "Choose the correct option" << endl;
																												z--;
																											}
																											a = 0;
																										} while (z >= 0);
																										cout << "You just missed a big oppurtunity but anyways as you didn't choose anything I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																										break;
																									default:
																										break;
																									}
																								}
																								else
																								{
																									cout << "Choose the correct option" << endl;
																									z--;
																								}
																								a = 0;
																							} while (z >= 0);
																							cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;
																							break;
																						case 2:
																							break;
																						}
																					}
																					else
																					{
																						cout << "Choose the correct option" << endl;
																						z--;
																					}
																					a = 0;
																				} while (z >= 0);

																				break;
																			default:
																				break;
																			}
																		}
																		else
																		{
																			cout << "Choose the correct option" << endl;
																			z--;
																		}
																		a = 0;
																	} while (z >= 0);
																	cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																	break;
																case 2:
																	cout << "Your mom and dad are a bit worried of you not going out and making friends" << endl;
																	cout << "\nStarting at Age 6" << endl;
																	cout << "\nYour Mom and Dad asks if you wanna go out and play and make friends" << "\nChosse what you want to do" << "\n1. You choose to go out and play as they say\n2. You choose to stay within your house" << endl;
																	do
																	{
																		cout << "Choose 1 or 2" << endl;
																		a = 0;
																		cin >> a;
																		if (a == 1 || a == 2)
																		{
																			switch (a)
																			{
																			case 1:
																				cout << "You made some new friends today out playing" << endl;
																				SystemClear();
																				cout << "\nStarting at Age 6" << endl;
																				cout << "\nYour mom and dad discuss if they want to send you to school or not" << "\nChosse what you want to do" << "\n1. You choose to go out and attend school with your friends as they say\n2. You make a cute looking teary eyed face saying you don't wanna go and just play all day" << endl;
																				do
																				{
																					cout << "Choose 1 or 2" << endl;
																					a = 0;
																					cin >> a;
																					if (a == 1 || a == 2)
																					{
																						switch (a)
																						{
																						case 1:
																							cout << "You start attending school with Class KG and have seem to made some more new frnds" << endl;
																							SystemClear();
																							cout << "\nStarting at Age 7" << endl;
																							cout << "\nYou are now in Class 1 and you decide whether to foucus more on study or more in sports and extra curricular activities" << "\nChosse what you want to do" << "\n1. You decide to focus more on studies\n2. You decide to focus more on sports and extra curricular activities" << endl;
																							do
																							{
																								cout << "Choose 1 or 2" << endl;
																								a = 0;
																								cin >> a;
																								if (a == 1 || a == 2)
																								{
																									switch (a)
																									{
																									case 1:
																										cout << "You gonna turn out to be more nerdy in the future" << endl;
																										SystemClear();
																										cout << "\nStarting at Age 8" << endl;
																										cout << "\nYour are in Class 2 now decide if you still wanna focus on studies or on games" << "\nChosse what you want to do" << "\n1. You gonna stick with studies\n2. You still loves to play games and participate in extra cirricular activites" << endl;
																										do
																										{
																											cout << "Choose 1 or 2" << endl;
																											a = 0;
																											cin >> a;
																											if (a == 1 || a == 2)
																											{
																												switch (a)
																												{
																												case 1:
																													cout << "You are now learning about other stuff other than your studies from libraries- 'You are turnig more smarter'" << endl;
																													SystemClear();
																													cout << "\nStarting at Age 9" << endl;
																													cout << "\nYour are in Class 3 now and youre stuck between history or economy studies" << "\nChosse what you want to do" << "\n1. You gonna leanr more history about your ancestor and stuff\n2. You are gonna learn more money related things and learn how the country runs" << endl;
																													do
																													{
																														cout << "Choose 1 or 2" << endl;
																														a = 0;
																														cin >> a;
																														if (a == 1 || a == 2)
																														{
																															switch (a)
																															{
																															case 1:
																																cout << "Your mom and dad are happy as you turned out to be a genius" << endl;
																																break;
																															case 2:
																																cout << "Your mom and dad are happy as you turned out to be a genius" << endl;
																																break;
																															default:
																																break;
																															}
																														}
																														else
																														{
																															cout << "Choose the correct option" << endl;
																															z--;
																														}
																														a = 0;
																													} while (z >= 0);
																													cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																													break;
																												case 2:
																													cout << "You are turning to be a normal kid you loves to play and study both - 'You are just a normal kid'" << endl;
																													SystemClear();
																													cout << "\nStarting at Age 9" << endl;
																													cout << "You have now moved to Child Phase" << endl;
																													cout << "Your mon and dad gives you a console on your birthday" << "\n1. You decide to play on it.\n2. You decide to play it on a later time" << endl;
																													do
																													{
																														cout << "Choose 1 or 2" << endl;
																														a = 0;
																														cin >> a;
																														if (a == 1 || a == 2)
																														{
																															switch (a)
																															{
																															case 1:
																																//MazeGame();
																																Numberguess();
																																if (secretNumber == 2004)
																																{
																																	cout << "You have succesfully cleared the game" << endl;
																																	SystemClear();
																																	cout << "\nStarting at Age 10" << endl;
																																	cout << "You have succesfully cleared the pre Alpha stage of the game come after 4 months for the full game and don't forget to follow me on my Insta @debnityd.gupta" << endl;
																																}
																																break;
																															case 2:
																																cout << "You forgot about the console and move on with your life" << endl;
																																SystemClear();
																																cout << "\nStarting at Age 10" << endl;
																																cout << "You have succesfully cleared the pre Alpha stage of the game come after 4 months for the full game and don't forget to follow me on my Insta @debnityd.gupta" << endl;
																															default:
																																break;
																															}
																														}
																														else
																														{
																															cout << "Choose the correct option" << endl;
																															z--;
																														}
																														a = 0;
																													} while (z >= 0);
																													cout << "You just missed a big oppurtunity but anyways as you didn't choose anything I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																													break;
																												default:
																													break;
																												}
																											}
																											else
																											{
																												cout << "Choose the correct option" << endl;
																												z--;
																											}
																											a = 0;
																										} while (z >= 0);
																										cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;
																										break;
																										break;
																									case 2:
																										cout << "You're gonna turn out to be active in physical activity making you more popular in school" << endl;
																										SystemClear();
																										cout << "\nStarting at Age 8" << endl;
																										cout << "\nYour are in Class 2 now decide if you still wanna focus on studies or on games" << "\nChosse what you want to do" << "\n1. You gonna start with studies\n2. You still loves to play games and participate in extra cirricular activites" << endl;
																										do
																										{
																											cout << "Choose 1 or 2" << endl;
																											a = 0;
																											cin >> a;
																											if (a == 1 || a == 2)
																											{
																												switch (a)
																												{
																												case 1:
																													cout << "You are turning to be a normal kid you loves to play and study both - 'You are just a normal kid'" << endl;
																													SystemClear();
																													cout << "\nStarting at Age 9" << endl;
																													cout << "You have now moved to Child Phase" << endl;
																													cout << "Your mon and dad gives you a console on your birthday" << "\n1. You decide to play on it.\n2. You decide to play it on a later time" << endl;
																													do
																													{
																														cout << "Choose 1 or 2" << endl;
																														a = 0;
																														cin >> a;
																														if (a == 1 || a == 2)
																														{
																															switch (a)
																															{
																															case 1:
																																//MazeGame();
																																Numberguess();
																																if (secretNumber == 2004)
																																{
																																	cout << "You have succesfully cleared the game" << endl;
																																	SystemClear();
																																	cout << "\nStarting at Age 10" << endl;
																																	cout << "You have succesfully cleared the pre Alpha stage of the game come after 4 months for the full game and don't forget to follow me on my Insta @debnityd.gupta" << endl;
																																}
																																break;
																															case 2:
																																cout << "You forgot about the console and move on with your life" << endl;
																															default:
																																break;
																															}
																														}
																														else
																														{
																															cout << "Choose the correct option" << endl;
																															z--;
																														}
																														a = 0;
																													} while (z >= 0);
																													cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																													break;
																												case 2:
																													cout << "Your mom and dad worry a bit that you are still not studying but nevertheless are happy that you are active atleast" << endl;
																													SystemClear();
																													cout << "\nStarting at Age 9" << endl;
																													cout << "You have now moved to Child Phase" << endl;
																													cout << "Your mon and dad gives you a console on your birthday" << "\n1. You decide to play on it.\n2. You decide to play it on a later time" << endl;
																													do
																													{
																														cout << "Choose 1 or 2" << endl;
																														a = 0;
																														cin >> a;
																														if (a == 1 || a == 2)
																														{
																															switch (a)
																															{
																															case 1:
																																//MazeGame();
																																Numberguess();
																																if (secretNumber == 2004)
																																{
																																	cout << "You have succesfully cleared the game" << endl;
																																	SystemClear();
																																	cout << "\nStarting at Age 10" << endl;
																																	cout << "You have succesfully cleared the pre Alpha stage of the game come after 4 months for the full game and don't forget to follow me on my Insta @debnityd.gupta" << endl;
																																}
																																break;
																															case 2:
																																cout << "You forgot about the console and move on with your life" << endl;
																															default:
																																break;
																															}
																														}
																														else
																														{
																															cout << "Choose the correct option" << endl;
																															z--;
																														}
																														a = 0;
																													} while (z >= 0);
																													cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																													break;
																												default:
																													break;
																												}
																											}
																											else
																											{
																												cout << "Choose the correct option" << endl;
																												z--;
																											}
																											a = 0;
																										} while (z >= 0);
																										cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;
																										break;
																									default:
																										break;
																									}
																								}
																								else
																								{
																									cout << "Choose the correct option" << endl;
																									z--;
																								}
																								a = 0;
																							} while (z >= 0);
																							cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																							break;
																						case 2:
																							cout << "Your mom and dad discuss about it and decide just to wait for a year before sending him to school" << endl;
																							system("cls");
																							cout << "\nStarting at Age 7" << endl;
																							cout << "\nYour mom and dad asks something of you" << "\nChoose what you want to do" << "\n1. You decide to study in school from now. \2. You decide to take up study up in home" << endl;
																							do
																							{
																								cout << "Choose 1 or 2" << endl;
																								a = 0;
																								cin >> a;
																								if (a == 1 || a == 2)
																								{
																									switch (a)
																									{
																									case 1:
																										cout << "You gonna turn out to be more nerdy in the future" << endl;
																										SystemClear();
																										cout << "\nStarting at Age 8" << endl;
																										cout << "\nYour are in Class 2 now decide if you still wanna focus on studies or on games" << "\nChosse what you want to do" << "\n1. You gonna stick with studies\n2. You still loves to play games and participate in extra cirricular activites" << endl;
																										do
																										{
																											cout << "Choose 1 or 2" << endl;
																											a = 0;
																											cin >> a;
																											if (a == 1 || a == 2)
																											{
																												switch (a)
																												{
																												case 1:
																													cout << "You are now learning about other stuff other than your studies from libraries- 'You are turnig more smarter'" << endl;
																													SystemClear();
																													cout << "\nStarting at Age 9" << endl;
																													cout << "\nYour are in Class 3 now and youre stuck between history or economy studies" << "\nChosse what you want to do" << "\n1. You gonna leanr more history about your ancestor and stuff\n2. You are gonna learn more money related things and learn how the country runs" << endl;
																													do
																													{
																														cout << "Choose 1 or 2" << endl;
																														a = 0;
																														cin >> a;
																														if (a == 1 || a == 2)
																														{
																															switch (a)
																															{
																															case 1:
																																cout << "Your mom and dad are happy as you turned out to be a genius" << endl;
																																SystemClear();
																																cout << "\nStarting at Age 10" << endl;
																																cout << "You have succesfully cleared the pre Alpha stage of the game come after 4 months for the full game and don't forget to follow me on my Insta @debnityd.gupta" << endl;
																																break;
																															case 2:
																																cout << "Your mom and dad are happy as you turned out to be a genius" << endl;
																																SystemClear();
																																cout << "\nStarting at Age 10" << endl;
																																cout << "You have succesfully cleared the pre Alpha stage of the game come after 4 months for the full game and don't forget to follow me on my Insta @debnityd.gupta" << endl;
																																break;
																															default:
																																break;
																															}
																														}
																														else
																														{
																															cout << "Choose the correct option" << endl;
																															z--;
																														}
																														a = 0;
																													} while (z >= 0);
																													cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																													break;
																												case 2:
																													cout << "You are turning to be a normal kid you loves to play and study both - 'You are just a normal kid'" << endl;
																													cout << "\nStarting at Age 9" << endl;
																													cout << "You have now moved to Child Phase" << endl;
																													cout << "Your mon and dad gives you a console on your birthday" << "\n1. You decide to play on it.\n2. You decide to play it on a later time" << endl;
																													do
																													{
																														cout << "Choose 1 or 2" << endl;
																														a = 0;
																														cin >> a;
																														if (a == 1 || a == 2)
																														{
																															switch (a)
																															{
																															case 1:
																																//MazeGame();
																																Numberguess();
																																if (secretNumber == 2004)
																																{
																																	cout << "You have succesfully cleared the game" << endl;
																																	SystemClear();
																																	cout << "\nStarting at Age 10" << endl;
																																	cout << "You have succesfully cleared the pre Alpha stage of the game come after 4 months for the full game and don't forget to follow me on my Insta @debnityd.gupta" << endl;
																																}
																																break;
																															case 2:
																																cout << "You forgot about the console and move on with your life" << endl;
																																SystemClear();
																																cout << "\nStarting at Age 10" << endl;
																																cout << "You have succesfully cleared the pre Alpha stage of the game come after 4 months for the full game and don't forget to follow me on my Insta @debnityd.gupta" << endl;
																															default:
																																break;
																															}
																														}
																														else
																														{
																															cout << "Choose the correct option" << endl;
																															z--;
																														}
																														a = 0;
																													} while (z >= 0);
																													cout << "You just missed a big oppurtunity but anyways as you didn't choose anything I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																													break;
																												default:
																													break;
																												}
																											}
																											else
																											{
																												cout << "Choose the correct option" << endl;
																												z--;
																											}
																											a = 0;
																										} while (z >= 0);
																										cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;
																										break;
																									case 2:
																										break;
																									}
																								}
																								else
																								{
																									cout << "Choose the correct option" << endl;
																									z--;
																								}
																								a = 0;
																							} while (z >= 0);

																							break;
																						default:
																							break;
																						}
																					}
																					else
																					{
																						cout << "Choose the correct option" << endl;
																						z--;
																					}
																					a = 0;
																				} while (z >= 0);
																				cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;
																			case 2:
																				cout << "You play with your toys at home without any phtsical activity" << endl;
																				break;
																			default:
																				break;
																			}
																		}
																		else
																		{
																			cout << "Choose the correct option" << endl;
																			z--;
																		}
																		a = 0;
																	} while (z >= 0);
																	cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																	break;
																default:
																	break;
																}
															}
															else
															{
																cout << "Choose the correct option" << endl;
																z--;
															}
															a = 0;
														} while (z >= 0);
														cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;
														break;
													case 2:
														cout << "Your father is happy to hear you say his name first but your mom is a bit sad but nevertheless happy you spoke" << endl;
														cout << "\nStarting at Age 4" << endl;
														break;
													default:
														break;
													}
												}
												else
												{
													cout << "Choose the correct option" << endl;
													z--;
												}
												a = 0;
											} while (z >= 0);
											cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;
											cout << "You choose the 2nd option and your father is happy to hear you say his name first but your mom is a bit sad but nevertheless happy you spoke" << endl;
											break;
										case 2:
											break;
										default:
											break;
										}
									}
									else
									{
										cout << "Choose the correct option" << endl;
										z--;
									}
								} while (z >= 0);
								break;
							}while (z >= 0);
							break;
						case 2:
							cout << "Your Mom and Dad turns out to be more joyfull and are happy to look at your 1st baby steps" << endl;
							SystemClear();
							cout << "\nStarting at Age 2" << endl;
							cout << "\nYour Mom and Dad looks at you cheerfully " << "\nChosse what you want to do" << "\n1. You say your first word - 'Momma'\n2. You say your first word - 'Papa'" << endl;
							do
							{
								cout << "Choose 1 or 2" << endl;
								a = 0;
								cin >> a;
								if (a == 1 || a == 2)
								{
									switch (a)
									{
									case 1:
										cout << "Your mom is happy to hear you say her name first but your father is a bit sad but nevertheless happy you spoke" << endl;
										SystemClear();
										cout << "\nStarting at Age 3" << endl;
										cout << "\nYour Mom and Dad ask you happily if you wanna go out for a walk" << "\nChosse what you want to do" << "\n1. You choose to go out with your mom\n2. You choose to go with your dad" << endl;
										do
										{
											cout << "Choose 1 or 2" << endl;
											a = 0;
											cin >> a;
											if (a == 1 || a == 2)
											{
												switch (a)
												{
												case 1:
													cout << "You tend to lean towards your mom a bit";
													SystemClear();
													cout << "\nStarting at Age 4" << endl;
													cout << "\nYour Mom and Dad asks if you wanna go out and play and make friends" << "\nChosse what you want to do" << "\n1. You choose to go out and play as they say\n2. You choose to stay within your house" << endl;
													do
													{
														cout << "Choose 1 or 2" << endl;
														a = 0;
														cin >> a;
														if (a == 1 || a == 2)
														{
															switch (a)
															{
															case 1:
																cout << "You made some new friends today out playing" << endl;
																SystemClear();
																cout << "\nStarting at Age 5" << endl;
																cout << "\nYour mom and dad discuss if they want to send you to school or not" << "\nChosse what you want to do" << "\n1. You choose to go out and attend school with your friends as they say\n2. You make a cute looking teary eyed face saying you don't wanna go and just play all day" << endl;
																do
																{
																	cout << "Choose 1 or 2" << endl;
																	a = 0;
																	cin >> a;
																	if (a == 1 || a == 2)
																	{
																		switch (a)
																		{
																		case 1:
																			cout << "You start attending school with Class KG and have seem to made some more new frnds" << endl;
																			SystemClear();
																			cout << "\nStarting at Age 6" << endl;
																			cout << "\nYou are now in Class 1 and you decide whether to foucus more on study or more in sports and extra curricular activities" << "\nChosse what you want to do" << "\n1. You decide to focus more on studies\n2. You decide to focus more on sports and extra curricular activities" << endl;
																			do
																			{
																				cout << "Choose 1 or 2" << endl;
																				a = 0;
																				cin >> a;
																				if (a == 1 || a == 2)
																				{
																					switch (a)
																					{
																					case 1:
																						cout << "You gonna turn out to be more nerdy in the future" << endl;
																						SystemClear();
																						cout << "\nStarting at Age 7" << endl;
																						cout << "\nYour are in Class 2 now decide if you still wanna focus on studies or on games" << "\nChosse what you want to do" << "\n1. You gonna stick with studies\n2. You still loves to play games and participate in extra cirricular activites" << endl;
																						do
																						{
																							cout << "Choose 1 or 2" << endl;
																							a = 0;
																							cin >> a;
																							if (a == 1 || a == 2)
																							{
																								switch (a)
																								{
																								case 1:
																									cout << "You are now learning about other stuff other than your studies from libraries- 'You are turnig more smarter'" << endl;
																									system("cls");
																									cout << "\nStarting at Age 8" << endl;
																									cout << "\nYour are in Class 3 now and youre stuck between history or economy studies" << "\nChosse what you want to do" << "\n1. You gonna leanr more history about your ancestor and stuff\n2. You are gonna learn more money related things and learn how the country runs" << endl;
																									do
																									{
																										cout << "Choose 1 or 2" << endl;
																										a = 0;
																										cin >> a;
																										if (a == 1 || a == 2)
																										{
																											switch (a)
																											{
																											case 1:
																												cout << "Your mom and dad are happy as you turned out to be a genius" << endl;
																												system("cls");
																												break;
																											case 2:
																												cout << "Your mom and dad are happy as you turned out to be a genius" << endl;
																												system("cls");
																												break;
																											default:
																												break;
																											}
																										}
																										else
																										{
																											cout << "Choose the correct option" << endl;
																											z--;
																										}
																										a = 0;
																									} while (z >= 0);
																									cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																									break;
																								case 2:
																									cout << "You are turning to be a normal kid you loves to play and study both - 'You are just a normal kid'" << endl;
																									system("cls");
																									cout << "\nStarting at Age 8" << endl;
																									cout << "You have now moved to Child Phase" << endl;
																									cout << "Your mon and dad gives you a console on your birthday" << "\n1. You decide to play on it.\n2. You decide to play it on a later time" << endl;
																									do
																									{
																										cout << "Choose 1 or 2" << endl;
																										a = 0;
																										cin >> a;
																										if (a == 1 || a == 2)
																										{
																											switch (a)
																											{
																											case 1:
																												MazeGame();
																												break;
																											case 2:
																												cout << "You forgot about the console and move on with your life" << endl;
																											default:
																												break;
																											}
																										}
																										else
																										{
																											cout << "Choose the correct option" << endl;
																											z--;
																										}
																										a = 0;
																									} while (z >= 0);
																									cout << "You just missed a big oppurtunity but anyways as you didn't choose anything I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																									break;
																								default:
																									break;
																								}
																							}
																							else
																							{
																								cout << "Choose the correct option" << endl;
																								z--;
																							}
																							a = 0;
																						} while (z >= 0);
																						cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;
																						break;
																						break;
																					case 2:
																						cout << "You're gonna turn out to be active in physical activity making you more popular in school" << endl;
																						SystemClear();
																						cout << "\nStarting at Age 7" << endl;
																						cout << "\nYour are in Class 2 now decide if you still wanna focus on studies or on games" << "\nChosse what you want to do" << "\n1. You gonna start with studies\n2. You still loves to play games and participate in extra cirricular activites" << endl;
																						do
																						{
																							cout << "Choose 1 or 2" << endl;
																							a = 0;
																							cin >> a;
																							if (a == 1 || a == 2)
																							{
																								switch (a)
																								{
																								case 1:
																									cout << "You are turning to be a normal kid you loves to play and study both - 'You are just a normal kid'" << endl;
																									SystemClear();
																									cout << "\nStarting at Age 8" << endl;
																									cout << "You have now moved to Child Phase" << endl;
																									cout << "Your mon and dad gives you a console on your birthday" << "\n1. You decide to play on it.\n2. You decide to play it on a later time" << endl;
																									do
																									{
																										cout << "Choose 1 or 2" << endl;
																										a = 0;
																										cin >> a;
																										if (a == 1 || a == 2)
																										{
																											switch (a)
																											{
																											case 1:
																												//MazeGame();
																												Numberguess();
																												if (secretNumber == 2004)
																												{

																												}
																												break;
																											case 2:
																												cout << "You forgot about the console and move on with your life" << endl;
																												system("cls");
																											default:
																												break;
																											}
																										}
																										else
																										{
																											cout << "Choose the correct option" << endl;
																											z--;
																										}
																										a = 0;
																									} while (z >= 0);
																									cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																									break;
																								case 2:
																									cout << "Your mom and dad worry a bit that you are still not studying but nevertheless are happy that you are active atleast" << endl;
																									system("cls");
																									cout << "\nStarting at Age 8" << endl;
																									cout << "You have now moved to Child Phase" << endl;
																									cout << "Your mon and dad gives you a console on your birthday" << "\n1. You decide to play on it.\n2. You decide to play it on a later time" << endl;
																									do
																									{
																										cout << "Choose 1 or 2" << endl;
																										a = 0;
																										cin >> a;
																										if (a == 1 || a == 2)
																										{
																											switch (a)
																											{
																											case 1:
																												//MazeGame();
																												Numberguess();
																												
																												if (secretNumber == 2004)
																												{

																												}
																												break;
																											case 2:
																												cout << "You forgot about the console and move on with your life" << endl;
																												system("cls");
																											default:
																												break;
																											}
																										}
																										else
																										{
																											cout << "Choose the correct option" << endl;
																											z--;
																										}
																										a = 0;
																									} while (z >= 0);
																									cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																									break;
																								default:
																									break;
																								}
																							}
																							else
																							{
																								cout << "Choose the correct option" << endl;
																								z--;
																							}
																							a = 0;
																						} while (z >= 0);
																						cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;
																						break;
																					default:
																						break;
																					}
																				}
																				else
																				{
																					cout << "Choose the correct option" << endl;
																					z--;
																				}
																				a = 0;
																			} while (z >= 0);
																			cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																			break;
																		case 2:
																			cout << "Your mom and dad discuss about it and decide just to wait for a year before sending him to school" << endl;
																			system("cls");
																			cout << "\nStarting at Age 6" << endl;
																			cout << "\nYour mom and dad asks something of you" << "\nChoose what you want to do" << "\n1. You decide to study in school from now. \2. You decide to take up study up in home" << endl;
																			do
																			{
																				cout << "Choose 1 or 2" << endl;
																				a = 0;
																				cin >> a;
																				if (a == 1 || a == 2)
																				{
																					switch (a)
																					{
																					case 1:
																						cout << "You gonna turn out to be more nerdy in the future" << endl;
																						SystemClear();
																						cout << "\nStarting at Age 7" << endl;
																						cout << "\nYour are in Class 2 now decide if you still wanna focus on studies or on games" << "\nChosse what you want to do" << "\n1. You gonna stick with studies\n2. You still loves to play games and participate in extra cirricular activites" << endl;
																						do
																						{
																							cout << "Choose 1 or 2" << endl;
																							a = 0;
																							cin >> a;
																							if (a == 1 || a == 2)
																							{
																								switch (a)
																								{
																								case 1:
																									cout << "You are now learning about other stuff other than your studies from libraries- 'You are turnig more smarter'" << endl;
																									SystemClear();
																									cout << "\nStarting at Age 8" << endl;
																									cout << "\nYour are in Class 3 now and youre stuck between history or economy studies" << "\nChosse what you want to do" << "\n1. You gonna leanr more history about your ancestor and stuff\n2. You are gonna learn more money related things and learn how the country runs" << endl;
																									do
																									{
																										cout << "Choose 1 or 2" << endl;
																										a = 0;
																										cin >> a;
																										if (a == 1 || a == 2)
																										{
																											switch (a)
																											{
																											case 1:
																												cout << "Your mom and dad are happy as you turned out to be a genius" << endl;
																												SystemClear();
																												break;
																											case 2:
																												cout << "Your mom and dad are happy as you turned out to be a genius" << endl;
																												SystemClear();
																												break;
																											default:
																												break;
																											}
																										}
																										else
																										{
																											cout << "Choose the correct option" << endl;
																											z--;
																										}
																										a = 0;
																									} while (z >= 0);
																									cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																									break;
																								case 2:
																									cout << "You are turning to be a normal kid you loves to play and study both - 'You are just a normal kid'" << endl;
																									SystemClear();
																									cout << "\nStarting at Age 8" << endl;
																									cout << "You have now moved to Child Phase" << endl;
																									cout << "Your mon and dad gives you a console on your birthday" << "\n1. You decide to play on it.\n2. You decide to play it on a later time" << endl;
																									do
																									{
																										cout << "Choose 1 or 2" << endl;
																										a = 0;
																										cin >> a;
																										if (a == 1 || a == 2)
																										{
																											switch (a)
																											{
																											case 1:
																												//MazeGame();
																												Numberguess();
																												break;
																											case 2:
																												cout << "You forgot about the console and move on with your life" << endl;
																											default:
																												break;
																											}
																										}
																										else
																										{
																											cout << "Choose the correct option" << endl;
																											z--;
																										}
																										a = 0;
																									} while (z >= 0);
																									cout << "You just missed a big oppurtunity but anyways as you didn't choose anything I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																									break;
																								default:
																									break;
																								}
																							}
																							else
																							{
																								cout << "Choose the correct option" << endl;
																								z--;
																							}
																							a = 0;
																						} while (z >= 0);
																						cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;
																					}
																				}
																				else
																				{
																					cout << "Choose the correct option" << endl;
																					z--;
																				}
																				a = 0;
																			} while (z >= 0);

																			break;
																		default:
																			break;
																		}
																	}
																	else
																	{
																		cout << "Choose the correct option" << endl;
																		z--;
																	}
																	a = 0;
																} while (z >= 0);
																cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

																break;
															case 2:
																cout << "Your mom and dad are a bit worried of you not going out and making friends" << endl;
																break;
															default:
																break;
															}
														}
														else
														{
															cout << "Choose the correct option" << endl;
															z--;
														}
														a = 0;
													} while (z >= 0);
													cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;

													break;
												case 2:
													cout << "You tends to lean both towards you mom and dad";
													break;
												default:
													break;
												}
											}
											else
											{
												cout << "Choose the correct option" << endl;
												z--;
											}
											a = 0;
										} while (z >= 0);
										cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;
										break;
									case 2:
										cout << "Your father is happy to hear you say his name first but your mom is a bit sad but nevertheless happy you spoke" << endl;
										SystemClear();
										cout << "\nStarting at Age 3" << endl;
										cout << "\nYour Mom and Dad ask you happily if you wanna go out for a walk" << "\nChosse what you want to do" << "\n1. You choose to go out with your mom\n2. You choose to go with your dad" << endl;

										break;
									default:
										break;
									}
								}
								else
								{
									cout << "Choose the correct option" << endl;
									z--;
								}
								a = 0;
							} while (z >= 0);
							cout << "You didn't choose any options so I THE SYSTEM WILL CHOOSE IT FOR YOU" << endl;
							cout << "You choose the 2nd option and your father is happy to hear you say his name first but your mom is a bit sad but nevertheless happy you spoke" << endl;

							break;
						}
					}
					else
					{
						cout << "Choose the correct option" << endl;
						z--;
					}
					a = 0;
				} while (z >= 0);
				break;
				break;
				default:
					break;
				}
			}
			else
			{
				cout << "Choose the correct option" << endl;
				z--;
			}
			a = 0;
		}
		DeadBastard();
		break;
	}
	return 0;
}
