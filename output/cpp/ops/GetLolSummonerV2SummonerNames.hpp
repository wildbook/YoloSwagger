#pragma once
#include "../client.hpp"
#include "LolSummonerSummonerIdAndName.hpp"
namespace leagueapi {
  std::vector<LolSummonerSummonerIdAndName_t> GetLolSummonerV2SummonerNames (const ClientInfo& info,
    const std::vector<uint64_t>& ids)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-summoner/v2/summoner-names";
    Headers query;
      query["ids"] = ids;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
