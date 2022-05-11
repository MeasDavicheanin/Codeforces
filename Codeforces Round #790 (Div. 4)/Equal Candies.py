
t=int(input())
for i in range(0, t):
    c=input()
    data=input().split(" ")
    numbers=[int(x) for x in data]
    sub=min(numbers)
    count=0
    for i in range(0, len(numbers)):
        count+=numbers[i]-sub
    print(count)