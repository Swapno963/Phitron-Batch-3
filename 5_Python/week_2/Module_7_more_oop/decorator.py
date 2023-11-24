import math
def timer(func):
    def inner(*args, **kwargs):
        print('time started')
        func(*args, **kwargs)
        print('time ended')
    return inner


# timer()()

@timer # easy way to make decorator
def get_fractrial(n):
    print("frac started")
    print(math.factorial(n))

# timer(get_fractrial)() # zamalar way to make decorator


# botha will work
# get_fractrial(4)
get_fractrial(n=4)