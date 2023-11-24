# Set only store unique value, and don't care about position
nums = [2,32,1,31,3,4,2,2,32,23]
nums_set = set(nums) # Hear we convert list into set
print(nums_set)

nums_set.add(443)
print(nums_set)

# nums_set[3] = 3 # We can't assign or change in this way
 
# To remove something we can use
nums_set.remove(2)
print(nums_set)

# For loop through it
for nm in nums_set:
    print(nm)

# For conditional check
if 3 in nums_set:
    print("We have that!")
else:
    print('Sorry, We don\'t have that')


# Set can hadel union and intersection
a = {1,2,3,4,56,7}
b = {6,4,3,7,5}
print(a & b)
print(a | b)