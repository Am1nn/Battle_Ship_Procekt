#pragma once

// UP FUNCTIONS  ============================================================================================

void up_func1(int& row_ship, int& column_ship, char** player_area)
{
	if (player_area[row_ship - 1][column_ship] == ' ' && (player_area[row_ship - 2][column_ship] == ' ' || player_area[row_ship - 2][column_ship] == char(220)) &&
		(player_area[row_ship][column_ship + 1] == ' ' || player_area[row_ship][column_ship + 1] == char(220)) && (player_area[row_ship][column_ship - 1] == ' ' || player_area[row_ship][column_ship - 1] == char(220)) &&
		(player_area[row_ship - 1][column_ship + 1] == ' ' || player_area[row_ship - 1][column_ship + 1] == char(220)) && (player_area[row_ship - 1][column_ship - 1] == ' ' || player_area[row_ship - 1][column_ship - 1] == char(220)) &&
		(player_area[row_ship - 2][column_ship + 1] == ' ' || player_area[row_ship - 2][column_ship + 1] == char(220)) && (player_area[row_ship - 2][column_ship - 1] == ' ' || player_area[row_ship - 2][column_ship - 1] == char(220)))
	{
		player_area[row_ship][column_ship] = ' ';
		player_area[row_ship - 1][column_ship] = '0';
		row_ship--;
	}
	else
		cout << "\a" << endl;
}
void up_func2(int& row_ship, int& column_ship, char** player_area)
{
	if (player_area[row_ship - 1][column_ship] == ' ' && player_area[row_ship - 1][column_ship + 1] == ' ' &&
		(player_area[row_ship - 1][column_ship - 1] == ' ' || player_area[row_ship - 1][column_ship - 1] == char(220)) && (player_area[row_ship - 1][column_ship + 2] == ' ' || player_area[row_ship - 1][column_ship + 2] == char(220)) &&
		(player_area[row_ship][column_ship - 1] == ' ' || player_area[row_ship][column_ship - 1] == char(220)) && (player_area[row_ship][column_ship + 2] == ' ' || player_area[row_ship][column_ship + 2] == char(220)) &&
		(player_area[row_ship - 2][column_ship] == ' ' || player_area[row_ship - 2][column_ship] == char(220)) && (player_area[row_ship - 2][column_ship + 1] == ' ' || player_area[row_ship - 2][column_ship + 1] == char(220)) &&
		(player_area[row_ship - 2][column_ship - 1] == ' ' || player_area[row_ship - 2][column_ship - 1] == char(220)) && (player_area[row_ship - 2][column_ship + 2] == ' ' || player_area[row_ship - 2][column_ship + 2] == char(220)))
	{
		player_area[row_ship][column_ship] = ' ';
		player_area[row_ship][column_ship + 1] = ' ';
		player_area[row_ship - 1][column_ship] = '0';
		player_area[row_ship - 1][column_ship + 1] = '0';
		row_ship--;
	}
	else
		cout << "\a" << endl;
}

