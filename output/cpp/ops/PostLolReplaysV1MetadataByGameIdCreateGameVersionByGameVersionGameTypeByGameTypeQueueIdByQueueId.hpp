#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PostLolReplaysV1MetadataByGameIdCreateGameVersionByGameVersionGameTypeByGameTypeQueueIdByQueueId (const ClientInfo& info,
    const uint64_t_t& gameId,
    const std::string_t& gameVersion,
    const std::string_t& gameType,
    const int32_t_t& queueId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-replays/v1/metadata/"+UrlCode::encode(to_string(gameId))+"/create/gameVersion/"+UrlCode::encode(to_string(gameVersion))+"/gameType/"+UrlCode::encode(to_string(gameType))+"/queueId/"+UrlCode::encode(to_string(queueId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
