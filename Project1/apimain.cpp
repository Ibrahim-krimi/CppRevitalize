#include "crow.h"

using namespace crow;
int main() {
    SimpleApp app;  // Crée une application Crow

    CROW_ROUTE(app, "/")([]() {
        return "Bienvenue dans mon premier API en C++!";
        });

    CROW_ROUTE(app, "/hello")([]() {
        json::wvalue response;
        response["message"] = "Bonjour depuis l'API!";
        return response;
        });

    app.port(18080).multithreaded().run();

    return 0;
}