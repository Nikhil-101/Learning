class Tag():

    def __init__(self, name, contents) -> None:
        self.startTag = "<{}>".format(name)
        self.endTag = "</{}>".format(name)
        self.contents = contents
    
    def __str__(self):
        print(self)
        return "{0.startTag} {0.contents} {0.endTag}".format(self)
    
    def displayTag(self):
        print(self)


class htmlStarter(Tag):

    def __init__(self) -> None:
        name = "DOCSTYLE HTML LATEST STABLE VERSION"
        super().__init__(name, "")
        self.endTag = ""


class header(Tag):

    def __init__(self) -> None:
        name = "head"
        super().__init__(name, "")


class body(Tag):

    def __init__(self) -> None:
        super().__init__("body", "")
        self.bodyContents = []
    
    def addTag(self, name, contents):
        newTag = Tag(name, contents)
        self.bodyContents.append(newTag)
    
    def displayTag(self):
        for tag in self.bodyContents:
            self.contents += str(tag)
        # print(self.bodyContents)
        super().displayTag()


class HTMLDoc:

    def __init__(self) -> None:
        self.htmlstarter = htmlStarter()
        self.head = header()
        self.body = body()

    def addTag(self, name, contents):
        self.body.addTag(name, contents)

    def display(self):
        print("<html>")
        self.htmlstarter.displayTag()
        self.head.displayTag()
        self.body.displayTag()
        print("</html>")


if __name__ == "__main__":
    startPage = HTMLDoc()
    startPage.addTag("p", "Hello World!!!")
    startPage.addTag("p", "namaste dunia")
    startPage.display()