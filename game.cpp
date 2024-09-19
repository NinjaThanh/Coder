#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_TARGETS = 10;
const int MAX_SHOTS = 10;

struct Target {
    int x;
    int y;
    bool alive;
};

struct Shot {
    int x;
    int y;
};

void initTargets(Target targets[], int numTargets) {
    for (int i = 0; i < numTargets; i++) {
        targets[i].x = rand() % 10;
        targets[i].y = rand() % 10;
        targets[i].alive = true;
    }
}

void printTargets(Target targets[], int numTargets) {
    for (int i = 0; i < numTargets; i++) {
        if (targets[i].alive) {
            cout << "Target " << i << ": (" << targets[i].x << ", " << targets[i].y << ")" << endl;
        }
    }
}

bool isHit(Target target, Shot shot) {
    return (target.x == shot.x && target.y == shot.y);
}

int main() {
    srand(time(NULL));
    Target targets[MAX_TARGETS];
    Shot shots[MAX_SHOTS];
    int numTargets = 5;
    int numShots = 0;
    int score = 0;

    initTargets(targets, numTargets);

    while (numShots < MAX_SHOTS) {
        cout << "Targets:" << endl;
        printTargets(targets, numTargets);

        cout << "Shots:" << endl;
        for (int i = 0; i < numShots; i++) {
            cout << "(" << shots[i].x << ", " << shots[i].y << ")" << endl;
        }

        cout << "Enter shot coordinates (x y): ";
        Shot shot;
        cin >> shot.x >> shot.y;

        bool hit = false;
        for (int i = 0; i < numTargets; i++) {
            if (targets[i].alive && isHit(targets[i], shot)) {
                targets[i].alive = false;
                hit = true;
                score++;
                break;
            }
        }

        if (hit) {
            cout << "Hit!" << endl;
        } else {
            cout << "Miss!" << endl;
        }

        shots[numShots] = shot;
        numShots++;
    }

    cout << "Game over! Final score: " << score << endl;

    return 0;
}
