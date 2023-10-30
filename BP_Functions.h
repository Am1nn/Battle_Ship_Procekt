#pragma once




char** create_array_from_zero(int row, int column)
{
	char** new_arr = new char* [row] {};
	for (int a = 0;a < row;a++)
		new_arr[a] = new char[column] {};
	return new_arr;
}

void create_frame_for_area(char** player_array, int row, int column)
{
	for(int a=0;a<row;a++)
		for (int b = 0;b < column;b++)
		{
			if (a == 0 || a == row - 1 || b == 0 || b == column - 1)
				player_array[a][b] = 220;
			else
				player_array[a][b] = ' ';
		}
}



void swapt_fill_type(int fill_type_chioce ,int &arrow_place_fill_type_1)
{
	if (fill_type_chioce == 224 || fill_type_chioce == 115 || fill_type_chioce == 119 || fill_type_chioce == 80 || fill_type_chioce == 72 || fill_type_chioce == 83 || fill_type_chioce == 87)
	{
		if (fill_type_chioce == 224)
			fill_type_chioce = _getch();
		if (fill_type_chioce == 80 || fill_type_chioce == 115 || fill_type_chioce == 83)
		{
			if (arrow_place_fill_type >= 1)
			{
				arrow_place_fill_type_1--;
				cout << "\a" << endl;
			}
			front_arrow_fill_question[arrow_place_fill_type_1] = new char[100] {" "};
			front_arrow_fill_question[arrow_place_fill_type_1 + 1] = new char[100] {char(219)};
			arrow_fill_question[arrow_place_fill_type_1] = new char[100] {" "};
			arrow_fill_question[arrow_place_fill_type_1 + 1] = new char[100] {char(219)};
			arrow_place_fill_type_1++;

			
			system("cls");
		}
		else if (fill_type_chioce == 72 || fill_type_chioce == 119 || fill_type_chioce == 87)
		{
			if (arrow_place_fill_type_1 <= 0)
			{
				arrow_place_fill_type_1++;
				cout << "\a" << endl;

			}
			front_arrow_fill_question[arrow_place_fill_type_1] = new char[100] {" "};
			front_arrow_fill_question[arrow_place_fill_type_1 - 1] = new char[100] {char(219)};
			arrow_fill_question[arrow_place_fill_type_1] = new char[100] {" "};
			arrow_fill_question[arrow_place_fill_type_1 - 1] = new char[100] {char(219)};
			arrow_place_fill_type_1--;

			
			system("cls");

		}
		else
		{
			cout << "\a" << endl;
			system("cls");
		}
	}
}


void swapt_ship_choice(int ship_choice, int& ship_choice_place_1)
{
	if (ship_choice == 224)
	{
		ship_choice = _getch();
		if (ship_choice == 72)
		{
			if (ship_choice_place_1 <= 0)
			{
				ship_choice_place_1++;
				cout << "\a" << endl;
			}

			arrow_ship_choice[ship_choice_place_1] = new char[100] {" "};
			arrow_ship_choice[ship_choice_place_1 - 1] = new char[100] {char(219)};
			ship_choice_place_1--;


			system("cls");
			cout << "up" << endl;
		}
		else if (ship_choice == 80)
		{
			if (ship_choice_place_1 >= 3)
			{
				ship_choice_place_1--;
				cout << "\a" << endl;
			}

			arrow_ship_choice[ship_choice_place_1] = new char[100] {" "};
			arrow_ship_choice[ship_choice_place_1 + 1] = new char[100] {char(219)};
			ship_choice_place_1++;


			system("cls");

		}
	}
	else
	{
		system("cls");
	}
}

inline int check_fill_type(int arrow_place)
{
	if (arrow_place == 0)
		return 0;
	else if(arrow_place==1)
		return 1;
}


