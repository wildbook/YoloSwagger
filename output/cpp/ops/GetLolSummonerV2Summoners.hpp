#pragma once
#include "../client.hpp"
#include "LolSummonerSummoner.hpp"
namespace leagueapi {
  std::vector<LolSummonerSummoner_t> GetLolSummonerV2Summoners (const ClientInfo& info,
    const std::optional<std::string>& name = std::nullopt,
    const std::optional<std::vector<uint64_t>>& ids = std::nullopt)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-summoner/v2/summoners";
    Headers query;
    if({0})
      query["name"] = *name;
    if({0})
      query["ids"] = *ids;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
