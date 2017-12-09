#pragma once
#include "../client.hpp"
#include "LolChatUserResource.hpp"
namespace leagueapi {
  nlohmann::json PostLolChatV1ConversationsByIdParticipants (const ClientInfo& info,
    const std::string& id,
    const LolChatUserResource_t& invitee)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(invitee).dump();
    std::string path = "/lol-chat/v1/conversations/"+UrlCode::encode(to_string(id))+"/participants";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
