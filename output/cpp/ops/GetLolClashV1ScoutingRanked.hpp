#pragma once
#include "../client.hpp"
#include "LolClashRankedScoutingMember.hpp"
namespace leagueapi {
  std::vector<LolClashRankedScoutingMember_t> GetLolClashV1ScoutingRanked (const ClientInfo& info,
    const std::vector<uint64_t>& summonerIds)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-clash/v1/scouting/ranked";
    Headers query;
      query["summonerIds"] = summonerIds;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
