#pragma once
#incldue "../client.hpp"
#include "LolChatUserResource.hpp"
namespace leagueapi {
  std::vector<LolChatUserResource_t> GetLolChatV1ConversationsByIdParticipants (const ClientInfo& info,
    const std::string& id)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-chat/v1/conversations/"+UrlCode::encode(to_string(id))+"/participants";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
