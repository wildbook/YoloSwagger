#pragma once
#incldue "../client.hpp"
#include "LolSummonerSummoner.hpp"
namespace leagueapi {
  LolSummonerSummoner_t PostLolSummonerV1CurrentSummonerXpInfo (const ClientInfo& info)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-summoner/v1/current-summoner/xpInfo";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}