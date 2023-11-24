add = lambda a,b: a + b
double = lambda a : a * 2
print(add(3,4))

nums = [3,2,32,32,43,123,3]
print(nums)
double_nums = map(double,nums)
print(list(double_nums))


actors = [
    {'name':'sunny','age':43},
    {'name':'prianka','age':23},
    {'name':'parinity','age':13},
    {'name':'dipika','age':53},
]

print(list(filter(lambda actor : actor['age']<40, actors)))

