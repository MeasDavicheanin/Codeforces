n=input()
n=n.split(" ")
k=int(n[1])
n=int(n[0])
count=0
data=input()
data=data.split(" ")
passing=int(data[k-1])
for item in data:
    if int(item)>=passing and (int(item)>0):
        count+=1
print(count)