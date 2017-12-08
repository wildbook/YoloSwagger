#pragma once
#incldue "../client.hpp"
#include "LolClashRankedScoutingMember.hpp"
namespace leagueapi {
  std::vector<LolClashRankedScoutingMember_t> GetLolClashV1ScoutingRanked (const ClientInfo& info,
    const std::vector<uint64_t>& summonerIds)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/lol-clash/v1/scouting/ranked?summonerIds=" + UrlCode::encode(to_string(summonerIds));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}