person = {'name':'Swapno','age':32,'job':'beker'}
print(person)

# to get onley key
print(person.keys())

#And for values
print(person.values())

#To add sometng interesting
person['gf'] = False


# For delete
del person['age']
print(person)



#dictonary looping
for a,b in person.items():
    print(a," ",b)