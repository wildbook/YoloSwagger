#pragma once
#incldue "../client.hpp"
#include "LolSummonerSummoner.hpp"
#include "LolSummonerSummonerIcon.hpp"
namespace leagueapi {
  LolSummonerSummoner_t PutLolSummonerV1CurrentSummonerIcon (const ClientInfo& info,
    const LolSummonerSummonerIcon_t& body)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(body).dump();
    const std::string path = "/lol-summoner/v1/current-summoner/icon";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
