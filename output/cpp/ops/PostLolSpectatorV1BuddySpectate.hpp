#pragma once
#incldue "../client.hpp"
#include "SummonerOrTeamAvailabilty.hpp"
namespace leagueapi {
  SummonerOrTeamAvailabilty_t PostLolSpectatorV1BuddySpectate (const ClientInfo& info,
    const std::vector<std::string>& summonerOrTeamNames)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(summonerOrTeamNames).dump();
    const std::string path = "/lol-spectator/v1/buddy/spectate";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
