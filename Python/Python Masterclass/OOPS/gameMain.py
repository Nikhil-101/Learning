import game
import enemy


randomMonster = enemy.Enemy("Basic Monster", 100, 2)
randomMonster.takeDamage(10)
print(randomMonster)

randomMonster.takeDamage(10)
print(randomMonster)

troll = enemy.Troll("Trolling")
troll.takeDamage(5)
print(troll)
print(randomMonster)
troll.grunt()