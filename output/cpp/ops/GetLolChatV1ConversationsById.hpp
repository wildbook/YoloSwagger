#pragma once
#include "../client.hpp"
#include "LolChatConversationResource.hpp"
namespace leagueapi {
  LolChatConversationResource_t GetLolChatV1ConversationsById (const ClientInfo& info,
    const std::string& id)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-chat/v1/conversations/"+UrlCode::encode(to_string(id))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
