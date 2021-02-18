//
//  SimpleMusicAlbum.cpp
//  MusicAlbumCollection
//
//  Created by Ayca Begum Tascioglu on 5.10.2020.
//

#include <stdio.h>
#include <string>
using namespace std;
#include "SimpleMusicAlbum.h"
MusicAlbum::MusicAlbum(const string maArtist, const string maTitle, const int maYear):artist(""),title(""),year(0){
}
MusicAlbum::~MusicAlbum(){}
MusicAlbum::MusicAlbum(const MusicAlbum &maToCopy){
    this->artist = maToCopy.artist;
    this->title = maToCopy.title;
    this->year = maToCopy.year;
}
void MusicAlbum::operator=(const MusicAlbum &right){
    if(this != &right){
        this->artist = right.artist;
        this->title = right.title;
        this->year = right.year;
    }
}
string MusicAlbum::getMusicAlbumArtist(){
    return this->artist;
}
string MusicAlbum::getMusicAlbumTitle(){
    return this->title;
}
int MusicAlbum::getMusicAlbumYear(){
    return this->year;
}


