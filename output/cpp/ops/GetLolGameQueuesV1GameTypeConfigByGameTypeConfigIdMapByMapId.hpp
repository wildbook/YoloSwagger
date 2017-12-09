#pragma once
#include "../client.hpp"
#include "LolGameQueuesQueueGameTypeConfig.hpp"
namespace leagueapi {
  LolGameQueuesQueueGameTypeConfig_t GetLolGameQueuesV1GameTypeConfigByGameTypeConfigIdMapByMapId (const ClientInfo& info,
    const uint32_t& gameTypeConfigId,
    const int32_t& mapId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-game-queues/v1/game-type-config/"+UrlCode::encode(to_string(gameTypeConfigId))+"/map/"+UrlCode::encode(to_string(mapId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
