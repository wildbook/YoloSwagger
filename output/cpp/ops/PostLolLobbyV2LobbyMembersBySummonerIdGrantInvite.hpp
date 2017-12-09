#pragma once
#include "../client.hpp"
namespace leagueapi {
  uint64_t PostLolLobbyV2LobbyMembersBySummonerIdGrantInvite (const ClientInfo& info,
    const uint64_t& summonerId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-lobby/v2/lobby/members/"+UrlCode::encode(to_string(summonerId))+"/grant-invite";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
