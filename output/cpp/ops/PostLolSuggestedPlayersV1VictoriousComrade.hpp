#pragma once
#include "../client.hpp"
#include ".hpp"
#include "LolSuggestedPlayersSuggestedPlayersVictoriousComrade.hpp"
namespace leagueapi {
  void PostLolSuggestedPlayersV1VictoriousComrade (const ClientInfo& info,
    const LolSuggestedPlayersSuggestedPlayersVictoriousComrade_t& resource)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(resource).dump();
    std::string path = "/lol-suggested-players/v1/victorious-comrade";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
