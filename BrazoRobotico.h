
class BrazoRobotico{
	Public:
		BrazoRobotico( double x, double y, double z, bool objeto);
		double coordenadaX();
		double coordenadaY();
		double coordenadaZ();
		bool tieneobjeto();
		void coger();
		void soltar();
		void mover(double x, double y, double z);

	private:
		double x,y,z;
		bool objeto;



}
