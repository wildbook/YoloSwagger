#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PostLolLobbyV2ReceivedInvitationsByInvitationIdDecline (const ClientInfo& info,
    const std::string_t& invitationId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-lobby/v2/received-invitations/"+UrlCode::encode(to_string(invitationId))+"/decline";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}