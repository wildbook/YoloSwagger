#pragma once
#include "../client.hpp"
#include "LolSummonerSummoner.hpp"
namespace leagueapi {
  LolSummonerSummoner_t GetLolSummonerV1Summoners (const ClientInfo& info,
    const std::string& name)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-summoner/v1/summoners";
    Headers query;
      query["name"] = name;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
