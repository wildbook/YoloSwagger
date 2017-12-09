#pragma once
#include "../client.hpp"
#include "LolChatAuthResourceRsoAccessToken.hpp"
#include "LolChatSessionResource.hpp"
namespace leagueapi {
  LolChatSessionResource_t PostLolChatV1SessionRso (const ClientInfo& info,
    const LolChatAuthResourceRsoAccessToken_t& auth)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(auth).dump();
    std::string path = "/lol-chat/v1/session/rso";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
