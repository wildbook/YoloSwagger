#pragma once
#incldue "../client.hpp"
#include ".hpp"
#include "LolMapsMaps.hpp"
namespace leagueapi {
  void PostLolMapsV1Map (const ClientInfo& info,
    const LolMapsMaps_t& map)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(map).dump();
    const std::string path = "/lol-maps/v1/map";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
