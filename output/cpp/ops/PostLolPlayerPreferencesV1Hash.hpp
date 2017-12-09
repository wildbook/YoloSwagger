#pragma once
#include "../client.hpp"
namespace leagueapi {
  std::string PostLolPlayerPreferencesV1Hash (const ClientInfo& info,
    const std::string& preferences)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(preferences).dump();
    std::string path = "/lol-player-preferences/v1/hash";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
