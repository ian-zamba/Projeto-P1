#ifndef __SONGS_H
#define __SONGS_H

#include <stdio.h>
#include <stdlib.h>
#include <MMSystem.h>
#include <string.h>

typedef enum songs_ID{

    meudeus,
    baudafelicidade,
    errou,
    luvadepedreiro,
    Suuuuuu,
    souvitorioso,
    pou,
    darksouls,
    sonspessoas


}songs_ID;

char song_path[7][50];

void iniciar_sons(){

    strcpy(song_path[meudeus], "musicas\\Meu_deus_meu_senhor.wav");
    strcpy(song_path[baudafelicidade], "musicas\\baudafelicidade.wav");
    strcpy(song_path[errou], "musicas\\errou.wav");
    strcpy(song_path[luvadepedreiro], "musicas\\luvadepedreiro.wav");
    strcpy(song_path[Suuuuuu], "musicas\\Suuuuuu.wav");
    strcpy(song_path[souvitorioso], "musicas\\souvitorioso.wav");
    strcpy(song_path[pou], "musicas\\pou.wav");
    strcpy(song_path[darksouls], "musicas\\darksouls.wav");
    strcpy(song_path[sonspessoas], "musicas\\sonspessoas.wav");

}

int song_is_enable = 1;

void enable_songs(){
    song_is_enable = 1;
}

void disable_songs(){
    song_is_enable = 0;
}

int __song_is_enable(){
    return song_is_enable;
}


void play_song(songs_ID som){
    if(__song_is_enable())
        PlaySound(TEXT(song_path[som]), NULL, SND_ASYNC);
}

void pause_song(){
    PlaySound(NULL, NULL, NULL);
}

void loop_song(songs_ID som){
    if(__song_is_enable()){
        PlaySound(TEXT(song_path[som]), NULL, SND_LOOP | SND_ASYNC);
    }
}

/// MADE IN BY "THE  BEST ROOSTER BRAZIL"

// PROPS TO EQUIPE LABIRINTO_CEREBRAL 2020.2
// USE COM SABEDORIA

#endif // __SONGS_H
