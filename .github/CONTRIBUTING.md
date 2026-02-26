# Contributing to Andypolis

Thank you for your interest in contributing! This project was developed as a major assignment for **Algorithms and Programming II**, but any improvements, bug fixes, or new ideas are more than welcome to make this strategy game even more robust.

## How to Contribute

1. **Fork** the repository.
2. Create your branch: `git checkout -b feature/new-functionality`.
3. Make your changes and commit them: `git commit -m "Add new functionality"`.
4. Push your branch: `git push origin feature/new-functionality`.
5. Open a **Pull Request**.

## Ideas for Contribution

- **Pathfinding Algorithms:** Implement **Dijkstra** or **A*** to calculate the shortest path for player movement across different terrain types.
- **New Buildings & Materials:** Add new structures to `edificios.txt` with unique rules (e.g., a "Bank" that generates resources every 3 turns).
- **Graphical Interface (GUI):** Transition from the current CLI/Terminal output to a 2D window using libraries like SFML or SDL2.
- **AI Opponent:** Create a basic bot that can make strategic decisions instead of requiring two human players.
- **Save/Load System:** Implement a feature to save the current state of the map and player inventories to a file.
- **Code Refactoring:** Improve the Abstract Data Types (TDAs) or implement Design Patterns (like *Singleton* for the Map or *Factory* for Buildings).

## Development Tips

- **Memory Safety:** This is a C++ project. Always check your work with `make valgrind`. Every `new` must have a `delete`, and every allocated array must be freed.
- **TDA Integrity:** Keep the logic encapsulated. The `Map` should handle coordinates, the `Player` should handle inventory, and the `Building` should handle its own requirements.
- **File Parsing:** If you modify the input files in `archivos_de_texto/`, ensure the parser in the source code is updated to handle new formats without crashing.
- **Const Correctness:** Use `const` for any method that does not modify the object's state to ensure code safety and clarity.



Thank you for your collaboration! 🎉
