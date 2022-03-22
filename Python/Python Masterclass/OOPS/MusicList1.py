class Song:

    def __init__(self, name, artist, duration=0) -> None:
        self.name = name
        self.artist = artist
        self.duration = duration


class Album:

    def __init__(self, name, year, artist) -> None:
        self.name = name
        self.year = year
        if artist is None:
            self.artist = Artist("Various Artists")
        else:
            self.artist = artist
        
        self.tracks = []
        
    def addSong(self, song, position=None):
        if position is None:
            self.tracks.append(song)
        else:
            self.tracks.insert(position, song)


class Artist:
    
    def __init__(self, name) -> None:
        self.name = name
        self.album = []

    def addAlbum(self, album):
        self.album.append(album)


def loadData():
    newArtist = None
    newAlbum = None
    artistList = []  

    with open("OOPS/albums.txt", 'r') as fileData:
        for line in fileData:
            artist, album, year, song = tuple(line.strip("\n").split("\t"))
            year = int(year)
            print("{} : {} : {} : {}".format(artist, album, year, song))

            if newArtist == None:
                newArtist = Artist(artist)
            elif newArtist.name != artist:
                newArtist.addAlbum(newAlbum)
                artistList.append(newArtist)
                newArtist = Artist(artist)
                newAlbum = None                 #TODO: Comment this line to check the behaviour
                
            if newAlbum == None:
                newAlbum = Album(album, year, artist)
            elif newAlbum.name != album:
                newArtist.addAlbum(newAlbum)
                # newAlbum.addSong(song)
                newAlbum = Album(album, year, artist)
            
            newSong = Song(song, artist)
            newAlbum.addSong(newSong)

        if newArtist != None:
            if newAlbum != None:
                newArtist.addAlbum(newAlbum)
            artistList.append(newArtist)
    return artistList


def createCheckFile(artistList):
    with open("OOPS/checkFile.txt", 'w') as cFile:
        for artist in artistList:
            for album in artist.album:
                for song in album.tracks:
                    print("{0.name}\t{1.name}\t{1.year}\t{2.name}".format(artist, album, song),
                    file=cFile)



if __name__ == "__main__":
    artists = loadData()
    print("There are {} artists".format(len(artists)))
    createCheckFile(artists)