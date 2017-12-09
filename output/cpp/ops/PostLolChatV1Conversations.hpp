#pragma once
#include "../client.hpp"
#include "LolChatConversationResource.hpp"
namespace leagueapi {
  LolChatConversationResource_t PostLolChatV1Conversations (const ClientInfo& info,
    const LolChatConversationResource_t& conversation)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(conversation).dump();
    std::string path = "/lol-chat/v1/conversations";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
