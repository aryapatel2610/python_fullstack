

def extract_artist(song_title):
    pos = song_title.index("-")
    artist = song_title[pos + 1:]
    return artist.strip()

song = "Shape of You - Ed Sheeran"

print(extract_artist(song))
