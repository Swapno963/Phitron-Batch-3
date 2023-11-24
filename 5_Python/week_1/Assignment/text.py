def abc(*args):
    for ar in args:
        print(ar)
abc("Hello","Programers")


def abc2(**kwargs):
    for key,value in kwargs.items():
        print(key, " ",value)
abc2(name="Swapno",age=23)