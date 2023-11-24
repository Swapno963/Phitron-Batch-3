import pyautogui
from time import sleep

t = int(input())

sleep(3)
# t = 5
for i in range(0,t+1):
    for j in range(0,i):
        pyautogui.write('#')
    pyautogui.press("enter")




