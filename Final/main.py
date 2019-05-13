#!/usr/bin/python3
from __future__ import print_function
from abc import ABCMeta, abstractmethod
import test


class ComputerSystem(metaclass=ABCMeta):

    @abstractmethod
    def run(self):
        return "System is now Running"

class Logger(ComputerSystem):

    def __init__(self, title, text, source):
        self.title = title
        self.text=text
        self.source=source

    def setTitle(self, title):
        self.title=title

    def setText(self, text):
        self.text = text

    def setSource(self, source):
        self.source = source

    def Log(self):
        return ("The process "+self.title+" is now logged")

    def run(self):
        return "Logger is now running"

class EmailLogger(Logger):
    def __init__(self, title, text, source, email):
        self.email = email
        Logger.__init__(self,title, text, source)

    def run(self):
        return ("Text "+self.title+" from "+self.email+ " Is now logged")

class ProcessManager(ComputerSystem):
    def __init__(self, desc, name):
        self.desc = desc
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

class User:
    def __init__(self):
        f = FactoryLog()
        self.UserLogger = f.create()
        f = FactoryEL()
        self.UserEmailLogger = f.create()
        f = FactoryPM()
        self.UserProcessManager = f.create()

    def ComposeEmail(self):
        self.UserEmailLogger.title = input("Please input title\n")
        self.UserEmailLogger.text = input("What is your email?\n")
        self.UserEmailLogger.source = input("What the email to be sent from?\n")
        self.UserEmailLogger.email = input("What email is it going to?\n")
        self.RunProcess("Email")

    def RunProcess(self, name):
        self.UserProcessManager.name = name
        if self.UserProcessManager.name == "Email":
            self.UserProcessManager.desc = ("Email sent from "+self.UserEmailLogger.source +" going to "+self.UserEmailLogger.email+".")
        self.UserProcessManager.run()
        self.Log(name, self.UserProcessManager.desc, "Process")
        self.SendEmail()

    def Log(self, title, text, source):
        print (self.UserLogger.run())
        self.UserLogger.title = title
        self.UserLogger.text = text
        self.UserLogger.source = source
        print( self.UserLogger.Log())



    def SendEmail(self):
        print(self.UserEmailLogger.run())



def main():
    U = User()
    U.ComposeEmail()


if __name__ == "__main__":
    main()
