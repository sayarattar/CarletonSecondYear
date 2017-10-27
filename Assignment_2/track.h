 #include "songLibrary.h"
 #include <iostream>
 using namespace std;

 class Track{
     public:
         Track(string mp3, int albumID, int songID, int trackNumber);
         Track(Track& antrack);
         ~Track();
         string getFileName(void);
         int    getSongID(void);
         int    getTrackNumber(void);
         int    getAlbumID(void);
         void   printTrack(void);
     private:
         string mp3;
         int    albumID;
         int    songID;
         int    trackNumber;
 };
