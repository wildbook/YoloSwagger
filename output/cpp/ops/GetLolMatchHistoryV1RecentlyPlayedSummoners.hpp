#pragma once
#include "../client.hpp"
#include "LolMatchHistoryRecentlyPlayedSummoner.hpp"
namespace leagueapi {
  std::vector<LolMatchHistoryRecentlyPlayedSummoner_t> GetLolMatchHistoryV1RecentlyPlayedSummoners (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-match-history/v1/recently-played-summoners";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
