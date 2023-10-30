#pragma once

// Banners 

char* about_game=new char[10000]{"Battleship (also called Battleships and Sea Battle) is a two player guessing game.\
The game itself appears to predate at least World War I, but it's unknown just how far back people have been playing many different variations.\
 It started off as a pencil and paper game until it was released by the Milton Bradley Company as physical board game in 1967.\
 The game is now produced and sold by Hasbro."};



char* game_banner = new char[] {"		 _______              __      __      __             ______   __        __           \n\
		|       \\            |  \\    |  \\    |  \\           /      \\ |  \\      |  \\          \n\
		| $$$$$$$\\  ______  _| $$_  _| $$_   | $$  ______  |  $$$$$$\\| $$____   \\$$  ______  \n\
		| $$__/ $$ |      \\|   $$ \\|   $$ \\  | $$ /      \\ | $$___\\$$| $$    \\ |  \\ /      \\ \n\
		| $$    $$  \\$$$$$$\\$$$$$$ \\$$$$$$   | $$|  $$$$$$\\ \\$$    \\ | $$$$$$$\\| $$|  $$$$$$\\\n\
		| $$$$$$$\\ /      $$ | $$ __ | $$ __ | $$| $$    $$ _\\$$$$$$\\| $$  | $$| $$| $$  | $$\n\
		| $$__/ $$|  $$$$$$$ | $$|  \\| $$|  \\| $$| $$$$$$$$|  \\__| $$| $$  | $$| $$| $$__/ $$\n\
		| $$    $$ \\$$    $$  \\$$  $$ \\$$  $$| $$ \\$$     \\ \\$$    $$| $$  | $$| $$| $$    $$\n\
		 \\$$$$$$$   \\$$$$$$$   \\$$$$   \\$$$$  \\$$  \\$$$$$$$  \\$$$$$$  \\$$   \\$$ \\$$| $$$$$$$ \n\
			                                                                   | $$      \n\
						           	                           | $$      \n\
										            \\$$      \n"};





char* information_banner = new char[] {"	 ######  ##   ##   #######  #####   ######   ##   ##    ###     # #####  ######   #####   ##   ##  \n\
	   ##    ###  ##    ##   # ### ###   ##  ##  ### ###   ## ##   ## ## ##    ##    ### ###  ###  ##  \n\
	   ##    #### ##    ##     ##   ##   ##  ##  #######  ##   ##     ##       ##    ##   ##  #### ##  \n\
	   ##    #######    ####   ##   ##   #####   ## # ##  ##   ##     ##       ##    ##   ##  #######  \n\
	   ##    ## ####    ##     ##   ##   ## ##   ##   ##  #######     ##       ##    ##   ##  ## ####  \n\
	   ##    ##  ###    ##     ### ###   ## ##   ##   ##  ##   ##     ##       ##    ### ###  ##  ###  \n\
	 ######  ##   ##   ####     #####   #### ##  ### ###  ##   ##    ####    ######   #####   ##   ##  \n\
"};

//==========================================
//Arrow Places

char** arrow_fill_question = new char* [100] {
	new char[100] {char(219)},
		new char[100] {""}
};

char** front_arrow_fill_question = new char* [100] {
	new char[100] {char(219)},
		new char[100] {" "}
};

char** arrow = new char* [100] {
	new char[100] {"<="},
		new char[100] {""},
		new char[100] {""}
};

char** front_arrow = new char* [100] {
	new char[100] {"=>"},
		new char[100] {"  "},
		new char[100] {"  "}
};

char** arrow_ship_choice = new char* [100]
{
	new char[100] {char(219)},
		new char[100] {" "},
		new char[100] {" "},
		new char[100] {" "}
		
};
//========================================
// Arrow Cordination

int arrow_place = 0;
int arrow_place_fill_type = 0;
int ship_choice_place = 0;

//========================================
//  Row And Column

int row = 17;
int column = 17;

//========================================
// Arrays
char** player_arr;
char** bot_arr;
char** fake_bot_arr;

//========================================
// Ships Count

int carrier_count = 1;
int battleship_count = 2;
int submarine_count = 3;
int destroyer_count = 4;




// Ship Cordinat 
 
int ship_row = 10;
int ship_column = 10;


// Temp
int temp_break_fill = 0;
bool temp_check = false;

// Enemy Row Column
int aim_row = 10;
int aim_column = 10;


// Ship Length Count

short int player_ship_count = 20;
short int bot_ship_count = 20;



short int destroy_column;
short int destroy_row;