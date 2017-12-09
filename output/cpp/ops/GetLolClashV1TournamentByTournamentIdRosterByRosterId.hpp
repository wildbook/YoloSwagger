#pragma once
#include "../client.hpp"
#include "LolClashRoster.hpp"
namespace leagueapi {
  LolClashRoster_t GetLolClashV1TournamentByTournamentIdRosterByRosterId (const ClientInfo& info,
    const int64_t& tournamentId,
    const std::string& rosterId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-clash/v1/tournament/"+UrlCode::encode(to_string(tournamentId))+"/roster/"+UrlCode::encode(to_string(rosterId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
