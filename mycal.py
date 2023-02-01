from codersigma import *
import os as taeka


while True:
    taeka.system('clear')
    pr()

    menu = int(input('\nSelecting:'))
    taeka.system('clear')
    firstNumber = int(input('\n\nEnter your furst number:'))
    secondNumber = int(input('Enter your second number:'))
    taeka.system('clear')

    if menu == 1:
        print(firstNumber, '+', secondNumber,'=',add(firstNumber, secondNumber))
    elif menu == 2:
        print(firstNumber, '-', secondNumber,'=',sub(firstNumber, secondNumber))
    elif menu == 3:
        print(firstNumber, '/', secondNumber,'=',div(firstNumber, secondNumber))
    elif menu == 4:
        print(firstNumber, '*', secondNumber,'=',mul(firstNumber, secondNumber))
    else:
        print('invalid data or input\n')
        continue
        
    again = input('\nDo you want to calculate again? enter y or n:').lower()
    
    if again == "y":
      continue
    else:
      break
      