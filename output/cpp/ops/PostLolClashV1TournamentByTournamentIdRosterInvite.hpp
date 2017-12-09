#pragma once
#include "../client.hpp"
#include "FailedInvite.hpp"
namespace leagueapi {
  std::vector<FailedInvite_t> PostLolClashV1TournamentByTournamentIdRosterInvite (const ClientInfo& info,
    const int64_t& tournamentId,
    const std::vector<uint64_t>& summonerIds)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(summonerIds).dump();
    std::string path = "/lol-clash/v1/tournament/"+UrlCode::encode(to_string(tournamentId))+"/roster/invite";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
