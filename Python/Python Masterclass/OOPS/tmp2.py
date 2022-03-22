class boss():

    def __init__(self, name, classNo) -> None:
        self.name = name
        self._a = 5
        @property
        def a(self):
            print(self._a)
        @a.setter
        def a(self, a):
            self._a = a
        self.classNo = classNo
        print('Root class!!!')


class a(boss):

    def __init__(self, name, classNo) -> None:
        self.name = name
        self.classNo = classNo
        print("self value inside init of {}, {}: {}".format(name, classNo, self))
        super().__init__()
        self.b = boss("Chhaya", 9)
        print(self.b)
        self.c = self.b


abcd = a("Nikhil", 12)
print("Object value of {}: {}".format(abcd.name, abcd))

