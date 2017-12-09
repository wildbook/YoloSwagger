#pragma once
#include "../client.hpp"
#include "LolLoginUsernameAndPassword.hpp"
#include "LolLoginLoginSession.hpp"
namespace leagueapi {
  LolLoginLoginSession_t PostLolLoginV1Session (const ClientInfo& info,
    const LolLoginUsernameAndPassword_t& UsernameAndPassword)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(UsernameAndPassword).dump();
    std::string path = "/lol-login/v1/session";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
