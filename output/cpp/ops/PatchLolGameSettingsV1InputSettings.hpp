#pragma once
#include "../client.hpp"
namespace leagueapi {
  nlohmann::json PatchLolGameSettingsV1InputSettings (const ClientInfo& info,
    const nlohmann::json& settingsResource)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(settingsResource).dump();
    std::string path = "/lol-game-settings/v1/input-settings";
    HttpsClient client(info.host, false);
    auto res = client.request("patch", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
