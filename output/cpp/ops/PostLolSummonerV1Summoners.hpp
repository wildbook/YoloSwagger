#pragma once
#include "../client.hpp"
#include "LolSummonerInternalSummoner.hpp"
#include "LolSummonerSummonerRequestedName.hpp"
namespace leagueapi {
  LolSummonerInternalSummoner_t PostLolSummonerV1Summoners (const ClientInfo& info,
    const LolSummonerSummonerRequestedName_t& name)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(name).dump();
    std::string path = "/lol-summoner/v1/summoners";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
