import csv

import matplotlib.pyplot as plt

table = {}
with open('volume.csv','r') as file:
    reader = csv.reader(file)
    for row in reader:
        table[row[0]] = row[1:]
print(table)