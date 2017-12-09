#pragma once
#include "../client.hpp"
#include "LolAcsAcsChampionGamesCollection.hpp"
namespace leagueapi {
  LolAcsAcsChampionGamesCollection_t GetLolAcsV2RecentlyPlayedChampionsByAccountId (const ClientInfo& info,
    const uint64_t& accountId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-acs/v2/recently-played-champions/"+UrlCode::encode(to_string(accountId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
