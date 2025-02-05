# Dataset Column Analyzer

## Overview
This Jupyter Notebook reads two datasets, **Iris** and **Titanic**, and performs a basic analysis of selected columns. It prints the data types and counts the number of non-null instances for each chosen column.

## Datasets Used
- **Iris.csv**: Contains flower measurements like sepal length, petal length, etc.
- **titanic.csv**: Contains passenger details such as age, siblings/spouses aboard, and fare paid.

## Features
- Reads CSV files into pandas DataFrames.
- Extracts specific columns for analysis.
- Displays the data types of the selected columns.
- Counts the total number of available (non-null) instances in each column.

## Requirements
- Python 3.x
- Jupyter Notebook
- pandas library

## How to Use
1. Place `Iris.csv` and `titanic.csv` in the same directory as this notebook.
2. Open the notebook in Jupyter.
3. Run all cells to see the column analysis.

## Example Output
Iris: SepalLengthCm: float64 SepalWidthCm: float64 PetalLengthCm: float64

Titanic: Age: float64 SibSp: int64 Fare: float64

Iris: SepalLengthCm: 150 SepalWidthCm: 150 PetalLengthCm: 150

Titanic: Age: 891 SibSp: 891 Fare: 891