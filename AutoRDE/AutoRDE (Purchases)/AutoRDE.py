from openpyxl import load_workbook
from PIL import Image
import pyautogui
import time

book = load_workbook("Input.xlsx")
sheet = book.active
rows = sheet.max_row

print(sheet.max_row)

pyautogui.alert(text='Run the program?', title='AutoRDE', button='Run')
time.sleep(0.5)

for i in range(1, rows):
    word = sheet.cell(row=i,column=1).value
    print(word)

    tin = sheet.cell(row=i,column=2).value
    vtin = str(tin)[0:9]
    print(vtin)

    number = sheet.cell(row=i,column=3).value
    print(str(number))

    addr = sheet.cell(row=i,column=4).value
    div = len(str(addr)) / 2
    addr1 = str(addr[0:int(div)].lower())
    addr2 = str(addr[int(div):].lower()).strip()
    print(addr1)
    print(addr2)

    while pyautogui.locateCenterOnScreen("tin.png", confidence = 0.9) == None:
        print("tinGoffscreen")
    tincord = pyautogui.locateCenterOnScreen("tin.png", confidence = 0.8)
    pyautogui.click(tincord)
    pyautogui.typewrite(str(vtin))

    while pyautogui.locateCenterOnScreen("no.png", confidence = 0.9) != None:
        nocord = pyautogui.locateCenterOnScreen("no.png", confidence = 0.9)
        pyautogui.click(nocord)

    while pyautogui.locateCenterOnScreen("RegisteredName.png", confidence = 0.95) != None:
        namecord = pyautogui.locateCenterOnScreen("RegisteredName.png", confidence = 0.95)
        pyautogui.click(namecord)
        pyautogui.typewrite(word.lower())
        
        while pyautogui.locateCenterOnScreen("Substreet.png", confidence = 0.91) == None:
            print("suboffscreen")
        subcord = pyautogui.locateCenterOnScreen("Substreet.png", confidence = 0.91)
        pyautogui.click(subcord)
        pyautogui.typewrite(addr1)

        while pyautogui.locateCenterOnScreen("District.png", confidence = 0.90) == None:
            print("disoffscreen")
        discord = pyautogui.locateCenterOnScreen("District.png", confidence = 0.90)
        pyautogui.click(discord)
        pyautogui.typewrite(addr2)

    while pyautogui.locateCenterOnScreen("Grosstax.png", confidence = 0.9) == None:
        print("GROSoffscreen")

    numbercord = pyautogui.locateCenterOnScreen("Grosstax.png", confidence = 0.9)
    pyautogui.click(numbercord)
    pyautogui.typewrite(str(number))

    time.sleep(0.2)
    pyautogui.press(".")
    time.sleep(0.2)
    pyautogui.press("enter")
    time.sleep(0.2)
    pyautogui.press(".")

    if number % 1 == 0:
        pyautogui.press("enter")
        pyautogui.press(".")

    while pyautogui.locateCenterOnScreen("Vatrate.png", confidence = 0.87) == None:
        print("VAToffscreen")

    vatcord = pyautogui.locateCenterOnScreen("Vatrate.png", confidence = 0.8)
    pyautogui.click(vatcord)
    pyautogui.write("12")
    print("works")

    while pyautogui.locateCenterOnScreen("save.png", confidence = 0.95) == None:
        print("SAVoffscreen")

    savecord = pyautogui.locateCenterOnScreen("save.png", confidence = 0.95)
    pyautogui.click(savecord)
    print("works")

    while pyautogui.locateCenterOnScreen("add.png", confidence = 0.95) == None:
        print("ADDoffscreen")
    addcord = pyautogui.locateCenterOnScreen("add.png", confidence = 0.95)
    pyautogui.click(addcord)
    time.sleep(0.2)


