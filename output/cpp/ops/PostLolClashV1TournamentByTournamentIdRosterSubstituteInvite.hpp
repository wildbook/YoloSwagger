#pragma once
#include "../client.hpp"
#include "LolClashInviteSubRequest.hpp"
namespace leagueapi {
  nlohmann::json PostLolClashV1TournamentByTournamentIdRosterSubstituteInvite (const ClientInfo& info,
    const int64_t& tournamentId,
    const LolClashInviteSubRequest_t& inviteSubRequest)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(inviteSubRequest).dump();
    std::string path = "/lol-clash/v1/tournament/"+UrlCode::encode(to_string(tournamentId))+"/roster/substitute/invite";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
