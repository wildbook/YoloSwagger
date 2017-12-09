#pragma once
#include "../client.hpp"
namespace leagueapi {
  nlohmann::json PostLolLobbyV1ReceivedInvitationsByIdAccept (const ClientInfo& info,
    const std::string& id)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-lobby/v1/received-invitations/"+UrlCode::encode(to_string(id))+"/accept";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
