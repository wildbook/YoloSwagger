#pragma once
#include "../client.hpp"
#include "LolChatConversationMessageResource.hpp"
namespace leagueapi {
  std::vector<LolChatConversationMessageResource_t> GetLolChatV1ConversationsByIdMessages (const ClientInfo& info,
    const std::string& id)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-chat/v1/conversations/"+UrlCode::encode(to_string(id))+"/messages";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
