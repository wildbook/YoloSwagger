#pragma once
#include "../client.hpp"
#include ".hpp"
#include "LolReplaysReplayContextData.hpp"
namespace leagueapi {
  void PostLolReplaysV1RoflsByGameIdDownloadGraceful (const ClientInfo& info,
    const uint64_t& gameId,
    const LolReplaysReplayContextData_t& contextData)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(contextData).dump();
    std::string path = "/lol-replays/v1/rofls/"+UrlCode::encode(to_string(gameId))+"/download/graceful";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
