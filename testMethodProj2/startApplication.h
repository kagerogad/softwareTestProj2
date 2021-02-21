#pragma once
#ifndef STARTAPPLICATION_H
#define STARTAPPLICATION_H
#include <cstdio>
#include <string>
#include "musicLibrary.h"
#include <iostream>

using namespace std;
class startApplication {
public:

	static bool checkNumber(string str) {
		for (int i = 0; i < str.length(); i++)
			if (isdigit(str[i]) == false)
				return false;
		return true;
	}

	static bool startBlock() {
		cout << "|----------------------------------------------------------------------------------------|" << endl;
		cout << "|                                    WELCOME TO MUSICIFY                                 |" << endl;
		cout << "|          Please log in to your account to proceed.                                     |" << endl;
		cout << "|----------------------------------------------------------------------------------------|" << endl;

		return true;

	}

	static bool homeBlock(string userName) {
		cout << "|----------------------------------------------------------------------------------------|" << endl;
		cout << "|                             WELCOME TO MUSICIFY, " << userName << "!                   " << endl;
		cout << "|          Your Music Library all here and stuff.                                        |" << endl;
		cout << "|          Select the following to begin.                                                |" << endl;
		cout << "|                                                                                        |" << endl;
		cout << "|          1. (Developer Version) To run Diagnostics.                                    |" << endl;
		cout << "|          2. Open you Library.                                                          |" << endl;
		cout << "|----------------------------------------------------------------------------------------|" << endl;
		return true;
	}

	static bool selectionSection(string userName, musicLibrary library) {
		librarySelectionBlock(userName);
		string input;
		getline(cin, input);

		if (input == "1") {
			string input2;
			string input3;
			string input4;
			listAllSong(library);
			cout << endl;
			cout << "Choose Song: ";
			getline(cin, input2);
			song chosenSong = library.getSong(std::stoi(input2));
			cout << "Song: " << chosenSong.getName() << " by " << chosenSong.getArtist() << endl;
			cout << "1. Create New Song." << endl;
			cout << "Input: ";
			getline(cin, input3);
			if (input3 == "1") {

			}
			else if (input3 == "2") {

			}
		}
		else if (input == "2") {
			string input2;
			string input3;
			string input4;
			cout << "Type In Song Name: ";
			getline(cin, input2);
			searchSongs(library, input2);
			cout << endl;
			cout << "Choose Song: ";
			getline(cin, input3);
			song chosenSong = library.getSong(std::stoi(input3));
			cout << "Song: " << chosenSong.getName() << " by " << chosenSong.getArtist() << endl;
			cout << "1. Create New Song." << endl;
			cout << "Input: ";
			getline(cin, input4);

			if (input4 == "1") {

			}
			else if (input4 == "2") {

			}
		}
		else if (input == "3") {
			string input2;
			string input3;
			string input4;
			listAllPlaylist(library);
			cout << endl;
			cout << "Choose Song: ";
			getline(cin, input2);
			playlist chosenList = library.getPlaylist(std::stoi(input2));
			cout << "Playlist: " << chosenList.getName() << endl;
			cout << "1. Create New Playlist." << endl;
			cout << "Input: ";
			getline(cin, input3);
			if (input3 == "1") {

			}
			else if (input3 == "2") {

			}
		}
		else if (input == "4") {
			string input2;
			string input3;
			string input4;
			cout << "Type In Playlist Name: ";
			getline(cin, input2);
			searchPlaylists(library, input2);
			cout << endl;
			cout << "Choose Playlist Name: ";
			getline(cin, input3);
			playlist chosenList = library.getPlaylist(std::stoi(input3));
			cout << "Playlist: " << chosenList.getName() << endl;
			cout << "1. Create New Playlist." << endl;
			cout << "Input: ";
			getline(cin, input4);
			if (input4 == "1") {

			}
			else if (input4 == "2") {

			}
			
		}
		return true;
	}

	static bool librarySelectionBlock(string userName) {
		cout << "|----------------------------------------------------------------------------------------|" << endl;
		cout << "|          You may do the following in your library: " << userName << "                  |" << endl;
		cout << "|          1. List All Songs.                                                            |" << endl;
		cout << "|          2. Search Song.                                                               |" << endl;
		cout << "|          3. List All Playlists.                                                        |" << endl;
		cout << "|          4. Search Playlist.                                                           |" << endl;
		cout << "|----------------------------------------------------------------------------------------|" << endl;
		return true;
	}

	static bool listAllSong(musicLibrary library) {
		cout << "-------------- List of all your music. ----------------" << endl;
		library.printSongs();
		return true;
	}

	static bool listAllPlaylist(musicLibrary library) {
		cout << "-------------- List of all your Playlists. ----------------" << endl;
		library.printPlaylists();
		return true;
	}

	static bool searchSongs(musicLibrary library, string search) {
		library.searchSong(search);
		return true;
	}

	static bool searchPlaylists(musicLibrary library, string search) {
		library.searchPlaylist(search);
		return true;
	}


};

#endif