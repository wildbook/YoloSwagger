#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Handles changing the zoom scale value.
  void PostRiotclientZoomScale (const ClientInfo& info,
    //The new value of the zoom scale.
    const double_t& newZoomScale)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/riotclient/zoom-scale?newZoomScale=" + UrlCode::encode(to_string(newZoomScale));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
