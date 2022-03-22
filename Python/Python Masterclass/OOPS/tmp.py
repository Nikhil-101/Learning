class abc:
    
    def __init__(self, name, class_no) -> None:
        self.name = name
        self.class_no = class_no


aList = []

a = abc("Nikhil", 12)
aList.append(a)
b = abc("Chhaya", 9)
aList.append(b)
print(a, b)

print(aList)
print(aList[0].name)

# print("Nikhil" in aList.name)
print("*"*20)

print(str(a))
print(a)
print(str(b))
