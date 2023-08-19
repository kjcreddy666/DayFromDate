# Day of the Week Calculator

This C++ program calculates the day of the week for a given date using Zeller's Congruence algorithm. It takes a date in the format DD/MM/YYYY as input and provides the corresponding day of the week.

## Table of Contents

- [Introduction](#introduction)
- [Zeller's Congruence algorithm](#Zeller's-Congruence-algorithm)
- [How It Works](#how-it-works)
- [Usage](#usage)
- [Requirements](#requirements)
- [Limitations](#limitations)
- [Contributing](#contributing)

## Introduction

Calculating the day of the week for a given date can be achieved using Zeller's Congruence formula. This program implements the formula to determine the day of the week for a user-provided date.

## Zeller's Congruence algorithm

Zeller's Congruence is an algorithm used to calculate the day of the week for a given date. It's a mathematical formula that converts a date into a numerical value, which is then used to determine the day of the week. The algorithm takes into account the day, month, and year of the date and uses modular arithmetic to compute the day of the week.

Here's how Zeller's Congruence algorithm works:

    1. **Preprocessing:**
   - Let:
     - `h` be the day of the week (0 = Saturday, 1 = Sunday, 2 = Monday, ..., 6 = Friday).
     - `q` be the day of the month.
     - `m` be the month (3 = March, 4 = April, ..., 14 = February). Note that January and February are counted as months 13 and 14 of the previous year.
     - `K` be the year of the century (year % 100).
     - `J` be the zero-based century (year / 100).

    2. **Calculation:**
   - The formula for calculating `h` is:
     ```
     h = (q + 13(m + 1)/5 + K + K/4 + J/4 + 5J) % 7
     ```

    3. **Output:**
   - The value of `h` corresponds to the day of the week (0 = Saturday, 1 = Sunday, 2 = Monday, ..., 6 = Friday).

Zeller's Congruence algorithm considers leap years, as well as the shift of January and February to months 13 and 14 of the previous year. This ensures accurate calculations for various dates.

However, Zeller's Congruence is best suited for dates in the Gregorian calendar and might not produce accurate results for dates before the adoption of the Gregorian calendar in certain regions.

Here's a brief explanation of the variables used in the algorithm:
- `q`: Day of the month.
- `m`: Month.
- `K`: Year of the century (last two digits of the year).
- `J`: Zero-based century (first two digits of the year divided by 100).

The algorithm is particularly useful for applications like calendar generation, scheduling, and date-related calculations.

## How It Works

The program consists of several functions that work together to calculate the day of the week:

- `oddDaysInMonth`: Calculates the number of odd days in a given month and year, accounting for leap years.
- `oddDaysInYear`: Calculates the number of odd days in a given year using Zeller's Congruence principles.
- `Day`: Uses the results from the above functions to determine the day of the week for a provided date.
- `main`: Takes user input for a date and calls the `Day` function to display the calculated day of the week.

## Usage

1. Compile the program using a C++ compiler.
2. Run the compiled executable.
3. Enter the date in the format DD/MM/YYYY when prompted.
4. The program will display the day of the week corresponding to the entered date.

## Requirements

- C++ compiler

## Limitations

- The program assumes the usage of the Gregorian calendar and may not provide accurate results for dates outside its scope.
- Accuracy might decrease for dates far in the past or future.

## Contributing

Contributions to the project are welcome. If you find any issues or want to enhance the program, feel free to submit a pull request.
