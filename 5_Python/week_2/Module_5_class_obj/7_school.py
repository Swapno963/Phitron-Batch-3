class Student:
    def __init__(self,name,current_class,id):
        self.name = name
        self.id = id
        self.current_class = current_class
    
    def __repr__(self):
        return f'Student with name : {self.name}, class : {self.current_class}, id : {self.id} '


class Techer:
    def __init__(self,name,subject,id):
        self.name = name
        self.subject = subject
        self.id = id
    def __repr__(self) -> str:
        return f'Techer : {self.name}, subject : {self.subject}'
    

class School:
    def __init__(self,name) -> None:
        self.name = name
        self.techers = []
        self.students = []

    def add_teacher(self,name,subject):
        id = len(self.techers) + 101
        teacher = Techer(name,subject,id)
        self.techers.append(teacher)

    def enroll(self,name,fee):
        if fee < 6500:
            return "not enough fee"
        else:
            id = len(self.students) + 1
            student = Student(name,'c',id)
            self.students.append(student)
            return f'{name}, enroll is done, with id {id}, Extra money : {fee-6500}'

    def __repr__(self) -> str:
        print('welcome to ',self.name)
        print("______OUR TECHER ______")
        for techer in self.techers:
            print(techer)

        print('______OUR STUDENTS______')
        for student in self.students:
            print(student)
        return 'all done for now'
        


# alia = Student("alia",9,1)
# ranber = Techer('ranber','algo',2)
# print(alia)
# print(ranber)

phitron = School('phitron')
phitron.enroll('alia',4300)
phitron.enroll('kalia',5300)
phitron.enroll('zalia',8300)

phitron.add_teacher('tom_cruse','algo')
phitron.add_teacher('tom_cruse','dsa')

print(phitron)