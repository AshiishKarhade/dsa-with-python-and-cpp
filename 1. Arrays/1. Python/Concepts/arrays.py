# Python lists can be used as Arrays in Python

# Creating an array
things = ['pen', 'car', 'books']
print(things)


# accessing the array element
print(things[0]) # prints the first element of the array things

# modifying the value of the array element
things[1] = 'pencil' # second element of things, gets changed to pencil
print(things[1])

# length/size of the array
length = len(things) 
print(length) # length variable holds the size of the array which is in this case, 3

# looping through the array/lists
for a in things: # iterating over each element of the array
    print(a) 

for i in range(len(things)): # iterating the variable i upto the length of array
    print(things[i])        # and then accessing the array element present at index i


