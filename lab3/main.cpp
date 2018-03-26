#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
	//Loading the game from a file
	ifstream inFile;
	inFile.open("puzzle.txt");
	char output[100];
	int board[9][9];
	if(inFile.is_open()){
		for(int i = 0; i < 9; i++){
			for(int j = 0; j < 9; j++){
				inFile >> board[i][j];
			}
		}
	}
	inFile.close();

	

	return 0;
}
