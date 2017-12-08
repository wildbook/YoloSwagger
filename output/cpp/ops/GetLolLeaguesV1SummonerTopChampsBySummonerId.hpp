#pragma once
#incldue "../client.hpp"
#include "LolLeaguesLeagueChampAndStat.hpp"
namespace leagueapi {
  std::vector<LolLeaguesLeagueChampAndStat_t> GetLolLeaguesV1SummonerTopChampsBySummonerId (const ClientInfo& info,
    const uint64_t_t& summonerId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-leagues/v1/summoner-top-champs/"+UrlCode::encode(to_string(summonerId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
