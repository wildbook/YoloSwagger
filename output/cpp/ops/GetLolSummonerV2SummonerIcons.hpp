#pragma once
#include "../client.hpp"
#include "LolSummonerSummonerIdAndIcon.hpp"
namespace leagueapi {
  std::vector<LolSummonerSummonerIdAndIcon_t> GetLolSummonerV2SummonerIcons (const ClientInfo& info,
    const std::vector<uint64_t>& ids)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-summoner/v2/summoner-icons";
    Headers query;
      query["ids"] = ids;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
