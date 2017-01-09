#pragma once

class CShootingPath
{
public:
	CShootingPath();
	CShootingPath(double orient,double x1, double y1, double x2, double y2);
	
	double length() const
	{
		return r * d_theta;
	}
	void interpolate(double dt, double *result);	
	
	double r,d_theta;
	double t1,t2;
	double x0,x1,x2;
	double y0,y1,y2;
	int coor;	//1 == 1\BB\E7\BAи\E9 == \BF\C0\B8\A5	//2 == 2\BB\E7\BAи\E9 == \BF\DE
	static double mod2pi(double x);
	
private:
	static double pi;
	static double twopi;
	static double SHOOTING_ZERO;
	static double min_r;
	static double max_r;
};
