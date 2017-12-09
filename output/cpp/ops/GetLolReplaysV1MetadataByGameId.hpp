#pragma once
#include "../client.hpp"
#include "LolReplaysReplayMetadata.hpp"
namespace leagueapi {
  LolReplaysReplayMetadata_t GetLolReplaysV1MetadataByGameId (const ClientInfo& info,
    const uint64_t& gameId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-replays/v1/metadata/"+UrlCode::encode(to_string(gameId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
