#pragma once
#incldue "../client.hpp"
#include ".hpp"
#include "LolGameflowPlayerStatus.hpp"
namespace leagueapi {
  void PostLolGameflowV1GameflowMetadataPlayerStatus (const ClientInfo& info,
    const LolGameflowPlayerStatus_t& playerStatus)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(playerStatus).dump();
    const std::string path = "/lol-gameflow/v1/gameflow-metadata/player-status";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
