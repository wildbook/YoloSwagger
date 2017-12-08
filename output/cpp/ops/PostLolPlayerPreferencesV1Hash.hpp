#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  std::string PostLolPlayerPreferencesV1Hash (const ClientInfo& info,
    const std::string& preferences)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(preferences).dump();
    const std::string path = "/lol-player-preferences/v1/hash";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