void up_func3(int& row_ship, int& column_ship, char** player_area)
{
	if (player_area[row_ship - 1][column_ship] == ' ' && player_area[row_ship - 1][column_ship + 1] == ' ' && player_area[row_ship - 1][column_ship + 2] == ' ' &&
		(player_area[row_ship][column_ship - 1] == ' ' || player_area[row_ship][column_ship - 1] == char(220)) && (player_area[row_ship][column_ship + 3] == ' ' || player_area[row_ship][column_ship + 3] == char(220)) &&
		(player_area[row_ship - 2][column_ship] == ' ' || player_area[row_ship - 2][column_ship] == char(220)) && (player_area[row_ship - 2][column_ship + 1] == ' ' || player_area[row_ship - 2][column_ship + 1] == char(220)) &&
		(player_area[row_ship - 2][column_ship + 2] == ' ' || player_area[row_ship - 2][column_ship + 2] == char(220)) && (player_area[row_ship - 1][column_ship - 1] == ' ' || player_area[row_ship - 1][column_ship - 1] == char(220)) &&
		(player_area[row_ship - 1][column_ship + 3] == ' ' || player_area[row_ship - 1][column_ship + 3] == char(220)) && (player_area[row_ship - 2][column_ship - 1] == ' ' || player_area[row_ship - 2][column_ship - 1] == char(220)) &&
		(player_area[row_ship - 2][column_ship + 3] == ' ' || player_area[row_ship - 2][column_ship + 3] == char(220)))
	{
		player_area[row_ship][column_ship] = ' ';
		player_area[row_ship][column_ship + 1] = ' ';
		player_area[row_ship][column_ship + 2] = ' ';
		player_area[row_ship - 1][column_ship] = '0';
		player_area[row_ship - 1][column_ship + 1] = '0';
		player_area[row_ship - 1][column_ship + 2] = '0';
		row_ship--;
	}
	else
		cout << "\a" << endl;
}
void up_func4(int& row_ship, int& column_ship, char** player_area)
{
	if (player_area[row_ship - 1][column_ship] == ' ' && player_area[row_ship - 1][column_ship + 1] == ' ' && player_area[row_ship - 1][column_ship + 2] == ' ' && player_area[row_ship - 1][column_ship + 3] == ' ' &&
		(player_area[row_ship][column_ship - 1] == ' ' || player_area[row_ship][column_ship - 1] == char(220)) && (player_area[row_ship][column_ship + 4] == ' ' || player_area[row_ship][column_ship + 4] == char(220)) &&
		(player_area[row_ship - 2][column_ship] == ' ' || player_area[row_ship - 2][column_ship] == char(220)) && (player_area[row_ship - 2][column_ship + 1] == ' ' || player_area[row_ship - 2][column_ship + 1] == char(220)) &&
		(player_area[row_ship - 2][column_ship + 2] == ' ' || player_area[row_ship - 2][column_ship + 2] == char(220)) && (player_area[row_ship - 2][column_ship + 3] == ' ' || player_area[row_ship - 2][column_ship + 3] == char(220)) &&
		(player_area[row_ship - 1][column_ship - 1] == ' ' || player_area[row_ship - 1][column_ship - 1] == char(220)) && (player_area[row_ship - 1][column_ship + 4] == ' ' || player_area[row_ship - 1][column_ship + 4] == char(220)) &&
		(player_area[row_ship - 2][column_ship - 1] == ' ' || player_area[row_ship - 2][column_ship - 1] == char(220)) && (player_area[row_ship - 2][column_ship + 4] == ' ' || player_area[row_ship - 2][column_ship + 4] == char(220)))
	{
		player_area[row_ship][column_ship] = ' ';
		player_area[row_ship][column_ship + 1] = ' ';
		player_area[row_ship][column_ship + 2] = ' ';
		player_area[row_ship][column_ship + 3] = ' ';
		player_area[row_ship - 1][column_ship] = '0';
		player_area[row_ship - 1][column_ship + 1] = '0';
		player_area[row_ship - 1][column_ship + 2] = '0';
		player_area[row_ship - 1][column_ship + 3] = '0';
		row_ship--;
	}
	else
		cout << "\a" << endl;
}

