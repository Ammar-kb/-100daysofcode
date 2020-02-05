import time
import math as ma


loop = 0
while loop<=99999999999999999:
    print("""Welcome to the Scientific Calculator
            Please Select any one option :
            1. Addition
            2.Subtraction
            3.Multiplication
            4.Division
            5.Quadratic Equation""")
    print("")
    time.sleep(2)
    choice = int(input("Enter your choice : "))
    if choice==1:
          print("Welcome ! Lets perform Addition :")
          time.sleep(2)
          print("")
          num1 = float(input("Please enter the 1st Number: "))
          num2 = float(input("Please enter the 2nd Number: "))
          print("")
          print("The answer is ",(num1+num2))
          print("")

    if choice==2:
          print("Welcome ! Lets perform Subtraction :")
          time.sleep(2)
          print("")
          num1 = float(input("Please enter the 1st Number: "))
          num2 = float(input("Please enter the 2nd Number: "))
          print("")
          if(num1>num2):
              print("The Answer is",(num1-num2))
              print("")
          else:
              print("The Answer is",(num2-num1))         
              print("")
              
    if choice==3:
          print("Welcome ! Lets perform Multiplication :")
          time.sleep(2)
          print("")
          num1 = float(input("Please enter the 1st Number: "))
          num2 = float(input("Please enter the 2nd Number: "))
          print("")
          print("The answer is ",(num1*num2))
          print("")

    if choice==4:
          print("Welcome ! Lets perform Addition :")
          time.sleep(2)
          print("")
          num1 = float(input("Please enter the 1st Number: "))
          num2 = float(input("Please enter the 2nd Number: "))
          print("")
          print("The answer is ",(num1/num2))
          print("")

    if choice==5:
          print("Welcome ! Lets find the roots of the Quadratic Equation :")
          time.sleep(2)
          print("")
          num1 = float(input("Please enter the 1st Number: "))
          num2 = float(input("Please enter the 2nd Number: "))
          num3 = float(input("Please enter the 3rd Number: "))
          step1 = (num2*num2)
          step2 = (step1 - 4 * num1 * num3)
          step3 = ma.sqrt(step2)
          step4 = (2 * num1)
          step5 = (step3/step4)
          step6 = (-num2 + step5)
          step7 = (-num2 - step5)
          print("")
          print("The 2 values of the quadratic equation are : \r\n",step6 ,"and",step7)
          print("")
