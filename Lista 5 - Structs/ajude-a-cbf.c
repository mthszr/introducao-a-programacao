// https://www.thehuxley.com/problem/4433

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Team {
    char name[50];
    int pts;
    int vit;
    int draws;
    int defeats;
    int gp;
    int gc;
    int sg;
};

int main() {
    int N;
    scanf("%d", &N);

    struct Team teamData[N * 2 + 1];
    
    for (int i = 0; i < N * 2; i += 2) {
    
        char result[100];
        scanf(" %99[^\n]", result);
        
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        
        char homeTeam[50], awayTeam[50];
        char homeGoalsChar[10], awayGoalsChar[10];
        int homeGoals, awayGoals;

        sscanf(result, "%s %s x %s %s", homeTeam, homeGoalsChar, awayGoalsChar, awayTeam);
        
        sscanf(homeGoalsChar, "%d", &homeGoals);
        sscanf(awayGoalsChar, "%d", &awayGoals);
        
        strcpy(teamData[i].name, homeTeam);
        strcpy(teamData[i + 1].name, awayTeam);
        
        teamData[i].gp = homeGoals;
        teamData[i + 1].gp = awayGoals;
        
        teamData[i].gc = awayGoals;
        teamData[i + 1].gc = homeGoals;
        
        teamData[i].sg = homeGoals - awayGoals;
        teamData[i + 1].sg = awayGoals - homeGoals;

        if (homeGoals > awayGoals) {
            teamData[i].pts = 3;
            teamData[i + 1].pts = 0;
            teamData[i].vit = 1;
            teamData[i + 1].vit = 0;
            teamData[i].draws = 0;
            teamData[i + 1].draws = 0;
            teamData[i].defeats = 0;
            teamData[i + 1].defeats = 1;
        } else if (homeGoals == awayGoals) {
            teamData[i].pts = 1;
            teamData[i + 1].pts = 1;
            teamData[i].vit = 0;
            teamData[i + 1].vit = 0;
            teamData[i].draws = 1;
            teamData[i + 1].draws = 1;
            teamData[i].defeats = 0;
            teamData[i + 1].defeats = 0;
        } else if (homeGoals < awayGoals) {
            teamData[i].pts = 0;
            teamData[i + 1].pts = 3;
            teamData[i].vit = 0;
            teamData[i + 1].vit = 1;
            teamData[i].draws = 0;
            teamData[i + 1].draws = 0;
            teamData[i].defeats = 1;
            teamData[i + 1].defeats = 0;
        }
    }
    
    for (int i = 0; i < N * 2 - 1; i++) {
        for (int j = 0; j < N * 2 - i - 1; j++) {
            if (teamData[j].pts < teamData[j + 1].pts ||
                (teamData[j].pts == teamData[j + 1].pts && teamData[j].vit < teamData[j + 1].vit) ||
                (teamData[j].pts == teamData[j + 1].pts && teamData[j].vit == teamData[j + 1].vit && teamData[j].sg < teamData[j + 1].sg) ||
                (teamData[j].pts == teamData[j + 1].pts && teamData[j].vit == teamData[j + 1].vit && teamData[j].sg == teamData[j + 1].sg && teamData[j].gp < teamData[j + 1].gp) ||
                (teamData[j].pts == teamData[j + 1].pts && teamData[j].vit == teamData[j + 1].vit && 
                teamData[j].sg == teamData[j + 1].sg && teamData[j].gp == teamData[j + 1].gp && strcmp(teamData[j].name, teamData[j + 1].name) > 0)) {
                // Swap teamData[j] and teamData[j + 1]
                struct Team temp = teamData[j];
                teamData[j] = teamData[j + 1];
                teamData[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < N * 2; ++i) {
        printf("%d. %s %d %d %d %d %d %d %d\n", i + 1, teamData[i].name, teamData[i].pts, teamData[i].vit,
               teamData[i].draws, teamData[i].defeats, teamData[i].gp, teamData[i].gc, teamData[i].sg);
    } 
    
    return 0;
}
