/*
 * This program was written by Alexander John.
 * This algorithm was written using the famous
 * Introduction to Algorithms book.
 *
 * Insertion sort works the way many people sort a hand
 * of playing cards. We start with an empty left hand and
 * the cards face down on the table. We then remove one
 * card at a time from the table and insert it into the correct
 * position in the left hand. To find the correct position
 * for a card, we compare it with each of the cards already in
 * the hand, from right to left. At all times, the cards held
 * in the left hand are sorted, and these cards were originally
 * the top cards of the pile on the table.
 */

#include <iostream>
#include "insertion-sort.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    vector<int> vect1 {5, 2, 4, 6, 1, 3};

    // could make a function to list elements
    for (int i = 0; i < vect1.size(); i++) {
        cout << vect1[i] << " ";
    }

    cout << endl;

    insertionSort(vect1);

    // could make a function to list elements
    for (int i = 0; i < vect1.size(); i++) {
        cout << vect1[i] << " ";
    }

    return 0;
}

void insertionSort(vector<int> &vect) {
    for (int i = 1; i < vect.size(); ++i) {
        // key holds value of vect at position i
        int key = vect[i];

        // j holds position i - 1 (to left)
        int j = i-1;

        // while the position j is greater than -1
        // AND the value of vect[j] is greater than the key
        while (j > -1 && vect[j] > key) {
            // value of vect[j+1] holds value of vect[j]
            vect[j+1] = vect[j];
            // position j holds position j - 1
            j = j - 1;
        }

        // value of vect[j + 1] holds key
        vect[j+1] = key;
    }
}
