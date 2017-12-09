#pragma once
#include "../client.hpp"
#include "LolChatConversationMessageResource.hpp"
namespace leagueapi {
  LolChatConversationMessageResource_t PostLolChatV1ConversationsByIdMessages (const ClientInfo& info,
    const std::string& id,
    const LolChatConversationMessageResource_t& body)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(body).dump();
    std::string path = "/lol-chat/v1/conversations/"+UrlCode::encode(to_string(id))+"/messages";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
