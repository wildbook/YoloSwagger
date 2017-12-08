#pragma once
#incldue "../client.hpp"
#include ".hpp"
#include "LolLobbyPartyMemberMetadataDto.hpp"
namespace leagueapi {
  void PutLolLobbyV1PartiesMetadata (const ClientInfo& info,
    const LolLobbyPartyMemberMetadataDto_t& metadata)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(metadata).dump();
    const std::string path = "/lol-lobby/v1/parties/metadata";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
