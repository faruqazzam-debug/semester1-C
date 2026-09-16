#include <stdio.h>
#include <string.h>

#define MAX_NAME_LEN 50
#define MAX_PARTICIPANTS 100

typedef struct Participant {
    char name[MAX_NAME_LEN];
    int eatPerMinute;
    struct Participant *teammate;
} Participant;

int main() {
    int N, MIN;
    scanf("%d %d", &N, &MIN);

    Participant participants[MAX_PARTICIPANTS];

    for (int i = 0; i < N; i++) {
        scanf("%s %d", participants[i].name, &participants[i].eatPerMinute);
        participants[i].teammate = NULL;
    }

    for (int i = 0; i < N / 2; i++) {
        char name1[MAX_NAME_LEN], name2[MAX_NAME_LEN];
        scanf("%s %s", name1, name2);

        Participant *p1 = NULL, *p2 = NULL;

        for (int j = 0; j < N; j++) {
            if (strcmp(participants[j].name, name1) == 0) {
                p1 = &participants[j];
            }
            if (strcmp(participants[j].name, name2) == 0) {
                p2 = &participants[j];
            }
        }

        if (p1 != NULL && p2 != NULL) {
            p1->teammate = p2;
            p2->teammate = p1;
        }
    }

    int maxTotal = -1;
    char winner1[MAX_NAME_LEN], winner2[MAX_NAME_LEN];
    int processed[MAX_PARTICIPANTS] = {0};

    for (int i = 0; i < N; i++) {
        if (participants[i].teammate != NULL && !processed[i]) {

            int teammateIndex = -1;
            for (int j = 0; j < N; j++) {
                if (&participants[j] == participants[i].teammate) {
                    teammateIndex = j;
                    break;
                }
            }
            processed[i] = 1;
            processed[teammateIndex] = 1;

            int total = (participants[i].eatPerMinute + participants[i].teammate->eatPerMinute) * MIN;
            if (total > maxTotal) {
                maxTotal = total;
                strcpy(winner1, participants[i].name);
                strcpy(winner2, participants[i].teammate->name);
            }
        }
    }

    printf("%s & %s Win!\n", winner1, winner2);
    printf("Total Eaten: %d\n", maxTotal);

    return 0;
}