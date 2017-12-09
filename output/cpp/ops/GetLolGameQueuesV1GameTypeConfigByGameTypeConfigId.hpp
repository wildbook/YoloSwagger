#pragma once
#include "../client.hpp"
#include "LolGameQueuesQueueGameTypeConfig.hpp"
namespace leagueapi {
  LolGameQueuesQueueGameTypeConfig_t GetLolGameQueuesV1GameTypeConfigByGameTypeConfigId (const ClientInfo& info,
    const uint32_t& gameTypeConfigId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-game-queues/v1/game-type-config/"+UrlCode::encode(to_string(gameTypeConfigId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
