#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int width, height, playerX, playerY, doorX, doorY;
    char direction;
    
    FILE *file;
    file = fopen("game_state.txt", "r");
    if(file == NULL) {
    	file = fopen("game_state.txt", "w");
    	printf("Generating a new board...\nEnter width and height: ");
    	scanf("%d %d", &width, &height);
    	srand(time(NULL));
    	playerX = (rand() % width) + 1;
    	playerY = (rand() % height) + 1;
    	doorX = (rand() % width) + 1;
    	doorY = (rand() % height) + 1;
    	if ((doorX == playerX && doorY == playerY) || (doorX == 0 && doorY == 0)) {
    		doorX = (rand() % width) + 1;
    		doorY = (rand() % height) + 1;
		}
    	fprintf(file, "%d %d %d %d %d %d", width, height, playerX, playerY, doorX, doorY);
    	printf("Width: %d, Height: %d, Player: (%d,%d), Door: (%d,%d)", width, height, playerX, playerY, doorX, doorY);	
	}
	
	else {
		fscanf(file, "%d %d %d %d %d %d", &width, &height, &playerX, &playerY, &doorX, &doorY);
		fclose(file);
		file = fopen("game_state.txt", "w");
		printf("Enter move (WASD):");
		scanf(" %c", &direction);
		if (direction == 'W' || direction == 'w') {
			playerY++;
			if (playerY > height) {
				printf("Out of bound moves are rejected.");
				playerY--;
			}
			else {
			printf("Player moves up to (%d,%d)", playerX, playerY);
			}
			fprintf(file, "%d %d %d %d %d %d", width, height, playerX, playerY, doorX, doorY);

		}
		else if (direction == 'A' || direction == 'a') {
			playerX--;
			if (playerX < 1) {
				printf("Out of bound moves are rejected.");
				playerX++;
			}
			else {
				printf("Player moves left to (%d,%d)", playerX, playerY);
			}
			fprintf(file, "%d %d %d %d %d %d", width, height, playerX, playerY, doorX, doorY);

		}
		else if (direction == 'S' || direction == 's') {
			playerY--;
			if (playerY < 1 ) {
				printf("Out of bound moves are rejected.");
				playerY++;
			}
			else {
				printf("Player moves down to (%d,%d)", playerX, playerY);
			}
			fprintf(file, "%d %d %d %d %d %d", width, height, playerX, playerY, doorX, doorY);
		}
		else if (direction == 'D' || direction == 'd') {
			playerX++;
			if (playerX > width) {
				printf("Out of bound moves are rejected.");
				playerX--;
			}
			else {
				printf("Player moves right to (%d,%d)", playerX, playerY);
			}
			fprintf(file, "%d %d %d %d %d %d", width, height, playerX, playerY, doorX, doorY);

		}
		else {
			printf("Only W, A, S, D allowed.");
			fprintf(file, "%d %d %d %d %d %d", width, height, playerX, playerY, doorX, doorY);
		}
		
		if (playerX == doorX && playerY == doorY) {
			fclose(file);
			fopen("game_state.txt","w");
			printf("\nCongratulations, you escaped.\nGenerating new board...\nEnter width and height: ");
    		scanf("%d %d", &width, &height);
    		srand(time(NULL));
    		playerX = (rand() % width) + 1;
    		playerY = (rand() % height) + 1;
    		doorX = (rand() % width) + 1;
    		doorY = (rand() % height) + 1;
    		if (doorX == playerX && doorY == playerY) {
    			doorX = (rand() % width) + 1;
    			doorY = (rand() % height) + 1;
			}
    	fprintf(file, "%d %d %d %d %d %d", width, height, playerX, playerY, doorX, doorY);
    	printf("Width: %d, Height: %d, Player: (%d,%d), Door: (%d,%d)", width, height, playerX, playerY, doorX, doorY);
		}
	}
	fclose(file);
    return 0;
}

