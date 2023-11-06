#include "crow.h"

int main() {
    crow::SimpleApp app;
    
    CROW_ROUTE(app, "/api/hello")([](){
        return "Hello world";
    });

    CROW_ROUTE(app, "/<path>")([](
        const crow::request&,
        crow::response& response,
        std::string path
    ){
        response.set_static_file_info("./ui/dist/" + path);
        response.end();
    });

    CROW_ROUTE(app, "/")([](
        const crow::request&,
        crow::response& response
    ){
        response.set_static_file_info("./ui/dist/index.html");
        response.end();
    });

    app.bindaddr("127.0.0.1")
        .port(3000)
        .multithreaded()
        .run();
}
