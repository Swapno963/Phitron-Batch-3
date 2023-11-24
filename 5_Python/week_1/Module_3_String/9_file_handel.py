# write
with open('msg.txt','w') as file:
    file.write('Hello, How are you?')

#append
with open('msg.txt','a') as file:
    file.write('Hello, How are you?')


#read
with open('msg.txt','r') as file:
    text = file.read()
    print(text)