#include "config.h"
#include "controller/app.h"

int main()
{
    App *app = new App();

    app->set_up_opengl();
    app->run();

    return 0;
}
