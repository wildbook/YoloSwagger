#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PostLolLobbyV2ReceivedInvitationsByInvitationIdAccept (const ClientInfo& info,
    const std::string& invitationId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-lobby/v2/received-invitations/"+UrlCode::encode(to_string(invitationId))+"/accept";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
