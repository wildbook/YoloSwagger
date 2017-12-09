#pragma once
#include "../client.hpp"
#include "LolSummonerSummoner.hpp"
namespace leagueapi {
  LolSummonerSummoner_t PostLolSummonerV1CurrentSummonerXpInfo (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-summoner/v1/current-summoner/xpInfo";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
