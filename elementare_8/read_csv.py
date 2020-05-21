import csv

import matplotlib.pyplot as plt

id = set()
table = {}
with open('volume.csv') as file:
    reader = csv.reader(file, delimiter=';')
    for row in reader:
        if not row[0] in id:
            id.add(row[0])
            table[row[0]] = {'x':[], 'y':[]}
        table[row[0]]['x'].append(row[1])
        table[row[0]]['y'].append(row[2])
for key in table:
    with open(key+".csv",'w') as file:
        for i in range(len(table[key]['x'])):
                file.write(table[key]['x'][i]+";"+table[key]['y'][i]+"\n")
