#pragma once
#incldue "../client.hpp"
#include "LolSummonerInternalSummoner.hpp"
#include "LolSummonerSummonerRequestedName.hpp"
namespace leagueapi {
  LolSummonerInternalSummoner_t PostLolSummonerV1Summoners (const ClientInfo& info,
    const LolSummonerSummonerRequestedName_t& name)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(name).dump();
    const std::string path = "/lol-summoner/v1/summoners";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
