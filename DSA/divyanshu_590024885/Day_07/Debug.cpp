#include <iostream>
#include <cstdio>

const int STADIUMS = 3;
const int MAX_GOALS = 50;
const int PLAYERS = 11;

int goalCount[STADIUMS] = {0};
int goals[STADIUMS][MAX_GOALS] = {0};
int playerGoals[PLAYERS] = {0};

void addGoalToStadium2(int minute, int playerID)
{
    if (playerID < 0 || playerID >= PLAYERS) 
    {
        printf("Invalid Player ID\n");
        return;
    }

    if (goalCount[2] >= MAX_GOALS)
    {
        printf("Stadium 2 is full\n");
        return;
    }
    
    goals[2][goalCount[2]] = minute;
    playerGoals[playerID]++;
    goalCount[2]++;
}

int totalGoals()
{
    int total = 0;
    for (int s = 0; s < STADIUMS; s++)
    {
        total += goalCount[s];
    }
    return total;
}

int topScorer()
{
    int maxG = -1, winner = -1;
    for (int p = 0; p < PLAYERS; p++)
    {
        if (playerGoals[p] > maxG)
        {
            maxG = playerGoals[p];
            winner = p;
        }
    }
    return winner;
}

void displayStadium(int stadium)
{
    if (stadium < 0 || stadium >= STADIUMS) 
    {
        printf("Invalid Stadium\n");
        return;
    }

    for (int i = 0; i < goalCount[stadium]; i++)
    {
        printf("%d ", goals[stadium][i]);
    }
    printf("\n");
}

int main() {
    addGoalToStadium2(12, 0);
    addGoalToStadium2(45, 5);
    addGoalToStadium2(89, 5);

    printf("Total goals across all stadiums: %d\n", totalGoals());
    printf("Top scorer player ID: %d\n", topScorer());
    
    printf("Stadium 2 goals: ");
    displayStadium(2);

    return 0;
}