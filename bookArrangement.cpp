#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

// Define a hash function for pair<int, int>
struct pair_hash {
    inline std::size_t operator()(const std::pair<int,int> & v) const {
        return v.first*31+v.second;
    }
};

int main() {
    int N;
    cin >> N;

    unordered_map<pair<int,int>, int, pair_hash> books;
    unordered_set<pair<int,int>, pair_hash> wellPlaced;
    vector<pair<int,int>> directions = {{0,1}, {0,-1}, {1,0}, {-1,0}};

    for (int i = 0; i < N; ++i) {
        int x, y;
        cin >> x >> y;
        pair<int,int> current = {x, y};
        books[current] = 0;

        // Check and update neighbors
        for (auto& dir : directions) {
            pair<int,int> neighbor = {x + dir.first, y + dir.second};
            if (books.find(neighbor) != books.end()) {
                books[current]++;
                books[neighbor]++;

                // Update well-placed status for neighbor
                if (books[neighbor] == 3) {
                    wellPlaced.insert(neighbor);
                } else if (books[neighbor] == 4) {
                    wellPlaced.erase(neighbor);
                }
            }
        }

        // Update well-placed status for current book
        if (books[current] == 3) {
            wellPlaced.insert(current);
        }

        cout << wellPlaced.size() << endl;
    }

    return 0;
}
