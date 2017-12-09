#pragma once
#include "../client.hpp"
#include "LolChatConversationResource.hpp"
namespace leagueapi {
  LolChatConversationResource_t PutLolChatV1ConversationsById (const ClientInfo& info,
    const std::string& id,
    const LolChatConversationResource_t& updatedConversation)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(updatedConversation).dump();
    std::string path = "/lol-chat/v1/conversations/"+UrlCode::encode(to_string(id))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
