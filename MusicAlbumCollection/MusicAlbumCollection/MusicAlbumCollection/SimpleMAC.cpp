//
//  SimpleMAC.cpp
//  MusicAlbumCollection
//
//  Created by Ayca Begum Tascioglu on 5.10.2020.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include "SimpleMAC.h"
using namespace std;
MAC::MAC(){
    this->noOfMusicAlbums = 0;
    this->musicAlbums = NULL;
}

MAC::~MAC(){
    if(noOfMusicAlbums>0){
        delete [] musicAlbums;
    }
}
MAC::MAC(const MAC &macToCopy){
    this->noOfMusicAlbums = macToCopy.noOfMusicAlbums;
    if(noOfMusicAlbums ==0){ this->musicAlbums = NULL; delete [] musicAlbums; return;}
    this->musicAlbums = new MusicAlbum[macToCopy.noOfMusicAlbums];
    for(int i = 0; i <macToCopy.noOfMusicAlbums;i++){
        this->musicAlbums[i] = macToCopy.musicAlbums[i];
    }
    
}
void MAC::operator=(const MAC &right){
    if (this != &right){
        this->noOfMusicAlbums = right.noOfMusicAlbums;
        if(noOfMusicAlbums ==0){ this->musicAlbums = NULL; delete [] musicAlbums; return;}
        this->musicAlbums = new MusicAlbum[right.noOfMusicAlbums];
        for(int i = 0; i <right.noOfMusicAlbums;i++){
            this->musicAlbums[i] = right.musicAlbums[i];
        }
        
    }
}
int MAC::findMusicAlbum(const string maArtist, const string maTitle){
    if(noOfMusicAlbums==0){return -2;}
    else{
        for (int i =0; i < noOfMusicAlbums;i++){
            if(musicAlbums[i].getMusicAlbumArtist() == maArtist && musicAlbums[i].getMusicAlbumTitle() == maTitle){
                return i;
            }
        }
    }
    return -1;
}
bool MAC::addMusicAlbum(const string maArtist, const string maTitle, const int maYear){
    int search = findMusicAlbum(maArtist, maTitle);
    if (search >=0){cout<<"Already in collection"<<endl; return false;}
    else if (search==-2){
        this->musicAlbums = new MusicAlbum[1]; noOfMusicAlbums++;
        musicAlbums[0] = MusicAlbum(maArtist,maTitle,maYear);
    }
    else{
        noOfMusicAlbums++; MusicAlbum* tmp = new MusicAlbum[noOfMusicAlbums];
        for (int i = 0; i<noOfMusicAlbums-1;i++){
            tmp[i] = musicAlbums[i];
        }
        delete [] musicAlbums;
        musicAlbums = tmp;
        musicAlbums[noOfMusicAlbums-1] = MusicAlbum(maArtist,maTitle,maYear);
    }
    return true;
}

bool MAC::removeMusicAlbum(const string maArtist, const string maTitle){
    int search = findMusicAlbum(maArtist, maTitle);
    if (search <0){cout<<"Not in collection"<<endl; return false;}
    noOfMusicAlbums--; MusicAlbum* tmp = new MusicAlbum[noOfMusicAlbums];
    for (int i = 0; i<search-1;i++){
        tmp[i] = musicAlbums[i];
    }
    for (int i = search+1; i<noOfMusicAlbums+1;i++){
        tmp[i-1] = musicAlbums[i];
    }
    delete [] musicAlbums;
    musicAlbums = tmp;
    return true;
}

int MAC::getMusicAlbums(MusicAlbum *&allMusicAlbums){
    allMusicAlbums = new MusicAlbum[noOfMusicAlbums];
    for (int i = 0; i <noOfMusicAlbums;i++){
        allMusicAlbums[i] = musicAlbums[i];
        cout<<"92"<<endl;
        cout<<musicAlbums[i].getMusicAlbumArtist()<<musicAlbums[i].getMusicAlbumTitle()<<endl;
    }
    return noOfMusicAlbums;
}
