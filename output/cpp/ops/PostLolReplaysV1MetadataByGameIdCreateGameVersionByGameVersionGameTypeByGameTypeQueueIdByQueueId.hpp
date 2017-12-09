#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PostLolReplaysV1MetadataByGameIdCreateGameVersionByGameVersionGameTypeByGameTypeQueueIdByQueueId (const ClientInfo& info,
    const uint64_t& gameId,
    const std::string& gameVersion,
    const std::string& gameType,
    const int32_t& queueId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-replays/v1/metadata/"+UrlCode::encode(to_string(gameId))+"/create/gameVersion/"+UrlCode::encode(to_string(gameVersion))+"/gameType/"+UrlCode::encode(to_string(gameType))+"/queueId/"+UrlCode::encode(to_string(queueId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
