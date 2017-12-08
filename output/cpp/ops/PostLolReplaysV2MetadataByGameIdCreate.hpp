#pragma once
#incldue "../client.hpp"
#include ".hpp"
#include "LolReplaysReplayCreateMetadata.hpp"
namespace leagueapi {
  void PostLolReplaysV2MetadataByGameIdCreate (const ClientInfo& info,
    const uint64_t_t& gameId,
    const LolReplaysReplayCreateMetadata_t& request)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(request).dump();
    const std::string path = "/lol-replays/v2/metadata/"+UrlCode::encode(to_string(gameId))+"/create";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
