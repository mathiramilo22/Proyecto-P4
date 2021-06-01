/* Laboratorio Programacion IV - INCO/FING/UDELAR
 * Laboratorio 4 - Class declaration
 * Autores (por nombre):
 * 	Alexis Baladon
 * 	Guillermo Toyos
 * 	Jorge Machado
 * 	Juan Jose Mangado
 * 	Mathias Ramilo
 */

#ifndef VIDEOJUEGO
#define VIDEOJUEGO

class Videojuego {
    private:
        std::string nombre;
        std::string descripcion;
        DtPrecios costoSuscripciones;
        float totalHorasJugadas;
        float puntaje;
        int totalJugadoresSuscriptos;

        //Associations
        Suscripcion* suscripciones;
        map<int,Partida> *partidas;
        Categoria* categorias;
        
    public:
        Videojuego(DtVideojuego,Set(Categoria));
        DtVideojuego obtenerDatoVideojuego();
        Set(string) obtenerJugadoresSubscriptos();
        bool estaActivo();
        void confirmarPartida(Jugador,bool,bool,Set(Jugador));
        void cancelarSuscripcion(Jugador);
        void confirmarSuscripcion(Jugador,TipoSuscripcion,TipoPago);
        void eliminarInfoAsociada(Videojuego);

        //Getters
        std::string getNombre();
        std::string getDescripcion();
        DtPrecios getCostoSuscripciones();
        float getTotalHorasJugadas();
        float getPuntaje();
        int getTotalJugadoresSuscriptos();
        Suscripcion* getSuscripciones();
        map<int,Partida> getPartidas();
        Categoria* getCategorias();

        //Setters
        void setNombre(std::string);
        void setDescripcion(std::string);
        void setCostoSuscripciones(DtPrecios);
        void setTotalHorasJugadas(float);
        void setPuntaje(float);
        void setTotalJugadoresSuscriptos(int);
}
#endif