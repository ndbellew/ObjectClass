#!/usr/bin/python3
from __future__ import print_function
from abc import ABCMeta, abstractmethod
import test

FacFail = "Factory Failed"

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
        assert(self.UserLogger.title == "Title"), FacFail
        assert(self.UserLogger.text == "Text"), FacFail
        assert(self.UserLogger.source == "Source"), FacFail
        f = FactoryEL()
        self.UserEmailLogger = f.create()
        assert(self.UserLogger.title == "Title"), FacFail
        assert(self.UserLogger.text == "Text"), FacFail
        assert(self.UserEmailLogger.source == "Source"), FacFail
        assert(self.UserEmailLogger.email == "email@email.com"), FacFail
        f = FactoryPM()
        self.UserProcessManager = f.create()
        assert(self.UserProcessManager.desc == "Process"), FacFail
        assert(self.UserProcessManager.name =="Name"), FacFail

    def ComposeEmail(self):
        title = input("Please input title\n")
        text = input("What is your email?\n")
        source =  input("What the email to be sent from?\n")
        email = input("What email is it going to?\n")
        if title != "":
            self.UserEmailLogger.title = title
        if text !="":
            self.UserEmailLogger.text = text
        if source != "":
            self.UserEmailLogger.source = source
        if email != "":
            self.UserEmailLogger.email = email
        self.RunProcess("Email")

    def RunProcess(self, name):
        if name != "":
            self.UserProcessManager.name = name
        if self.UserProcessManager.name == "Email":
            self.UserProcessManager.desc = ("Email sent from "+self.UserEmailLogger.source +" going to "+self.UserEmailLogger.email+".")
        self.UserProcessManager.run()
        self.Log(name, self.UserProcessManager.desc, "Process")
        self.SendEmail()

    def Log(self, title, text, source):
        print (self.UserLogger.run())
        if title != "":
            self.UserLogger.title = title
        if text != "":
            self.UserLogger.text = text
        if source != "":
            self.UserLogger.source = source
        print( self.UserLogger.Log())



    def SendEmail(self):
        print(self.UserEmailLogger.run())



def main():
    U = User()
    U.ComposeEmail()


if __name__ == "__main__":
    main()
