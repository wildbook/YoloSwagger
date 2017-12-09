#pragma once
#include "../client.hpp"
#include "LolSummonerSummoner.hpp"
namespace leagueapi {
  LolSummonerSummoner_t PostLolSummonerV1CurrentSummonerName (const ClientInfo& info,
    const std::string& name)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(name).dump();
    std::string path = "/lol-summoner/v1/current-summoner/name";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
