#pragma once
#include "SimpleIni.h"
#include "json.hpp"
#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>
#include <map>
#include <list>
#include <algorithm>

struct SongEntry {
	std::string path;
	std::string s1;
	std::string s2;
	std::string a1;
	std::string a2;
	std::string charter;
	std::string mixer;
	float bpm;
	int dTrack;
	int dTap;
	int dCrossfade;
	int dScratch;
};

class SongScanner
{
public:
	void load(const std::string& root, std::vector<SongEntry>& list);
private:
	std::map<std::string, int> m_duplicates;
};

