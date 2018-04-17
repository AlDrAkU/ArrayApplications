#pragma once
#include"structs.h"




namespace dae
{
	void DrawRect(float left, float bottom, float width, float height, int lineWidth);
	void DrawRect(Point2f pos, float width, float height, int lineWidth);
	void DrawRect(Rectf rectangle1, int lineWidth);
	void DrawEllipse(const Color4f &color, const Circlef &circle, int nrSides);
	void DrawLine(const Point2f &start, const  Point2f &end, float lineWidth = 1.0f);
}