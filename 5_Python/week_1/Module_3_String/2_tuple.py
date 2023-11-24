def return_multiple(a,b):
    return a,b
print(return_multiple(3,4)) # This is will give us tuple

things = 'pen','phone','laptop','key','bottle'
print(things)

# We can go one by one
for th in things:
    print(th)

# It can be slice or reverse
print(things[1:])

mega = ([1,2,3],[6,5,3])
print(mega)

# mega[0] = [3,4,3] # we can't assign item to tuple

# But we can change the insider things
mega[0][1] = 3232
print(mega)
