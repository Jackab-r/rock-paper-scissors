# Rock, Paper, Scissors

This is a simple command-line implementation of the classic **Rock Paper Scissors** game written in C, where you will be playing against the computer. It uses random number generation for computer choice, tracks scores and allows replaying the game in a loop.

---
## 🎮 Features
- Text-based UI in terminal  
- Random computer choices using 'rand( )' seeded with time(0)  
- Player vs Computer logic  
- Keeps track of score(wins, loses & draws)  
- Option to replay the game without restarting  

---

## 🧑🏻‍💻 How to Run
1. **Clone this repository**
```bash
git clone https://github.com/Jackab-r/rock-paper-scissors.git
cd rock-paper-scissors
```
2. **Compile the code**
```bash
gcc rps.c  -o rps
```
3. **Run the game**
```bash
./rps
```
---
## ⚙️ Code Structure
- rps.c: Main game logic
   - srand(time(0)) for true randomness
   - choices[ ] array to map integers to string values
   - Looping without restarting the game using while(play_again)
   - Score tracking with counters for win/loss/draw
   - Input validation for user safety
 ---
 ## 🚀 Future Add-ons(Ideas)
 - Add ASCII art for rock, paper, scissors
 - Create a best-of-N mode(best of 5)
 - Create a GUI version using Python/Tkinter
---
## 📄 License
This project is open-source and free to  use
