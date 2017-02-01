#pragma once

using namespace std;

// Function for easier animation for timeline GMO

int timeLine(int dashes) {
    for (int i = 0; i < dashes; i++) {
        usleep(300000);
        cout << "|\n";
    }
}
