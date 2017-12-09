#pragma once
#include "../client.hpp"
#include "LolMatchHistoryMatchHistoryTimelineFrames.hpp"
namespace leagueapi {
  LolMatchHistoryMatchHistoryTimelineFrames_t GetLolMatchHistoryV1GameTimelinesByGameId (const ClientInfo& info,
    const uint64_t& gameId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-match-history/v1/game-timelines/"+UrlCode::encode(to_string(gameId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
