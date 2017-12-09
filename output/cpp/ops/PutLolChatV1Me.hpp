#pragma once
#include "../client.hpp"
#include "LolChatUserResource.hpp"
namespace leagueapi {
  LolChatUserResource_t PutLolChatV1Me (const ClientInfo& info,
    const LolChatUserResource_t& me)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(me).dump();
    std::string path = "/lol-chat/v1/me";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
