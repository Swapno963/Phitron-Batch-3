# function is a first class object
def double_decker():
    print("starting the double decker")
    def inner_fun():
        print('inside the inner')
        return 10
    return inner_fun

# print(double_decker()())

def do_something(work):
    print('started')
    work()
    print('work ended')

def code():
    print("starts coding")

do_something(code)