t=int(input())
for i in range(0, t):
    num=input()
    num1=list(num[:3])
    num2=list(num[3:])
    number1=[int(x) for x in num1]
    number2=[int(x) for x in num2]
    if sum(number1)==sum(number2):
        print("YES")
    else:
        print("No")
