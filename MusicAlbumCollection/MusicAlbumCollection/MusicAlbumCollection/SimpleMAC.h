//
//  SimpleMAC.h
//  MusicAlbumCollection
//
//  Created by Ayca Begum Tascioglu on 5.10.2020.
//

#ifndef SimpleMAC_h
#define SimpleMAC_h
#include <string>
using namespace std;
#include "SimpleMusicAlbum.h"

class MAC{
public:
    MAC();
    ~MAC();
    MAC(const MAC &macToCopy);
    void operator=(const MAC &right);
    
    bool addMusicAlbum(const string maArtist, const string maTitle, const int maYear);
    
    bool removeMusicAlbum(const string maArtist, const string maTitle);
    
    int getMusicAlbums(MusicAlbum *&allMusicAlbums);
    
    int findMusicAlbum(const string maArtist, const string maTitle);
private:
    MusicAlbum *musicAlbums;
    int noOfMusicAlbums;
};

#endif /* SimpleMAC_h */
