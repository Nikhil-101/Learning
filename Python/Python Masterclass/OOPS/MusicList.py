class Song:

    def __init__(self, title, duration=0) -> None:
        self.title = title
        self.duration = duration


class Album:

    def __init__(self, name, year) -> None:
        self.name = name
        self.year = year
        self.songList = []

    def addSong(self, song, position=None):
        if position is None:
            self.songList.append(song)
        else:
            self.songList.insert(position, song)


class Artist:

    def __init__(self, name) -> None:
        self.name = name
        self.albumList = []

    def addAlbum(self, name):
        self.albumList.append(name)


def loadData():
    newArtist = None
    newAlbum = None
    artistList = []
    newSong = None
    with open("OOPS/albums.txt", 'r') as albumFile:
        for line in albumFile:
            artist, album, year, song = tuple(line.strip("\n").split("\t"))
            year = int(year)
            print(artist, album, year, song)
        
            if newArtist == None or artist not in artistList:
                print(newArtist)
                newArtist = Artist(artist)
                print(newArtist)
                artistList.append(newArtist)
                

            elif newArtist in artistList:
                pass
            
            if newAlbum == None or newAlbum not in newArtist.albumList:
                newAlbum = Album(album, year)
                newArtist.addAlbum(newAlbum)
            
            elif newAlbum in newArtist.albumList:
                pass
                
            newSong = Song(song)
            newAlbum.addSong(newSong)
    return artistList


def createCheckFile(artistList):
    with open("OOPS/checkAlbum.txt", 'w') as cFile:
        for artist in artistList:
            for album in artist.albumList:
                for song in album.songList:
                    print("{0.name}:{1.name}:{1.year}:{2.title}"
                    .format(artist, album, song), file=cFile)

if __name__ == "__main__":
    artist = loadData()
    createCheckFile(artist)
