#pragma once
#incldue "../client.hpp"
#include "LolLobbyReceivedInvitationDto.hpp"
namespace leagueapi {
  std::vector<LolLobbyReceivedInvitationDto_t> GetLolLobbyV2ReceivedInvitations (const ClientInfo& info)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-lobby/v2/received-invitations";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}