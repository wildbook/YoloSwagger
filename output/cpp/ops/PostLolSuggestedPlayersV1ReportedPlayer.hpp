#pragma once
#incldue "../client.hpp"
#include ".hpp"
#include "LolSuggestedPlayersSuggestedPlayersReportedPlayer.hpp"
namespace leagueapi {
  void PostLolSuggestedPlayersV1ReportedPlayer (const ClientInfo& info,
    const LolSuggestedPlayersSuggestedPlayersReportedPlayer_t& resource)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(resource).dump();
    const std::string path = "/lol-suggested-players/v1/reported-player";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