// DOWN FUNCTIONS ===============================================================================================================================
void down_func1(int& row_ship, int& column_ship, char** player_area)
{
	if (player_area[row_ship + 1][column_ship] == ' ' && (player_area[row_ship + 2][column_ship] == ' ' || player_area[row_ship + 2][column_ship] == char(220)) &&
		(player_area[row_ship][column_ship + 1] == ' ' || player_area[row_ship][column_ship + 1] == char(220)) && (player_area[row_ship][column_ship - 1] == ' ' || player_area[row_ship][column_ship - 1] == char(220)) &&
		(player_area[row_ship + 1][column_ship + 1] == ' ' || player_area[row_ship + 1][column_ship + 1] == char(220)) && (player_area[row_ship + 1][column_ship - 1] == ' ' || player_area[row_ship + 1][column_ship - 1] == char(220)) &&
		(player_area[row_ship + 2][column_ship + 1] == ' ' || player_area[row_ship + 2][column_ship + 1] == char(220)) && (player_area[row_ship + 2][column_ship - 1] == ' ' || player_area[row_ship + 2][column_ship - 1] == char(220)))
	{
		player_area[row_ship][column_ship] = ' ';
		player_area[row_ship + 1][column_ship] = '0';
		row_ship++;
	}
	else
		cout << "\a" << endl;
}
void down_func2(int& row_ship, int& column_ship, char** player_area)
{
	if (player_area[row_ship + 1][column_ship] == ' ' && player_area[row_ship + 1][column_ship + 1] == ' ' &&
		(player_area[row_ship + 1][column_ship - 1] == ' ' || player_area[row_ship + 1][column_ship - 1] == char(220)) && (player_area[row_ship + 1][column_ship + 2] == ' ' || player_area[row_ship + 1][column_ship + 2] == char(220)) &&
		(player_area[row_ship][column_ship - 1] == ' ' || player_area[row_ship][column_ship - 1] == char(220)) && (player_area[row_ship][column_ship + 2] == ' ' || player_area[row_ship][column_ship + 2] == char(220)) &&
		(player_area[row_ship + 2][column_ship] == ' ' || player_area[row_ship + 2][column_ship] == char(220)) && (player_area[row_ship + 2][column_ship + 1] == ' ' || player_area[row_ship + 2][column_ship + 1] == char(220)) &&
		(player_area[row_ship + 2][column_ship - 1] == ' ' || player_area[row_ship + 2][column_ship - 1] == char(220)) && (player_area[row_ship + 2][column_ship + 2] == ' ' || player_area[row_ship + 2][column_ship + 2] == char(220)))
	{
		player_area[row_ship][column_ship] = ' ';
		player_area[row_ship][column_ship + 1] = ' ';
		player_area[row_ship + 1][column_ship] = '0';
		player_area[row_ship + 1][column_ship + 1] = '0';
		row_ship++;
	}
	else
		cout << "\a" << endl;
}
void down_func3(int& row_ship, int& column_ship, char** player_area)
{
	if (player_area[row_ship + 1][column_ship] == ' ' && player_area[row_ship + 1][column_ship + 1] == ' ' && player_area[row_ship + 1][column_ship + 2] == ' ' &&
		(player_area[row_ship][column_ship - 1] == ' ' || player_area[row_ship][column_ship - 1] == char(220)) && (player_area[row_ship][column_ship + 3] == ' ' || player_area[row_ship][column_ship + 3] == char(220)) &&
		(player_area[row_ship + 2][column_ship] == ' ' || player_area[row_ship + 2][column_ship] == char(220)) && (player_area[row_ship + 2][column_ship + 1] == ' ' || player_area[row_ship + 2][column_ship + 1] == char(220)) &&
		(player_area[row_ship + 2][column_ship + 2] == ' ' || player_area[row_ship + 2][column_ship + 2] == char(220)) && (player_area[row_ship + 1][column_ship - 1] == ' ' || player_area[row_ship + 1][column_ship - 1] == char(220)) &&
		(player_area[row_ship + 1][column_ship + 3] == ' ' || player_area[row_ship + 1][column_ship + 3] == char(220)) && (player_area[row_ship + 2][column_ship - 1] == ' ' || player_area[row_ship + 2][column_ship - 1] == char(220)) &&
		(player_area[row_ship + 2][column_ship + 3] == ' ' || player_area[row_ship + 2][column_ship + 3] == char(220)))
	{
		player_area[row_ship][column_ship] = ' ';
		player_area[row_ship][column_ship + 1] = ' ';
		player_area[row_ship][column_ship + 2] = ' ';
		player_area[row_ship + 1][column_ship] = '0';
		player_area[row_ship + 1][column_ship + 1] = '0';
		player_area[row_ship + 1][column_ship + 2] = '0';
		row_ship++;
	}
	else
		cout << "\a" << endl;
}
void down_func4(int& row_ship, int& column_ship, char** player_area)
{
	if (player_area[row_ship + 1][column_ship] == ' ' && player_area[row_ship + 1][column_ship + 1] == ' ' && player_area[row_ship + 1][column_ship + 2] == ' ' && player_area[row_ship + 1][column_ship + 3] == ' ' &&
		(player_area[row_ship][column_ship - 1] == ' ' || player_area[row_ship][column_ship - 1] == char(220)) && (player_area[row_ship][column_ship + 4] == ' ' || player_area[row_ship][column_ship + 4] == char(220)) &&
		(player_area[row_ship + 2][column_ship] == ' ' || player_area[row_ship + 2][column_ship] == char(220)) && (player_area[row_ship + 2][column_ship + 1] == ' ' || player_area[row_ship + 2][column_ship + 1] == char(220)) &&
		(player_area[row_ship + 2][column_ship + 2] == ' ' || player_area[row_ship + 2][column_ship + 2] == char(220)) && (player_area[row_ship + 2][column_ship + 3] == ' ' || player_area[row_ship + 2][column_ship + 3] == char(220)) &&
		(player_area[row_ship + 1][column_ship - 1] == ' ' || player_area[row_ship + 1][column_ship - 1] == char(220)) && (player_area[row_ship + 1][column_ship + 4] == ' ' || player_area[row_ship + 1][column_ship + 4] == char(220)) &&
		(player_area[row_ship + 2][column_ship - 1] == ' ' || player_area[row_ship + 2][column_ship - 1] == char(220)) && (player_area[row_ship + 2][column_ship + 4] == ' ' || player_area[row_ship + 2][column_ship + 4] == char(220)))
	{
		player_area[row_ship][column_ship] = ' ';
		player_area[row_ship][column_ship + 1] = ' ';
		player_area[row_ship][column_ship + 2] = ' ';
		player_area[row_ship][column_ship + 3] = ' ';
		player_area[row_ship + 1][column_ship] = '0';
		player_area[row_ship + 1][column_ship + 1] = '0';
		player_area[row_ship + 1][column_ship + 2] = '0';
		player_area[row_ship + 1][column_ship + 3] = '0';
		row_ship++;
	}
	else
		cout << "\a" << endl;
}

