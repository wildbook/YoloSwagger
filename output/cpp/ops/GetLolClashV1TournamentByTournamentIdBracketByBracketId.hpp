#pragma once
#incldue "../client.hpp"
#include "LolClashBracket.hpp"
namespace leagueapi {
  LolClashBracket_t GetLolClashV1TournamentByTournamentIdBracketByBracketId (const ClientInfo& info,
    const int64_t& tournamentId,
    const int64_t& bracketId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-clash/v1/tournament/"+UrlCode::encode(to_string(tournamentId))+"/bracket/"+UrlCode::encode(to_string(bracketId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
