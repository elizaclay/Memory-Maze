#include <iostream>

const int mazeHeight = 11;
const int mazeWidth = 11;
char maze[mazeHeight][mazeWidth];

void initMaze();
void printMaze();

int main()
{
	initMaze();
	printMaze();
	return 0;
}


void initMaze() {
	for (int i = 0; i < mazeHeight; ++i) {
		for (int j = 0; j < mazeWidth; ++j) {
			maze[i][j] = '#';
		}
	}
}

void printMaze() {
	for (int i = 0; i < mazeHeight; ++i) {
		for (int j = 0; j < mazeWidth; ++j) {
			std::cout << maze[i][j];
		}
		std::cout << std::endl;
	}
}
