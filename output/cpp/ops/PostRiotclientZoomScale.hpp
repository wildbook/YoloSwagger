#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Handles changing the zoom scale value.
  void PostRiotclientZoomScale (const ClientInfo& info,
    //The new value of the zoom scale.
    const double& newZoomScale)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/riotclient/zoom-scale";
    Headers query;
      query["newZoomScale"] = newZoomScale;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
