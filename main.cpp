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

typedef enum {
 LEFT_T_JUNCTION,
 RIGHT_T_JUNCTION,
 
}tRoadTile; 

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
	return x, y, dir;
//	Returns the x, y coordinates and the direction of the waypoint 
}

void draw(){
	window.draw();
}
 
////////////////////main function//////////////////////

int main() {
	
	
	sf::RenderWindow window(sf::VideoMode(800, 600), "Traffic Simulator", sf::Style::Close | sf::Style::Titlebar | sf::Style::Resize);
	sf::Texture texture;     
	if (!texture.loadFromFile("images/vehicles/car6.png"))     
	{         
	cout << "Could not find the image file" << endl;     
	}
	sf::Sprite sprite;     
	sprite.setTexture(texture);          
	int x = 150;     
	int y = 150;     
	int increment = 1;
	sf::FloatRect boundingBox = sprite.getGlobalBounds(); 
	sprite.setOrigin(sf::Vector2f(boundingBox.width / 2, boundingBox.height / 2)); 
	
	while (window.isOpen())  {
		sf::Event event;        
	 while (window.pollEvent(event))         
	 {             
	 	if (event.type == sf::Event::Closed)                 
	  
	 		 window.close();         
	  	}
		  window.clear(sf::Color::White);
		  
		  sprite.setPosition(x, y);
		  
		  window.draw(sprite);
		  
		  window.display(); 
		  
		  x+= increment;         
		  if (x == 300) { 
		  	
		  	sprite.setRotation(180);
		  	increment = -1;             
		    }    
		    else if (x == 150)          
			{  
			sprite.setRotation(0);
			increment = 1;        
			}  
			sf::sleep(sf::seconds(0.01f));     
		  }     
		             
	}  
	
	
	return 0;
}

