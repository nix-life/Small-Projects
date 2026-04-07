# Text Editor (Qt6)

A simple desktop text editor built with Qt6 Widgets and CMake.

## Features

- Open text files (`.txt` and any file type)
- Edit content in a central text area
- Save content to disk
- Minimal File menu with Open, Save, and Exit

## Tech Stack

- C++17
- Qt6 Widgets
- CMake (3.16+)

## Project Structure

- `main.cpp`: Application entry point
- `mainwindow.h`: Main window class declaration
- `mainwindow.cpp`: UI setup and file open/save behavior
- `CMakeLists.txt`: Build configuration

## Prerequisites

Install the following before building:

- CMake 3.16 or newer
- A C++ compiler (for example MinGW on Windows)
- Qt6 with the Widgets module

## Build and Run

### Windows (PowerShell)

From the project root:

```powershell
cmake -S . -B build -G "MinGW Makefiles"
cmake --build build
.\build\text_editor.exe
```

If your generator creates configuration-specific output folders, run the executable from the produced output path.

### Linux/macOS

```bash
cmake -S . -B build
cmake --build build
./build/text_editor
```

## Notes

- The Open/Save dialogs default to text file filters but allow all file types.
- This project currently keeps the UI intentionally minimal and is a good base for adding features like New file, Save As, recent files, and status bar indicators.
