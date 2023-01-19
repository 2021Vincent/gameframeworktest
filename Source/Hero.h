namespace game_framework{
	class Hero {
	public :
		Hero();
		int getX1();
		int getX2();
		int getY1();
		int getY2();
		void LoadBitmap();
		void OnMove();
		void OnShow();
		void SetXY(int, int);
	private:
		int x, y;
		
		CMovingBitmap animation;
}
};