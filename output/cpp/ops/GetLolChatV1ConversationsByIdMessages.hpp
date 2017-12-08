#pragma once
#incldue "../client.hpp"
#include "LolChatConversationMessageResource.hpp"
namespace leagueapi {
  std::vector<LolChatConversationMessageResource_t> GetLolChatV1ConversationsByIdMessages (const ClientInfo& info,
    const std::string_t& id)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-chat/v1/conversations/"+UrlCode::encode(to_string(id))+"/messages";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
