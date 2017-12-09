#pragma once
#include "../client.hpp"
#include "LolChatAuthResourcePlain.hpp"
#include "LolChatSessionResource.hpp"
namespace leagueapi {
  LolChatSessionResource_t PostLolChatV1SessionPlain (const ClientInfo& info,
    const LolChatAuthResourcePlain_t& auth)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(auth).dump();
    std::string path = "/lol-chat/v1/session/plain";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
