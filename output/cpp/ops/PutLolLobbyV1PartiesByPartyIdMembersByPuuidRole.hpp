#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PutLolLobbyV1PartiesByPartyIdMembersByPuuidRole (const ClientInfo& info,
    const std::string& partyId,
    const std::string& puuid,
    const std::string& role)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(role).dump();
    std::string path = "/lol-lobby/v1/parties/"+UrlCode::encode(to_string(partyId))+"/members/"+UrlCode::encode(to_string(puuid))+"/role";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
