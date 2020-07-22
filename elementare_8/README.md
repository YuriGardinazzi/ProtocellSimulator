# Elementare 8

__NOTE__: 

* _random change_ on initialization default values (step 1 instead of 0)
* _random change_ of values after division
* A_ingresso, A_uscita, B_ingresso, B_uscita set to 0 after integration
* Aext and Bext are changed as follows __[Aext]' = ([Aext]*Volume-A_netto)/Volume__ and __[Bext]' = ([Bext]*Volume-A_netto)/Volume__
* the substances in the environment are changed by the amount A_netto and B_netto

* __random change__ is between [-10%; +10%] appliet to A, B, C, L

## Cell positions
![cell_position](datas/positions.png)

## Cell positions with A and B in the environment
![environment](datas/cell_and_substances.jpeg)

__Note__: A and B are cubes, they're just not completely well renderized


## After few steps
![some_step](datas/few_steps.jpeg)

## After about 100 steps
![more_step](datas/more_steps.jpeg)


# Memory usage
the following statistics shows how the substances use a very large amount of memory 
![statistics](datas/statistics.jpg)

# Some graph of single cell metabolism

### Cell 0
![cell0](Cell0.png)

### Cell 1
![cell0](Cell1.png)

### Cell 2
![cell0](Cell2.png)

### Cell 3
![cell0](Cell3.png)


__TODO__  
* Implement inheritance of sbml module (daughter cells have no module at the moment)
