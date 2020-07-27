import csv

import matplotlib.pyplot as plt

id = set()
table = {}
with open('volume.csv') as file:
    reader = csv.DictReader(file, delimiter=';')
    for row in reader:
        if not row['id'] in id:
            id.add(row['id'])
            table[row['id']] = {'step':[],'volume':[], 'A_0':[],'B_0':[], 'C':[], 'L':[], 'p':[], 'Compl':[],\
                 'Aext':[],  'Bext':[],'A_uscita':[], 'A_ingresso':[],'B_uscita':[], 'B_ingresso':[]}
        table[row['id']]['step'].append(row['step'])
        table[row['id']]['volume'].append(row['volume'])
        table[row['id']]['A_0'].append(row['A_0'])
        table[row['id']]['B_0'].append(row['B_0'])
        table[row['id']]['C'].append(row['C'])
        table[row['id']]['L'].append(row['L'])
        table[row['id']]['p'].append(row['p'])
        table[row['id']]['Compl'].append(row['Compl'])
        table[row['id']]['Aext'].append(row['Aext'])
        table[row['id']]['Bext'].append(row['Bext'])
        table[row['id']]['A_uscita'].append(row['A_uscita'])
        table[row['id']]['A_ingresso'].append(row['A_ingresso'])
        table[row['id']]['B_uscita'].append(row['B_uscita'])
        table[row['id']]['B_ingresso'].append(row['B_ingresso'])
for key in table:
    with open(key+".csv",'w') as file:
        file.write("step;volume;A_0;B_0;C;L;p;Compl;Aext;Bext;A_ingresso;A_uscita;B_ingresso;B_uscita\n")
        for i in range(len(table[key]['step'])):
                file.write(table[key]['step'][i]+ ";"+table[key]['volume'][i] 
                           +";"+table[key]['A_0'][i] \
                           +";"+table[key]['B_0'][i] \
                           +";"+table[key]['C'][i] \
                           +";"+table[key]['L'][i] \
                           +";"+table[key]['p'][i] \
                           +";"+table[key]['Compl'][i] \
                           +";"+table[key]['Aext'][i] \
                           +";"+table[key]['Bext'][i]
                           +";"+table[key]['A_ingresso'][i] \
                           +";"+table[key]['A_uscita'][i] \
                           +";"+table[key]['B_ingresso'][i] \
                           +";"+table[key]['B_uscita'][i] +"\n")
