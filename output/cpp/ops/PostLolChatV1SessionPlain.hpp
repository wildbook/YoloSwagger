#pragma once
#incldue "../client.hpp"
#include "LolChatAuthResourcePlain.hpp"
#include "LolChatSessionResource.hpp"
namespace leagueapi {
  LolChatSessionResource_t PostLolChatV1SessionPlain (const ClientInfo& info,
    const LolChatAuthResourcePlain_t& auth)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(auth).dump();
    const std::string path = "/lol-chat/v1/session/plain";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
