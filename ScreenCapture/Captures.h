#pragma once

#include <Windows.h>

class Captures
{
private:
	RECT mRect; // the Region to capture
	BOOL mRegionSelected;

public:
	Captures();
	~Captures();

	void SelectRegion(POINT pts[]);
	RECT GetRegion() const { return mRect; }
	BOOL IsRegionSelected() const { return mRegionSelected; }
	void ResetRegion() { mRegionSelected = false; }

};

