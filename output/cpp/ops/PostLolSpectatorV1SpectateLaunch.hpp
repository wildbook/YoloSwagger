#pragma once
#incldue "../client.hpp"
#include "SpectateGameInfo.hpp"
namespace leagueapi {
  nlohmann::json_t PostLolSpectatorV1SpectateLaunch (const ClientInfo& info,
    const SpectateGameInfo_t& spectateGameInfo)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(spectateGameInfo).dump();
    const std::string path = "/lol-spectator/v1/spectate/launch";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
