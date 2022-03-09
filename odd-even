class student:
    school = "apathy"

    def __init__(self, m1, m2, m3):
        self.m1 = m1
        self.m2 = m2
        self.m3 = m3
    
    def avg(self):  #instance method
       return (self.m1 + self.m2 + self.m3)/3

    @classmethod   #classmethod
    def info(cls):
        return cls.school

    @staticmethod   #staticmethod
    def agera_vgera():
        print("iska class aur instance method se kuch lena dena nhi hai")

s1 = student(45,67,78)
s2 = student(75,43,21)

#r1 = s1.avg()
#print(r1)

print(student.info())  #if you don't want to type @classmethod, access info with the help of obj

student.agera_vgera()
