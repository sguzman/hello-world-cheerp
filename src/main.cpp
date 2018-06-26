#include <cheerp/client.h>
#include <cheerp/clientlib.h>

void webMain() noexcept {
  client::console.log("Hello, world!");
  client::HTMLElement* body = client::document.get_body();
  client::HTMLElement* newElement = client::document.createElement("h1");
  newElement->set_textContent("Hello World");
  body->appendChild(newElement);
}