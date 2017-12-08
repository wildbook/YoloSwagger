#pragma once
#incldue "../client.hpp"
#include "LolLeaguesLeagueQueueType.hpp"
#include "LolLeaguesParticipantTiers.hpp"
namespace leagueapi {
  std::vector<LolLeaguesParticipantTiers_t> GetLolLeaguesV2Tiers (const ClientInfo& info,
    const std::vector<uint64_t>& summonerIds,
    const std::vector<LolLeaguesLeagueQueueType_t>& queueTypes)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/lol-leagues/v2/tiers?summonerIds=" + UrlCode::encode(to_string(summonerIds))    +
    "&queueTypes=" + UrlCode::encode(to_string(queueTypes));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
