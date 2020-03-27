#include <SFML/Window.hpp> 
#include <SFML/Graphics.hpp> 
#include <iostream> 
using namespace std;


class RoadTile {
	private:
		float x;
		float y;
		sf::Texture texture;
		sf::Sprite sprite;
	
	public:
		RoadTile (tRoadTileType t, int row, int col); 
		void draw(); 
};

RoadTile(tRoadTileType t, int row, int col) {
//	row: Row number for the tile 
//	col: Column number for the tile  
//	t: Tile type (one of the available tile types, such as left t-junction, crossjunction, top-left corner, etc.) 
}

void draw(){
//	Draws the tile to screen 
} 


class Vehicle {
	private:
		float x;
		float y;
		float angle;
		bool origin_set;
		sf::Texture texture;
		sf::Sprite sprite;
	public:
		Vehicle(tVehicleType t, float x, float y, float angle); 
		void move(float &x, float &y, float &angle); 
};


Vehicle(tVehicleType t, float x, float y, float angle){
//	 t: Vehicle type (one of the available vehicle types)
//	 x: x coordinate of the current vehicle position 
// 	 y: y coordinate of the current vehicle position
//	 angle: vehicle heading angle, i.e., orientation
}

void move(float &x, float &y, float &angle){
//	x: x coordinate to move the vehicle to 
//	y: y coordinate to move the vehicle to
//	angle: new vehicle heading angle after the move 
}

class Waypoint{
	private:
		float x;
		float y;
		int dir;
		int next1;
		int next2;
		int next3;
		sf::Texture texture;
		sf::Sprite sprite;
		
	public:
		Waypoint(tWaypointDir dir, tRoadTileType type, int row, int col, int idx, int next1, int next2, int next3); 
		int getNext();
		void getPosition(float &x, float &y, float &dir); 
		void draw(); 
};

Waypoint(tWaypointDir dir, tRoadTileType type, int row, int col, int idx, int next1, int next2, int next3){
	
//	dir: Waypoint direction 
//	type: Road tile type this waypoint belongs to 
//	row: Row number of the tile this waypoint belongs to 
//	col: Column number of the tile this waypoint belongs to 
//	idx: Internal index of the waypoint within the tile it belongs to 
//	next1: Global index of the first alternative next waypoint 
//	next2: Global index of the second alternative next waypoint  
//	next3: Global index of the third alternative next waypoint 
	
}

int getNext(){
//	Returns the index of the next waypoint. 
//If there are alternative waypoints, returns the index of one of them randomly 
}

void getPosition(float &x, float &y, float &dir){
//	Returns the x, y coordinates and the direction of the waypoint 
}

void draw(){
//	Draws the waypoint to the screen
}
 

