import pyautogui
from time import sleep
sleep(3)
for i in range(0,3):
    pyautogui.write('I like this',interval=.23)
    pyautogui.press('enter')


