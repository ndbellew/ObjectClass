from __future__ import print_function
from abc import ABCMeta, abstractmethod

class ComputerSystem(metaclass=ABCMeta):

    @abstractmethod
    def run(self):
        return "System is now Running"

class Logger(ComputerSystem):

    def __init__(self, title, text, source):
        self.title = title
        self.text=text
        self.source=source

    def Log(self):
        return ("Text "+self.title+" Is now logged")

    def run(self):
        return "Logger is now running"

class EmailLogger(Logger):
    def __init__(self, title, text, source, email):
        self.email = email
        Logger.__init__(self,title, text, source)


    def run(self):
        return ("Text "+str(self.title)+" from "+self.email+ " Is now logged")

class ProcessManager(ComputerSystem):
    def __init__(self, process, name):
        self.process = process
        self.name = name

    def run(self):
        return ("Now running "+self.name+".")

class SystemFactory(metaclass=ABCMeta):

    @abstractmethod
    def create(self):
        pass

class FactoryLog(SystemFactory):
    def create(self):
        return Logger("Title", "Text", "Source")

class FactoryEL(SystemFactory):
    def create(self):
        return EmailLogger("Title", "Text", "Source", "email@email.com")

class FactoryPM(SystemFactory):
    def create(self):
        return ProcessManager("Process", "Name")



def main():
    factory = FactoryLog()
    FakeLog = factory.create()
    factory = FactoryEL()
    FakeEL = factory.create()
    factory = FactoryPM()
    FakePM = factory.create()
    print(FakeLog.Log())
    print(FakeEL.run())
    print(FakePM.run())

if __name__ == "__main__":
    main()
