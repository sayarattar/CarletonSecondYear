#include "track.h"

Track::Track(int trackID, string mp3, int albumID, int songID, int trackNumber){
    this -> trackID     = trackID;
    this -> mp3         = mp3;
    this -> albumID     = albumID;
    this -> songID      = songID;
    this -> trackNumber = trackNumber;
}

Track::Track(Track & anTrack){
    this -> trackID     = anTrack.trackID;    
    this -> mp3         = anTrack.mp3;
    this -> albumID     = anTrack.albumID;
    this -> songID      = anTrack.songID;
    this -> trackNumber = anTrack.trackNumber;
}

Track::~Track(){}

string Track::getFileName(void){
    return mp3;
}
int Track::getTrackID(void){
    return trackID;
}
int Track::getSongID(void){
    return songID;
}
int Track::getTrackNumber(void){
    return trackNumber;
}
int Track::getAlbumID(void){
    return albumID;
}

void Track::printTrack(void){
    cout << "MP3 file: " << mp3 << " SongID: " << songID << " Track Number: " << trackNumber << endl;
}