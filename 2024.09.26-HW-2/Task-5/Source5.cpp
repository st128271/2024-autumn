#include <cmath>
#include <iostream>

int canPack(int l1, int w1, int h1, int l2, int w2, int h2, int lc, int wc, int hc) {
    if (l1 <= lc && w1 <= wc && h1 <= hc) {
        if (l2 <= lc && w2 <= wc && h2 <= hc) {
            return 1;
        }
        // Check if box 2 can fit into the container with box 1 on top
        if (l2 <= lc && w2 <= wc && h2 + h1 <= hc) {
            return 1;
        }
        // Check if box 2 can fit into the container with box 1 on the side
        if (l2 <= lc && w2 + w1 <= wc && h2 <= hc) {
            return 1;
        }
        // Check if box 2 can fit into the container with box 1 on the other side
        if (w2 <= lc && l2 + l1 <= wc && h2 <= hc) {
            return 1;
        }
    }
    // Check if box 2 can fit into the container
    if (l2 <= lc && w2 <= wc && h2 <= hc) {
        // Check if box 1 can fit into the remaining space
        if (l1 <= lc && w1 <= wc && h1 <= hc) {
            return 1;
        }
        // Check if box 1 can fit into the container with box 2 on top
        if (l1 <= lc && w1 <= wc && h1 + h2 <= hc) {
            return 1;
        }
        // Check if box 1 can fit into the container with box 2 on the side
        if (l1 <= lc && w1 + w2 <= wc && h1 <= hc) {
            return 1;
        }
        // Check if box 1 can fit into the container with box 2 on the other side
        if (w1 <= lc && l1 + l2 <= wc && h1 <= hc) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int l1, w1, h1, l2, w2, h2, lc, wc, hc;
    std::cin >> l1 >> w1 >> h1;
    std::cin >> l2 >> w2 >> h2;
    std::cin >> lc >> wc >> hc;
    if (canPack(l1, w1, h1, l2, w2, h2, lc, wc, hc)) {
        std::cout << "YES\n";
    }
    else {
        std::cout << "NO\n";
    }
    return 0;
}