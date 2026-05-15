### CSCE 2211 Spring 2026 Applied Data Structures
# Assignment 3: Dijkstra & Floyd–Warshall (C++)

## Project Description


This project implements three shortest-path algorithms on a weighted directed graph loaded from a text file:

- **Dijkstra's Algorithm** (`dijkstra(int src)`) — single-source shortest paths using a min-heap priority queue.
- **Repeated Dijkstra** (`repeatedDijkstra()`) — runs Dijkstra's Algorithm from every node to produce an All-Pairs Shortest Path (APSP) matrix.
- **Floyd–Warshall** (`floydWarshall()`) — dynamic programming approach to APSP.

## How to Build and Run

### Prerequisites
- Visual Studio or any any C++ IDE or compiler
- C++ CMake tools

### Build Steps
1. Open Visual Studio and choose **Open a Local Folder**
2. Select the root project folder
3. Visual Studio will automatically detect and configure CMake
4. Go to **Build → Build All** (`Ctrl+Shift+B`)

### Run the Main Program
- Press **F5** or click on the green play button `Code_library_run.exe`

## How to Run Tests

Open the terminal in Visual Studio (**View → Terminal**) and run:
```
.\out\build\x64-Debug\Google_tests\Google_Tests_run.exe
```

The three test cases verify:
1. **GraphLoadTest** — graph loads with the correct node and edge count (100 nodes, 9900 edges).
2. **DijkstraTest** — single-source shortest paths from node 0 match expected values.
3. **CompareAlgorithms** — `repeatedDijkstra()` and `floydWarshall()` produce identical APSP matrices.

## Assumptions / Notes

- The graph file `graph.cpp` uses 0-indexed nodes.
- Edge weights are positive integers, so Dijkstra can be used.
- Unreachable pairs are represented as `1e9` (10⁹).
- The Floyd–Warshall implementation handles integer overflow when both `dist[i][k]` and `dist[k][j]` are "infinity".
- `Google_tests/CMakeLists.txt` was updated to include `add_subdirectory(lib)` so that GoogleTest is compiled from the bundled source under `Google_tests/lib/`.


## 📝 To-Do List

- [x] Implement `dijkstra(int src)`.
- [x] Implement `repeatedDijkstra() `.
- [x] Implement `floydWarshall()`.
- [x] Run all test cases successfully.
- [x] Commit and push your code regularly to GitHub.