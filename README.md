# Voting System

A modular, command-line voting application written in C. This project demonstrates proper C project structure with separate compilation units, header files, and a professional build system.

## Features

- **Cast Votes** - Vote for one of 4 candidates (A, B, C, D)
- **View Statistics** - See total vote counts for each candidate (Admin only)
- **Leading Candidate** - Check which candidate is currently leading (Admin only)
- **Password Protection** - Admin functions protected with password authentication
- **Cross-Platform** - Works on Windows, Linux, and macOS
- **Modular Architecture** - Clean separation of concerns with multiple source files

## Requirements

- **GCC** (GNU Compiler Collection)
- **Make** (for building with Makefile)
- **Git** (for version control)

### Installing Requirements

**Linux (Ubuntu/Debian):**
```bash
sudo apt update
sudo apt install build-essential git
```

**macOS:**
```bash
xcode-select --install
```

**Windows:**
- Download and install [MinGW](https://www.mingw-w64.org/)
- Or use [MSYS2](https://www.msys2.org/)

## Project Structure

```
voting-system/
├── src/
│   ├── main.c          # Entry point and main menu loop
│   ├── voting.c        # Voting and statistics functions
│   ├── admin.c         # Admin authentication and menus
│   └── utils.c         # Utility functions (display, clearing screen)
├── include/
│   ├── voting.h        # Voting function declarations
│   ├── admin.h         # Admin function declarations
│   └── utils.h         # Utility function declarations
├── build/              # Compiled object files (auto-generated)
├── Makefile            # Build configuration
├── README.md           # This file
├── LICENSE             # Project license
└── .gitignore          # Git ignore rules
```

## Building the Project

### Using Make (Recommended)

```bash
# Navigate to project directory
cd voting-system

# Build the project
make

# Run the program
make run

# Clean build artifacts
make clean

# View available commands
make help
```

### Manual Compilation

```bash
gcc -Wall -Wextra -std=c99 -I./include -o voting_system src/main.c src/voting.c src/admin.c src/utils.c
```

### On Windows with MinGW

```bash
mingw32-make
mingw32-make run
```

## Running the Application

### After Building

```bash
./voting_system
```

### On Windows

```bash
voting_system.exe
```

### Using Make

```bash
make run
```

## Usage

### Main Menu

When you start the application, you'll see:

```
1. Cast a vote                               
2. View vote count (Admin only)              
3. View leading candidate (Admin only)       
4. Exit                                      
```

### Casting a Vote

1. Select option **1** from main menu
2. Choose a candidate (A, B, C, or D)
3. Vote will be recorded
4. Choose to cast another vote or return home

### Admin Functions

1. Select option **2** or **3** from main menu
2. Enter the admin password: `shadow`
3. View statistics or leading candidate
4. Return to home or exit

## Admin Access

**Password:** `shadow`

The admin area allows you to:
- View detailed vote statistics for all candidates
- See which candidate is currently leading
- Track voting progress in real-time

## Project Features

### Modular Design
- **main.c** - Program entry point and main loop
- **voting.c** - Core voting logic and statistics display
- **admin.c** - Authentication and admin menu handling
- **utils.c** - Shared utility functions

### Header Files
- Clean function declarations separated from implementation
- Prevents code duplication
- Easier to maintain and extend

### Build System
- **Makefile** for easy compilation and management
- Automatic dependency tracking
- Clean separation of object files in `build/` directory

## Code Quality

- **Warning Flags** - Compiled with `-Wall -Wextra -Wpedantic` for strict error checking
- **Standard Compliance** - Uses C99 standard for better compatibility
- **Input Validation** - Password buffer overflow protection
- **Cross-Platform** - Compatible with Windows, Linux, and macOS

## File Descriptions

| File | Purpose |
|------|---------|
| `src/main.c` | Entry point, main menu loop, overall control flow |
| `src/voting.c` | Vote casting logic, statistics display, candidate ranking |
| `src/admin.c` | Authentication system, admin menu handling |
| `src/utils.c` | Screen clearing, menu printing, user input handling |
| `include/voting.h` | Vote-related function declarations and VoteCount struct |
| `include/admin.h` | Admin function declarations and constants |
| `include/utils.h` | Utility function declarations |
| `Makefile` | Build instructions and project compilation rules |

## How It Works

1. **Program starts** → main.c runs
2. **Main menu displayed** → via utils.c
3. **User selects option** → main.c processes choice
4. **Voting/Admin functions** → voting.c or admin.c handle logic
5. **Loop continues** → until user exits

## Compilation Process

```
main.c ─┐
        ├─> gcc compiles to .o files ─> Linked together ─> voting_system
voting.c┤
admin.c ├─> (in build/ directory)
utils.c ┘
```

## Troubleshooting

### "gcc: command not found"
- GCC is not installed. See Requirements section above.

### "make: command not found"
- Make is not installed. Install build-essential (Linux) or similar package.

### Program won't compile
- Ensure all files are in correct directories
- Check that header file paths in #include statements are correct
- Verify C99 support: `gcc --version`

### Screen doesn't clear
- This is normal on some systems. The program uses `clear` (Linux/Mac) and `cls` (Windows)
- Data is still being recorded correctly

## Future Enhancements

Potential features for future versions:
- Save vote data to a file
- Reset/clear voting counts
- Multiple voting sessions
- Enhanced security (password hashing)
- Vote validation to prevent double voting
- Candidate name customization
- Different voting algorithms

## Contributing

To contribute to this project:
1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Test thoroughly
5. Submit a pull request

## License

This project is licensed under the terms specified in the LICENSE file. See LICENSE for more details.

## Author

**Original Developer:** Avijit Roy  
**Updated:** 07/07/2022  
**Refactored into Modular Project:** 2024

## Support

If you encounter issues:
1. Check the Troubleshooting section
2. Verify all files are created correctly
3. Ensure proper file permissions
4. Check that your C compiler supports C99 standard

## Version History

### v1.0.0 (Current)
- Refactored into modular C project structure
- Separated code into multiple source files
- Added professional build system with Makefile
- Improved code quality and readability
- Cross-platform compatibility
- Enhanced error handling
- Better project documentation

---

**Happy Voting! 🗳️**