import csv

import matplotlib.pyplot as plt

id = set()
table = {}
with open('volume.csv') as file:
    reader = csv.DictReader(file, delimiter=';')
    for row in reader:
        if not row['id'] in id:
            id.add(row['id'])
            table[row['id']] = {'step':[], 'A_0':[],'B_0':[], 'C':[]}
        table[row['id']]['step'].append(row['step'])
        table[row['id']]['A_0'].append(row['A_0'])
        table[row['id']]['B_0'].append(row['B_0'])
        table[row['id']]['C'].append(row['C'])
for key in table:
    with open(key+".csv",'w') as file:
        for i in range(len(table[key]['step'])):
                file.write(table[key]['step'][i]+";"+table[key]['A_0'][i] \
                           +";"+table[key]['B_0'][i] \
                           +";"+table[key]['C'][i]+"\n")
