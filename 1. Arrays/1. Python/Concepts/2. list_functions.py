# Some useful python list functions

companies = ['apple', 'amazon', 'microsoft', 'facebook']

# Append 
companies.append('netflix') # appends netflix to end of the array/list
print(companies)

companies.append('jb')
# pop
companies.pop() # removes the last element from the list

# pop(index)
companies.pop(2) # removes the element at 3rd position of the array/list

# remove()
companies.remove('facebook') # removes the element from its name

# clear()
companies.clear() # clears all the elements from the list. Becomes empty list. 


companies = ['apple', 'amazon', 'microsoft', 'facebook']

# count()
companies.count('apple') # returns 1, as only one elemnt is present with name 'apple'

# extend()
companies.extend('pubg') # adds element to the end of the list or any iterable

# index()
companies.index('amazon') # returns 1, as the index of amazon is 1

# insert()
companies.insert(4, 'tiktok') # adds the tiktok to the 5th position without removing any element

# reverse()
companies.reverse() # reverses the elements of a list

# sort() - very useful method
companies.sort() # sorts the list/array

