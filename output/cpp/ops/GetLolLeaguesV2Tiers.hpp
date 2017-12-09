#pragma once
#include "../client.hpp"
#include "LolLeaguesLeagueQueueType.hpp"
#include "LolLeaguesParticipantTiers.hpp"
namespace leagueapi {
  std::vector<LolLeaguesParticipantTiers_t> GetLolLeaguesV2Tiers (const ClientInfo& info,
    const std::vector<uint64_t>& summonerIds,
    const std::vector<LolLeaguesLeagueQueueType_t>& queueTypes)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-leagues/v2/tiers";
    Headers query;
      query["summonerIds"] = summonerIds;
      query["queueTypes"] = queueTypes;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
