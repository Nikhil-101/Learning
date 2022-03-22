class Player:

    def __init__(self, name) -> None:
        self.name = name
        self._lives = 3
        self._level = 1
        self._score = 0

    def _getLive(self):
        return self._lives
    
    def _setLive(self, lives):
        if lives >= 0:
            self._lives = lives
        else:
            print("Lives cannot be less than zero")

    lives = property(_getLive, _setLive)

    def _getLevel(self):
        return self._level
    
    def _setLevel(self, level):
        if level > 0:
            diffLevel = level - self._level
            self._level = level
            self.score += 1000 * diffLevel
        else:
            print("Level cannot go below 1")
    
    level = property(_getLevel, _setLevel)

    @property
    def score(self):
        return self._score

    @score.setter
    def score(self, score):
        self._score = score

    def __str__(self) -> str:
        return "Name: {0.name}, Lives: {0.lives}, Level: {0.level}, Score: {0.score}".format(self)
