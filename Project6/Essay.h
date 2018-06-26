#ifndef ESSAY_H
#define ESSAY_H
#include "GradedActivity.h"

class Essay : public GradedActivity 
{
private:
	double pointsGrammar;	// Points earned for Grammer
	double pointsSpelling;	// Points earned for Spelling
	double pointsLength;	// Points earned for Length
	double pointsContent;	// Points earned for Content

public:

	Essay()
	{
		pointsGrammar, pointsSpelling, pointsLength, pointsContent = 0;
	}
	Essay(double g, double s, double l, double c)
	{
		pointsGrammar = g; pointsSpelling = s; pointsLength = l; pointsContent = c;
	}

	void setGrammar(double gram)
	{
		pointsGrammar = gram;
	}
	void setSpelling(double spelling)
	{
		pointsSpelling = spelling;
	}
	void setLength(double length)
	{
		pointsLength = length;
	}
	void setContent(double content)
	{
		pointsContent = content;
	}
	double addScores() 
	{
		double score; score = pointsGrammar + pointsSpelling + pointsLength + pointsContent; setScore(score);
		return score;
	}
	
};
#endif