void print_by_color(int ship_row, int ship_column, int color_code,HANDLE console,int mode, char** player_area_1 = 0, char** bot_area_1 = 0)
{
	system("cls");
	if (mode == 3)
	{
		for (int a = 0;a < 17;a++)
		{
			for (int b = 0;b < 17;b++)
			{
				if (ship_row == a && ship_column == b)
				{
					SetConsoleTextAttribute(console, color_code);
					cout << player_arr[a][b]<<" ";
					SetConsoleTextAttribute(console, 15);
				}
				else
					cout << player_arr[a][b]<<' '; 
			}
			cout << endl;
		}
		
	}
	else if (mode == 2)
	{
		for (int a = 0;a < 17;a++)
		{
			for (int b = 0;b < 17;b++)
			{
				if (ship_row == a && (ship_column == b || ship_column+1==b))
				{
					SetConsoleTextAttribute(console, color_code);
					cout << player_arr[a][b] << " ";
					SetConsoleTextAttribute(console, 15);
				}
				else
					cout << player_arr[a][b] << ' ';
			}
			cout << endl;
		}
	}
	else if (mode == 1)
	{
		for (int a = 0;a < 17;a++)
		{
			for (int b = 0;b < 17;b++)
			{
				if (ship_row == a && (ship_column == b || ship_column + 1 == b || ship_column+2==b))
				{
					SetConsoleTextAttribute(console, color_code);
					cout << player_arr[a][b] << " ";
					SetConsoleTextAttribute(console, 15);
				}
				else
					cout << player_arr[a][b] << ' ';
			}
			cout << endl;
		}
	}
	else if (mode == 0)
	{
		for (int a = 0;a < 17;a++)
		{
			for (int b = 0;b < 17;b++)
			{
				if (ship_row == a && (ship_column == b || ship_column + 1 == b ||ship_column+2==b|| ship_column+3==b))
				{
					SetConsoleTextAttribute(console, color_code);
					cout << player_arr[a][b] << " ";
					SetConsoleTextAttribute(console, 15);
				}
				else
					cout << player_arr[a][b] << ' ';
			}
			cout << endl;
		}
	}
	else if (mode == -1)
	{
		for (int a = 0;a < 17;a++)
		{
			for (int b = 0;b < 17;b++)
			{
				cout << player_arr[a][b] << ' ';
			}
			cout << endl;
		}
	}
	else if (mode == -2)
	{
		SetConsoleTextAttribute(console, 5);
		cout << "            PLAYER                                                  BOT\n" << endl;
			SetConsoleTextAttribute(console, 15);
		for (int a = 0;a < 17;a++)
		{
			for (int b = 0;b < 17;b++)
			{
				if (player_area_1[a][b] == '#')
				{
					SetConsoleTextAttribute(console, 4);
					cout << player_area_1[a][b]<<" ";
					SetConsoleTextAttribute(console, 15);
				}
				else
					cout << player_area_1[a][b] << ' ';
			}
			
			cout << "                   ";
			for (int b = 0;b < 17;b++)
			{
				if (bot_area_1[a][b] == '#')
				{
					SetConsoleTextAttribute(console, 4);
					cout << bot_area_1[a][b] << " ";
					SetConsoleTextAttribute(console, 15);
				}
				else
					cout << bot_area_1[a][b] << ' ';
			}
			cout << endl;
		}
	}
}




