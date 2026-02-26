# 🎮 Andypolis

A turn-based strategy game for two players, developed as a final project for **Algorithms and Programming II (95.14)** at FIUBA. Players compete to fulfill objectives by navigating a grid, collecting resources, and constructing buildings while strategically sabotaging their opponent.



# 📸 Overview
Andypolis simulates a city-building economy where every move matters. From resource management to map positioning, the game challenges players to optimize their turns to reach victory conditions before their rival.

# 📍 Table of Contents
- [📝 Description](#-description)
  - [🧩 Key Features](#-key-features)
  - [🧱 Project Structure](#-project-structure)
  - [🛠️ Technologies](#️-technologies)
- [🚀 Getting Started](#-getting-started)
  - [📋 Prerequisites](#-prerequisites)
  - [⚙️ Compilation & Execution](#️-compilation--execution)
- [🎮 Gameplay](#-gameplay)
- [🤝 Contributing](#-contributing)
- [👥 Team](#-team)
- [📄 License](#-license)

---

# 📝 Description
The project focuses on **Object-Oriented Programming (OOP)** in C++, emphasizing memory management and the implementation of custom data structures to handle the map, player inventories, and building types.

## 🧩 Key Features
- **Grid-Based Navigation:** A dynamic map loaded from text files where players move and interact.
- **Resource Economy:** Collect materials (wood, stone, metal) to fund construction.
- **Building System:** Unique properties for each structure type.
- **Strategic Sabotage:** Specialized resources to hinder the opponent's progress.
- **Objective-Driven:** Multiple paths to victory based on specific game goals.

## 🧱 Project Structure
```text
Andypolis/
├── archivos_de_texto/ # Game data (materials, map, buildings, locations)
├── include/           # Header files (.h / .hpp)
├── src/               # Implementation files (.cpp)
├── Makefile           # Build automation script
├── Enunciado.pdf      # Detailed game rules and requirements
└── main.cpp           # Application entry point
```

## 🛠️ Technologies
* Language: C++
* Build Tool: GNU Make
* Memory Debugging: Valgrind
* Standard: C++11 or higher

# 🚀 Getting Started
## 📋 Prerequisites
* A C++ compiler (GCC/G++ recommended).
* `make` utility installed.
* (Optional) `valgrind` for memory leak checks.

## ⚙️ Compilation & Execution
1. Clone the repository:
  ```bash
  git clone [https://github.com/SebaB29/Andypolis.git](https://github.com/SebaB29/Andypolis.git)
  cd Andypolis
  ```
2. Compile the project:
  ```bash
  make main
  ```
3. Run the game:
  ```bash
  ./Andypolis
  ```
4. Run with Valgrind (Memory Check):
  ```bash
  make valgrind
  ```
⚠️ Important: Ensure the folder `archivos_de_texto/` contains the files `materiales.txt`, `ubicaciones.txt`, `edificios.txt`, and `mapa.txt` for the game to initialize correctly.

# 🎮 Gameplay
Players take turns performing actions:
* **Move**: Navigate through the coordinates of the map.
* **Build**: Spend collected materials to place structures.
* **Collect**: Gather spawned resources from the grid.
* **Attack**: Use sabotage mechanics to gain an advantage.

# 🤝 Contributing
1. Fork the project.
2. Create your Feature Branch (git checkout -b feature/AmazingFeature).
3. Commit your changes (git commit -m 'Add some AmazingFeature').
4. Push to the Branch (git push origin feature/AmazingFeature).
5. Open a Pull Request.

# 👥 Team
| Nombre                  | Github                                                  |
|-------------------------|---------------------------------------------------------|
| Sebastián Brizuela      | [SebaB29](https://github.com/SebaB29)                   |
| Brayan Saiago           | [brayans22](https://github.com/brayans22)               |
| Ezequiel Lasalle        | [EzequielLassalle](https://github.com/EzequielLassalle) |
| Franco Losardo          | [flosardo](https://github.com/flosardo)                 |

# 📄 License
This project is licensed under the MIT License - see the LICENSE file for details.
