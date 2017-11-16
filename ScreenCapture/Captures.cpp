#include "stdafx.h"
#include "Captures.h"


Captures::Captures()
{
}


Captures::~Captures()
{
}

void Captures::SelectRegion(POINT pts[])
{
	mRect.left = min(pts[0].x, pts[1].x);
	mRect.right = max(pts[0].x, pts[1].x);
	mRect.top = min(pts[0].y, pts[1].x);
	mRect.bottom = max(pts[0].y, pts[1].y);
	mRegionSelected = true;
}