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
		setWindow();
};

RoadTile::RoadTile(tRoadTileType t, int row, int col) {

	texture.loadFromFile("images/roadpieces");
	sprite.setTexture(texture);
	
		x = col * 239;
		y = row * 239;
	
//	row: Row number for the tile 
//	col: Column number for the tile  
//	t: Tile type (one of the available tile types, such as left t-junction, crossjunction, top-left corner, etc.) 
}

void RoadTile::draw(){
//	Draws the tile to screen 
} 

void RoadTile::setWindow(sf::RenderWindow *window)
{
 this->window = window;
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


Vehicle::Vehicle(tVehicleType t, float x, float y, float angle){
	texture.loadFromFile("images/vehicles/car6");
	sprite.setTexture(texture);
	
//	 x: x coordinate of the current vehicle position 
// 	 y: y coordinate of the current vehicle position
//	 angle: vehicle heading angle, i.e., orientation
}

void Vehicle::move(float &x, float &y, float &angle){
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

Waypoint::Waypoint(tWaypointDir dir, tRoadTileType type, int row, int col, int idx, int next1, int next2, int next3){
	
//	dir: Waypoint direction 
//	type: Road tile type this waypoint belongs to 
//	row: Row number of the tile this waypoint belongs to 
//	col: Column number of the tile this waypoint belongs to 
//	idx: Internal index of the waypoint within the tile it belongs to 
//	next1: Global index of the first alternative next waypoint 
//	next2: Global index of the second alternative next waypoint  
//	next3: Global index of the third alternative next waypoint 
	
}

int Waypoint::getNext(){
//	Returns the index of the next waypoint. 
//If there are alternative waypoints, returns the index of one of them randomly 
}

void Waypoint::getPosition(float &x, float &y, float &dir){
	return x, y, dir;
//	Returns the x, y coordinates and the direction of the waypoint 
}


 
////////////////////main function//////////////////////

,0);
	spr6.setPosition(119.5,0);
	spr7.setPosition(239,0);
	spr12.setPosition(358.5,0);
	spr2.setPosition(478,0);
	spr5.setPosition(0,119.5);
	spr17.setPosition(239,119.5);
	spr18.setPosition(478,119.5);
	spr9.setPosition(0,239);
	spr13.setPosition(119.5,239);
	spr11.setPosition(239,239);
	spr14.setPosition(358.5,239);
	spr10.setPosition(478,239);
	spr19.setPosition(0,358.5);
	spr20.setPosition(239,358.5);
	spr21.setPosition(478,358.5);
	spr3.setPosition(0,478);
	spr15.setPosition(119.5,478);
	spr8.setPosition(239,478);
	spr16.setPosition(358.5,478);
	spr4.setPosition(478,478);

	
		
		while ( window.isOpen()) {
			
			sf::Event event;
			
			while(window.pollEvent(event)){
			
				window.clear();
				window.draw(spr1);
				window.draw(spr2);
				window.draw(spr3);
				window.draw(spr4);
				window.draw(spr5);
				window.draw(spr6);
				window.draw(spr7);
				window.draw(spr8);
				window.draw(spr9);
				window.draw(spr10);
				window.draw(spr11);
				window.draw(spr12);
				window.draw(spr13);
				window.draw(spr14);
				window.draw(spr15);
				window.draw(spr16);
				window.draw(spr17);
				window.draw(spr18);
				window.draw(spr19);
				window.draw(spr20);
				window.draw(spr21);
				
				window.display();
	}
	   
	
}
  
		    	return 0;         
	}  
	