// LEFT FUNCTIONS ========================================================================
void left_func1(int& row_ship, int& column_ship, char** player_area)
{
	if (player_area[row_ship][column_ship - 1] == ' ' && (player_area[row_ship][column_ship - 2] == ' ' || player_area[row_ship][column_ship - 2] == char(220)) &&
		(player_area[row_ship - 1][column_ship - 2] == ' ' || player_area[row_ship - 1][column_ship - 2] == char(220)) &&
		(player_area[row_ship + 1][column_ship - 2] == ' ' || player_area[row_ship + 1][column_ship - 2] == char(220)))
	{
		player_area[row_ship][column_ship] = ' ';
		player_area[row_ship][column_ship - 1] = '0';
		column_ship--;
	}
	else
		cout << "\a" << endl;
}

void left_func2(int& row_ship, int& column_ship, char** player_area)
{
	if (player_area[row_ship][column_ship - 1] == ' ' && (player_area[row_ship][column_ship - 2] == ' ' || player_area[row_ship][column_ship - 2] == char(220)) &&
		(player_area[row_ship - 1][column_ship - 2] == ' ' || player_area[row_ship - 1][column_ship - 2] == char(220)) &&
		(player_area[row_ship + 1][column_ship - 2] == ' ' || player_area[row_ship + 1][column_ship - 2] == char(220)))
	{
		player_area[row_ship][column_ship + 1] = ' ';
		player_area[row_ship][column_ship] = '0';
		player_area[row_ship][column_ship - 1] = '0';

		column_ship -= 1;
	}
	else
		cout << "\a" << endl;
}

void left_func3(int& row_ship, int& column_ship, char** player_area)
{
	if (player_area[row_ship][column_ship - 1] == ' ' && (player_area[row_ship][column_ship - 2] == ' ' || player_area[row_ship][column_ship - 2] == char(220)) &&
		(player_area[row_ship - 1][column_ship - 2] == ' ' || player_area[row_ship - 1][column_ship - 2] == char(220)) &&
		(player_area[row_ship + 1][column_ship - 2] == ' ' || player_area[row_ship + 1][column_ship - 2] == char(220)))
	{
		player_area[row_ship][column_ship + 2] = ' ';
		player_area[row_ship][column_ship + 1] = '0';
		player_area[row_ship][column_ship] = '0';
		player_area[row_ship][column_ship - 1] = '0';



		column_ship -= 1;
	}
	else
		cout << "\a" << endl;
}

void left_func4(int& row_ship, int& column_ship, char** player_area)
{
	if (player_area[row_ship][column_ship - 1] == ' ' && (player_area[row_ship][column_ship - 2] == ' ' || player_area[row_ship][column_ship - 2] == char(220)) &&
		(player_area[row_ship - 1][column_ship - 2] == ' ' || player_area[row_ship - 1][column_ship - 2] == char(220)) &&
		(player_area[row_ship + 1][column_ship - 2] == ' ' || player_area[row_ship + 1][column_ship - 2] == char(220)))
	{
		player_area[row_ship][column_ship + 3] = ' ';
		player_area[row_ship][column_ship + 2] = '0';
		player_area[row_ship][column_ship + 1] = '0';
		player_area[row_ship][column_ship] = '0';
		player_area[row_ship][column_ship - 1] = '0';


		column_ship -= 1;
	}
	else
		cout << "\a" << endl;
}

