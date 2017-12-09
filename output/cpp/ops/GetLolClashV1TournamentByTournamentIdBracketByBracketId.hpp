#pragma once
#include "../client.hpp"
#include "LolClashBracket.hpp"
namespace leagueapi {
  LolClashBracket_t GetLolClashV1TournamentByTournamentIdBracketByBracketId (const ClientInfo& info,
    const int64_t& tournamentId,
    const int64_t& bracketId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-clash/v1/tournament/"+UrlCode::encode(to_string(tournamentId))+"/bracket/"+UrlCode::encode(to_string(bracketId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
