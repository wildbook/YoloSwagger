#pragma once
#include "../client.hpp"
#include "LolChatConversationResource.hpp"
namespace leagueapi {
  LolChatConversationResource_t PostLolChatV1Conversations (const ClientInfo& info,
    const LolChatConversationResource_t& conversation)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(conversation).dump();
    std::string path = "/lol-chat/v1/conversations";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