void find_empty_place(int &cord_row, int &cord_column, char** area ,int ship_size)
{
	
	while (true)
	{
		short int random_column = 0 + rand() % 16;
		short int random_row = 0 + rand() % 16;
		if (ship_size == 1)
		{
			if (area[random_row][random_column] == ' ' &&
		        area[random_row+1][random_column] == ' ' &&
		        area[random_row-1][random_column] == ' ' &&
		        area[random_row][random_column+1] == ' ' &&
		        area[random_row][random_column-1] == ' ' &&
		        area[random_row-1][random_column-1] == ' ' &&
		        area[random_row+1][random_column-1] == ' ' &&
		        area[random_row-1][random_column+1] == ' ' &&
		        area[random_row+1][random_column+1] == ' ' 
				)
			{
				cord_row = random_row;
				cord_column = random_column;
				break;
			}
		}
		else if (ship_size == 2)
		{
			if (area[random_row][random_column] == ' ' && area[random_row][random_column + 1] == ' ' && area[random_row][random_column - 1] == ' ' && area[random_row + 1][random_column] == ' ' && area[random_row - 1][random_column] == ' ' && 
				area[random_row][random_column + 2] == ' ' && area[random_row][random_column + 1] == ' ' && area[random_row + 1][random_column] == ' ' && area[random_row - 1][random_column] == ' ')
			{
				cord_row = random_row;
				cord_column = random_column;
				break;
			}
		}
		else if (ship_size == 3)
		{                                                                                                                                                                                                                                                                                                                                                                                                                       
			if (area[random_row][random_column] == ' '  && area[random_row][random_column - 1] == ' ' && area[random_row + 1][random_column] == ' ' && area[random_row - 1][random_column] == ' ' && 
				area[random_row][random_column+1]==' '&& area[random_row-1][random_column + 1] == ' ' && area[random_row+1][random_column + 1] == ' '&&
				area[random_row][random_column + 2] == ' ' && area[random_row-1][random_column + 2] == ' ' && area[random_row+1][random_column + 2] == ' ' && area[random_row][random_column + 3] == ' ')
			{
				cord_row = random_row;
				cord_column = random_column;
				break;
			}
		}
		else if (ship_size == 4)
		{
			if (area[random_row][random_column] == ' ' && area[random_row][random_column - 1] == ' ' && area[random_row + 1][random_column] == ' ' && area[random_row - 1][random_column] == ' ' &&
				area[random_row][random_column + 1] == ' ' && area[random_row - 1][random_column + 1] == ' ' && area[random_row + 1][random_column + 1] == ' ' &&
				area[random_row][random_column + 2] == ' ' && area[random_row - 1][random_column + 2] == ' ' && area[random_row + 1][random_column + 2] == ' ' &&
				area[random_row][random_column + 3] == ' ' && area[random_row - 1][random_column + 3] && area[random_row + 1][random_column + 3] && area[random_row][random_column + 4] == ' ')
			{
				cord_row = random_row;
				cord_column = random_column;
				break;
			}
		}
	}
}

void random_fill( char** area_1)
{
	int battleship_count_1 = 2;
	int submarine_count_1 = 3;
	int destroyer_count_1 = 3;
	find_empty_place(ship_row, ship_column, area_1, 4);
	area_1[ship_row][ship_column] = '0';
	area_1[ship_row][ship_column + 1] = '0';
	area_1[ship_row][ship_column + 2] = '0';
	area_1[ship_row][ship_column + 3] = '0';
	while (battleship_count_1 > 0)
	{
		find_empty_place(ship_row, ship_column, area_1, 3);
		area_1[ship_row][ship_column] = '0';
		area_1[ship_row][ship_column + 1] = '0';
		area_1[ship_row][ship_column + 2] = '0';
		battleship_count_1--;
	}

	while (submarine_count_1 > 0)
	{
		find_empty_place(ship_row, ship_column, area_1, 2);
		area_1[ship_row][ship_column] = '0';
		area_1[ship_row][ship_column + 1] = '0';

		submarine_count_1--;
	}
	while (destroyer_count_1+1 > 0)
	{
		find_empty_place(ship_row, ship_column, area_1, 1);
		area_1[ship_row][ship_column] = '0';

		destroyer_count_1--;

	}
}


void print_ships(char** choice_arrow)
{
	cout << "\nShips Size and Count:" << endl;
	cout << arrow_ship_choice[0] << "<<Carrier(4)>> ~ " << carrier_count << endl;
	cout << arrow_ship_choice[1] << "<<BattleShip(3)>> ~ " << battleship_count << endl;
	cout << arrow_ship_choice[2] << "<<Submarine(2)>> ~ " << submarine_count << endl;
	cout << arrow_ship_choice[3] << "<<Destroyer(1)>> ~ " << destroyer_count << endl;
}

void smart_bot(short int& smart_row,short int& smart_column)
{
	short int temp_random = 1 + rand() % 99;
	if(smart_column<15 && smart_row<15)
	{	
			smart_column++;
	
		
	}
	else if(smart_column>1 && smart_row>1)
	{
		
			smart_column--;
	}
}