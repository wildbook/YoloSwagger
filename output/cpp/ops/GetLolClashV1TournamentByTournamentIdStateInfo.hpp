#pragma once
#include "../client.hpp"
#include "LolClashTournamentStateInfo.hpp"
namespace leagueapi {
  LolClashTournamentStateInfo_t GetLolClashV1TournamentByTournamentIdStateInfo (const ClientInfo& info,
    const int64_t& tournamentId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-clash/v1/tournament/"+UrlCode::encode(to_string(tournamentId))+"/stateInfo";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
