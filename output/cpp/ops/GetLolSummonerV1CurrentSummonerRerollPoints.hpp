#pragma once
#include "../client.hpp"
#include "LolSummonerSummonerRerollPoints.hpp"
namespace leagueapi {
  LolSummonerSummonerRerollPoints_t GetLolSummonerV1CurrentSummonerRerollPoints (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-summoner/v1/current-summoner/rerollPoints";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