// RIGHT FUNCTIONS================================================================================================
void right_func1(int& row_ship, int& column_ship, char** player_area)
{
	if (player_area[row_ship][column_ship + 1] == ' ' && (player_area[row_ship][column_ship + 2] == ' ' || player_area[row_ship][column_ship + 2] == char(220)) &&
		(player_area[row_ship + 1][column_ship + 2] == ' ' || player_area[row_ship + 1][column_ship + 2] == char(220)) &&
		(player_area[row_ship - 1][column_ship + 2] == ' ' || player_area[row_ship - 1][column_ship + 2] == char(220)))
	{
		player_area[row_ship][column_ship] = ' ';
		player_area[row_ship][column_ship + 1] = '0';
		column_ship++;

	}
	else
		cout << "\a" << endl;
}
void right_func2(int& row_ship, int& column_ship, char** player_area)
{
	if (player_area[row_ship][column_ship + 2] == ' ' && (player_area[row_ship][column_ship + 3] == ' ' || player_area[row_ship][column_ship + 3] == char(220)) &&
		(player_area[row_ship + 1][column_ship + 3] == ' ' || player_area[row_ship + 1][column_ship + 3] == char(220)) &&
		(player_area[row_ship - 1][column_ship + 3] == ' ' || player_area[row_ship - 1][column_ship + 3] == char(220)))
	{

		player_area[row_ship][column_ship] = ' ';
		player_area[row_ship][column_ship + 1] = '0';
		player_area[row_ship][column_ship + 2] = '0';
		column_ship++;

	}
	else
		cout << "\a" << endl;
}
void right_func3(int& row_ship, int& column_ship, char** player_area)
{
	if (player_area[row_ship][column_ship + 3] == ' ' && (player_area[row_ship][column_ship + 4] == ' ' || player_area[row_ship][column_ship + 4] == char(220)) &&
		(player_area[row_ship + 1][column_ship + 4] == ' ' || player_area[row_ship + 1][column_ship + 4] == char(220)) &&
		(player_area[row_ship - 1][column_ship + 4] == ' ' || player_area[row_ship - 1][column_ship + 4] == char(220)))
	{

		player_area[row_ship][column_ship] = ' ';
		player_area[row_ship][column_ship + 1] = '0';
		player_area[row_ship][column_ship + 2] = '0';
		player_area[row_ship][column_ship + 3] = '0';
		column_ship++;

	}
	else
		cout << "\a" << endl;
}
void right_func4(int& row_ship, int& column_ship, char** player_area)
{
	if (player_area[row_ship][column_ship + 4] == ' ')
	{

		player_area[row_ship][column_ship] = ' ';
		player_area[row_ship][column_ship + 1] = '0';
		player_area[row_ship][column_ship + 2] = '0';
		player_area[row_ship][column_ship + 3] = '0';
		player_area[row_ship][column_ship + 4] = '0';
		column_ship++;

	}
	else
		cout << "\a" << endl;
}




// Replace Functions For find enemy cordination


void up_func_for_aim(int& row_ship, int& column_ship, char** player_area)
{
	if (player_area[row_ship - 1][column_ship] == ' ')
	{
		player_area[row_ship][column_ship] = ' ';
		player_area[row_ship - 1][column_ship] = 'X';
		row_ship--;
	}
	else
		cout << "\a" << endl;
}

void down_func_for_aim(int& row_ship, int& column_ship, char** player_area)
{
	if (player_area[row_ship + 1][column_ship] == ' ')
	{
		player_area[row_ship][column_ship] = ' ';
		player_area[row_ship + 1][column_ship] = 'X';
		row_ship++;
	}
	else
		cout << "\a" << endl;
}

void left_func_for_aim(int& row_ship, int& column_ship, char** player_area)
{
	if (player_area[row_ship][column_ship - 1] == ' ')
	{
		player_area[row_ship][column_ship] = ' ';
		player_area[row_ship][column_ship - 1] = 'X';
		column_ship--;
	}
	else
		cout << "\a" << endl;
}

void right_func_for_aim(int& row_ship, int& column_ship, char** player_area)
{
	if (player_area[row_ship][column_ship + 1] == ' ')
	{
		player_area[row_ship][column_ship] = ' ';
		player_area[row_ship][column_ship + 1] = 'X';
		column_ship++;

	}
	else
		cout << "\a" << endl;
}
