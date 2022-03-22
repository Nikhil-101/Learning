class Enemy:

    def __init__(self, name="Enemy", hitPoints=0, lives=1) -> None:
        self.name = name
        self.revivalHitPoints = hitPoints
        self.hitPoints = hitPoints
        self.lives = lives

    def takeDamage(self, damage):
        remainingPoints = self.hitPoints - damage
        if remainingPoints >= 0:
            self.hitPoints = remainingPoints
            if self.hitPoints == 0 and self.lives > 0:
                self.lives -= 1
            print("i took {} damage and have {} damage left"
            .format(damage, remainingPoints))
        else:
            if self.lives > 0:
                self.lives -= 1
                if self.lives > 0:
                    self.hitPoints = self.revivalHitPoints
                    print("{} lives remaining for mosnter after revival".format(self.lives))
                if self.lives == 0:
                    self.hitPoints = 0
        
        
    def __str__(self) -> str:
        return "Name: {0.name}, Lives: {0.lives}, Hit Points: {0.hitPoints}".format(self)


class Troll(Enemy):

    def __init__(self, name="Troll", hitPoints=50, lives=1) -> None:
        super().__init__(name=name, hitPoints=hitPoints, lives=lives)

    def grunt(self):
        print("whooooooooo")