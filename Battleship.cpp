#include<iostream>
#include <ctype.h>
#include <time.h>
#include<conio.h>
#include <windows.h>

#define TIMEOUT 5;
using namespace std;
#include"Data.h"
#include"BP_Functions.h"
#include"Replace_Functions.h"




void main()
{

	srand(time(NULL));
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	while (true)
	{
		player_arr = create_array_from_zero(row, column);
		bot_arr = create_array_from_zero(row, column);
		create_frame_for_area(player_arr, row, column);
		create_frame_for_area(bot_arr, row, column);
		int choice;
		cout << game_banner << endl;
		cout << "\n\n                                             --------------------" << endl;
		cout << "			        	  " << front_arrow[0] << "|      NEW GAME      |" << arrow[0] << endl;
		cout << "                                             --------------------" << endl;
		cout << "			       		  " << front_arrow[1] << "|  GAME INFORMATION  |" << arrow[1] << endl;
		cout << "                                             --------------------" << endl;
		cout << "			                  " << front_arrow[2] << "|        EXIT        |" << arrow[2] << endl;
		cout << "                                             --------------------" << endl;
		choice = _getch();

		if (choice == 224 || choice == 115 || choice == 119 || choice == 80 || choice == 72 || choice == 83 || choice == 87)
		{
			if (choice == 224)
				choice = _getch();
			if (choice == 80 || choice == 115 || choice == 83)
			{
				if (arrow_place >= 2)
				{
					arrow_place--;
					cout << "\a" << endl;
				}
				front_arrow[arrow_place] = new char[100] {"  "};
				front_arrow[arrow_place + 1] = new char[100] {"=>"};
				arrow[arrow_place] = new char[100] {" "};
				arrow[arrow_place + 1] = new char[100] {"<="};
				arrow_place++;


				system("cls");
			}
			if (choice == 72 || choice == 119 || choice == 87)
			{
				if (arrow_place <= 0)
				{
					arrow_place++;
					cout << "\a" << endl;

				}
				front_arrow[arrow_place] = new char[100] {"  "};
				front_arrow[arrow_place - 1] = new char[100] {"=>"};
				arrow[arrow_place] = new char[100] {" "};
				arrow[arrow_place - 1] = new char[100] {"<="};
				arrow_place--;

				system("cls");

			}
		}
		else if (choice == 13 || choice == 32)
		{
			system("cls");
			if (arrow_place == 0)
			{
				player_arr = create_array_from_zero(row, column);
				bot_arr = create_array_from_zero(row, column);
				create_frame_for_area(player_arr, row, column);
				create_frame_for_area(bot_arr, row, column);
				while (true)
				{
					cout << "                       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "                      | Welcome to Battleship Game! |" << endl;
					cout << "                       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "\n\n* Would You Like Ships To be Placed Random or Manually.?\n" << endl;
					cout << front_arrow_fill_question[0] << "<< Random >>" << arrow_fill_question[0] << endl;
					cout << front_arrow_fill_question[1] << "<<Manually>>" << arrow_fill_question[1] << endl;
					int choice_fill_type;
					choice_fill_type = _getch();
					swapt_fill_type(choice_fill_type, arrow_place_fill_type);
					if (choice_fill_type == 13 || choice_fill_type == 32)
					{
						if (check_fill_type(arrow_place_fill_type) == 0)
						{
								fake_bot_arr = create_array_from_zero(row, column);
								create_frame_for_area(fake_bot_arr, row, column);
								// Random fill
								random_fill(player_arr);
								random_fill( bot_arr);
								//============================
								find_empty_place(aim_row, aim_column, bot_arr, 4);
								bool bot_line = false;
								bool player_line = true;
								short int player_ship_count = 20;
								short int bot_ship_count = 20;
								short int bot_check_count = 0;
								while(player_ship_count!=0 && bot_ship_count!=0)
								{
									if (player_line)
									{
											fake_bot_arr[aim_row][aim_column] = 'X';
											print_by_color(ship_row, ship_column, 4, console, -2, player_arr, fake_bot_arr);
											SetConsoleTextAttribute(console, 6);
											cout << "PLAYER" << endl;
											SetConsoleTextAttribute(console, 15);
											bot_check_count = 0;
											int aim_cord;
											aim_cord = _getch();
										
											if (aim_cord == 224)
											{
												aim_cord = _getch();
												if (aim_cord == 72)
													up_func_for_aim(aim_row, aim_column, fake_bot_arr);
												else if (aim_cord == 80)
													down_func_for_aim(aim_row, aim_column, fake_bot_arr);
												else if (aim_cord == 77)
													right_func_for_aim(aim_row, aim_column, fake_bot_arr);
												else if (aim_cord == 75)
													left_func_for_aim(aim_row, aim_column, fake_bot_arr);
											}
											if (aim_cord == 32 || aim_cord == 13)
											{
												if (bot_arr[aim_row][aim_column] == '0')
												{
													fake_bot_arr[aim_row][aim_column] = '#';
													find_empty_place(aim_row, aim_column, bot_arr, 4);
													bot_ship_count--;
												}
												else
												{
													player_line = false;
													bot_line = true;
												}
											}
									}
									
									if (bot_line)
									{
											print_by_color(ship_row, ship_column, 4, console, -2, player_arr, fake_bot_arr);
											SetConsoleTextAttribute(console, 6);
											cout << "BOT" << endl;
											SetConsoleTextAttribute(console, 15);
											if (bot_check_count == 0)
											{
												destroy_column = 0 + rand() % 16;
												destroy_row = 0 + rand() % 16;
											}
											else
												smart_bot(destroy_row, destroy_column);
											if (player_arr[destroy_row][destroy_column] == '0')
											{
												player_arr[destroy_row][destroy_column] = '#';
												player_ship_count--;
												bot_check_count++;
												Sleep(100);
											}
											else
											{
												player_line = true;
												bot_line = false;
											}
											
									}
									

								}
								if (player_ship_count == 0)
								{
									system("cls");
									cout << "Game Winnner -->> Bot" << endl;
									exit(1);
								}
								else if (bot_ship_count == 0)
								{
									system("cls");
									cout << "Game Winnner -->> Player" << endl;
									exit(1);
								}
								
							
						}
						else if (check_fill_type(arrow_place_fill_type) == 1)
						{
							print_by_color(ship_row, ship_column, 4, console, -1, player_arr);
							while (true)
							{
								print_by_color(ship_row, ship_column, 4, console, -1, player_arr);
								print_ships(arrow_ship_choice);
								//================================
								int ship_choice;
								int place_choice;
								//================================
								ship_choice = _getch();
								swapt_ship_choice(ship_choice, ship_choice_place);
								if (ship_choice_place == 0 && ship_choice == 32 && carrier_count != 0)
								{
									find_empty_place(ship_row, ship_column, player_arr, 4);
									while (true)
									{
										player_arr[ship_row][ship_column] = '0';
										player_arr[ship_row][ship_column + 1] = '0';
										player_arr[ship_row][ship_column + 2] = '0';
										player_arr[ship_row][ship_column + 3] = '0';

										print_by_color(ship_row, ship_column, 10, console, 0, player_arr);
										place_choice = _getch();
										if (place_choice == 119 || place_choice == 87)
											up_func4(ship_row, ship_column, player_arr);
										else if (place_choice == 115 || place_choice == 83)
											down_func4(ship_row, ship_column, player_arr);
										else if (place_choice == 97 || place_choice == 65)
											left_func4(ship_row, ship_column, player_arr);
										else if (place_choice == 100 || place_choice == 68)
											right_func4(ship_row, ship_column, player_arr);
										else if (place_choice == 13 || place_choice == 32)
											break;
									}

									carrier_count--;

								}
								else if (ship_choice_place == 1 && ship_choice == 32 && battleship_count != 0)
								{
									find_empty_place(ship_row, ship_column, player_arr, 3);

									while (true)
									{
										player_arr[ship_row][ship_column] = '0';
										player_arr[ship_row][ship_column + 1] = '0';
										player_arr[ship_row][ship_column + 2] = '0';

										print_by_color(ship_row, ship_column, 10, console, 1, player_arr);
										place_choice = _getch();
										if (place_choice == 119 || place_choice == 87)
											up_func3(ship_row, ship_column, player_arr);
										else if (place_choice == 115 || place_choice == 83)
											down_func3(ship_row, ship_column, player_arr);
										else if (place_choice == 97 || place_choice == 65)
											left_func3(ship_row, ship_column, player_arr);
										else if (place_choice == 100 || place_choice == 68)
											right_func3(ship_row, ship_column, player_arr);
										else if (place_choice == 13 || place_choice == 32)
											break;
									}
									battleship_count--;

								}
								else if (ship_choice_place == 2 && ship_choice == 32 && submarine_count != 0)
								{
									find_empty_place(ship_row, ship_column, player_arr, 2);
									while (true)
									{
										player_arr[ship_row][ship_column] = '0';
										player_arr[ship_row][ship_column + 1] = '0';

										print_by_color(ship_row, ship_column, 10, console, 2, player_arr);
										place_choice = _getch();
										if (place_choice == 119 || place_choice == 87)
											up_func2(ship_row, ship_column, player_arr);
										else if (place_choice == 115 || place_choice == 83)
											down_func2(ship_row, ship_column, player_arr);
										else if (place_choice == 97 || place_choice == 65)
											left_func2(ship_row, ship_column, player_arr);
										else if (place_choice == 100 || place_choice == 68)
											right_func2(ship_row, ship_column, player_arr);
										else if (place_choice == 13 || place_choice == 32)
											break;
									}
									submarine_count--;

								}
								else if (ship_choice_place == 3 && ship_choice == 32 && destroyer_count != 0)
								{
									find_empty_place(ship_row, ship_column, player_arr, 1);
									while (true)
									{

										player_arr[ship_row][ship_column] = '0';

										print_by_color(ship_row, ship_column, 10, console, 3, player_arr);
										place_choice = _getch();
										if (place_choice == 119 || place_choice == 87)
											up_func1(ship_row, ship_column, player_arr);
										else if (place_choice == 115 || place_choice == 83)
											down_func1(ship_row, ship_column, player_arr);
										else if (place_choice == 97 || place_choice == 65)
											left_func1(ship_row, ship_column, player_arr);
										else if (place_choice == 100 || place_choice == 68)
											right_func1(ship_row, ship_column, player_arr);
										else if (place_choice == 13 || place_choice == 32)
											break;
									}
									destroyer_count--;

								}
								if (carrier_count + battleship_count + submarine_count + destroyer_count == 0)
								{
									cout << "next.............." << endl;
									fake_bot_arr = create_array_from_zero(row, column);
									create_frame_for_area(fake_bot_arr, row, column);
									// Random fill
									random_fill(bot_arr);
									//============================
									find_empty_place(aim_row, aim_column, bot_arr, 4);
									bool bot_line = false;
									bool player_line = true;
									short int player_ship_count = 20;
									short int bot_ship_count = 20;
									short int bot_check_count = 0;
									while (player_ship_count != 0 && bot_ship_count != 0)
									{
										
										if (player_line)
										{
											fake_bot_arr[aim_row][aim_column] = 'X';
											print_by_color(ship_row, ship_column, 4, console, -2, player_arr, fake_bot_arr);
											SetConsoleTextAttribute(console, 6);
											cout << "PLAYER" << endl;
											SetConsoleTextAttribute(console, 15);
											bot_check_count = 0;
											int aim_cord;
											aim_cord = _getch();
											
											if (aim_cord == 224)
											{
												aim_cord = _getch();
												if (aim_cord == 72)
													up_func_for_aim(aim_row, aim_column, fake_bot_arr);
												else if (aim_cord == 80)
													down_func_for_aim(aim_row, aim_column, fake_bot_arr);
												else if (aim_cord == 77)
													right_func_for_aim(aim_row, aim_column, fake_bot_arr);
												else if (aim_cord == 75)
													left_func_for_aim(aim_row, aim_column, fake_bot_arr);
											}
											if (aim_cord == 32 || aim_cord == 13)
											{
												if (bot_arr[aim_row][aim_column] == '0')
												{
													fake_bot_arr[aim_row][aim_column] = '#';
													find_empty_place(aim_row, aim_column, bot_arr, 4);
													bot_ship_count--;
												}
												else
												{
													player_line = false;
													bot_line = true;
												}
											}
										}

										if (bot_line)
										{
											print_by_color(ship_row, ship_column, 4, console, -2, player_arr, fake_bot_arr);
											SetConsoleTextAttribute(console, 6);
											cout << "BOT" << endl;
											SetConsoleTextAttribute(console, 15);
											if (bot_check_count == 0)
											{
												destroy_column = 0 + rand() % 16;
												destroy_row = 0 + rand() % 16;
											}
											else
												smart_bot(destroy_row, destroy_column);
											if (player_arr[destroy_row][destroy_column] == '0')
											{
												player_arr[destroy_row][destroy_column] = '#';
												player_ship_count--;
												bot_check_count++;
												Sleep(100);
												
											}
											else
											{
												player_line = true;
												bot_line = false;
											}
										}


									}
									if (player_ship_count == 0)
									{
										system("cls");
										cout << "Game Winnner -->> Bot" << endl;
										exit(1);
									}
									else if (bot_ship_count == 0)
									{
										system("cls");
										cout << "Game Winnner -->> Player" << endl;
										exit(1);
									}
								}
								//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
							}
						}
					}
					else
						system("cls");

				}
				system("cls");
			}
			else if (arrow_place == 1)
			{

				cout << information_banner << endl;
				int len_information = strlen(about_game);
				int v1;
				for (int a = 0;a < len_information;a++)
				{
					cout << about_game[a];
					Sleep(4);
					if (_kbhit())
					{
						v1 = _getch();
						system("cls");
						cout << information_banner << endl;
						cout << about_game << endl;
						break;
					}
				}
				cout << "\n\n" << "~ Please Press any key to Back Menu..." << endl;
				int temp_information = 0;
				temp_information = _getch();
				system("cls");
			}
			else if (arrow_place == 2)
			{
				exit(1);
			}
		}
		else
			system("cls");
	}
}




