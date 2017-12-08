#pragma once
#incldue "../client.hpp"
#include "LolChatConversationMessageResource.hpp"
namespace leagueapi {
  LolChatConversationMessageResource_t PostLolChatV1ConversationsByIdMessages (const ClientInfo& info,
    const std::string_t& id,
    const LolChatConversationMessageResource_t& body)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(body).dump();
    const std::string path = "/lol-chat/v1/conversations/"+UrlCode::encode(to_string(id))+"/messages";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
