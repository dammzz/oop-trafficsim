#include <SFML/Window.hpp> 
#include <SFML/Graphics.hpp> 
#include <iostream> 

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

	RoadTile::RoadTile(t,int x,int y){
		texture.loadFromFile("images/roadpieces");
		sprite.setTexture(texture);
	
		x = col * 239;
		y = row * 239;
		
	}
	
	void draw(){
		
	}
	
	setWindow(){
		
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
	
}


int main() {
	
	
	sf::RenderWindow window(sf::VideoMode(1200,600), "Traffic Simulator", sf::Style::Close | sf::Style::Titlebar | sf::Style::Resize);
	sf::Texture tex1,tex2,tex3,tex4,tex5,tex6,tex7,tex8,tex9,tex10,tex11;
	sf::Sprite spr1,spr2,spr3,spr4,spr5,spr6,spr7,spr8,spr9,spr10,spr11,spr12,spr13,spr14,spr15,spr16,spr17,spr18,spr19,spr20,spr21; 
	
	tex1.loadFromFile("images/roadpieces/corner-topleft.png");
	tex2.loadFromFile("images/roadpieces/corner-topright.png");
	tex3.loadFromFile("images/roadpieces/corner-bottomleft.png");
	tex4.loadFromFile("images/roadpieces/corner-bottomright.png");
	tex5.loadFromFile("images/roadpieces/straight-vertical.png");
	tex6.loadFromFile("images/roadpieces/straight-horizontal.png");
	tex7.loadFromFile("images/roadpieces/t-top.png");
	tex8.loadFromFile("images/roadpieces/t-bottom.png");
	tex9.loadFromFile("images/roadpieces/t-left.png");
	tex10.loadFromFile("images/roadpieces/t-right.png");
	tex11.loadFromFile("images/roadpieces/cross.png");

	
	spr1.setScale(0.5,0.5);
	spr2.setScale(0.5,0.5);
	spr3.setScale(0.5,0.5);
	spr4.setScale(0.5,0.5);
	spr5.setScale(0.5,0.5);
	spr6.setScale(0.5,0.5);
	spr7.setScale(0.5,0.5);
	spr8.setScale(0.5,0.5);
	spr9.setScale(0.5,0.5);
	spr10.setScale(0.5,0.5);
	spr11.setScale(0.5,0.5);
	spr12.setScale(0.5,0.5);
	spr13.setScale(0.5,0.5);
	spr14.setScale(0.5,0.5);
	spr15.setScale(0.5,0.5);
	spr16.setScale(0.5,0.5);
	spr17.setScale(0.5,0.5);
	spr18.setScale(0.5,0.5);
	spr19.setScale(0.5,0.5);
	spr20.setScale(0.5,0.5);
	spr21.setScale(0.5,0.5);
	
	
	spr1.setTexture(tex1);
	spr2.setTexture(tex2);	
	spr3.setTexture(tex3);
	spr4.setTexture(tex4);	
	spr5.setTexture(tex5);//vertical
	spr6.setTexture(tex6);//horizontal	
	spr7.setTexture(tex7);
	spr8.setTexture(tex8);	
	spr9.setTexture(tex9);
	spr10.setTexture(tex10);
	spr11.setTexture(tex11);
	spr12.setTexture(tex6);//horizontal	
	spr13.setTexture(tex6);//horizontal	
	spr14.setTexture(tex6);//horizontal	
	spr15.setTexture(tex6);//horizontal	
	spr16.setTexture(tex6);//horizontal
	spr17.setTexture(tex5);//vertical
	spr18.setTexture(tex5);//vertical
	spr19.setTexture(tex5);//vertical
	spr20.setTexture(tex5);//vertical
	spr21.setTexture(tex5);//vertical
	
	
	
	spr1.setPosition(0,0);
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
