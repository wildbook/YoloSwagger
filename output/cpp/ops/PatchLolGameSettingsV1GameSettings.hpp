#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  nlohmann::json_t PatchLolGameSettingsV1GameSettings (const ClientInfo& info,
    const nlohmann::json_t& settingsResource)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(settingsResource).dump();
    const std::string path = "/lol-game-settings/v1/game-settings";
    HttpsClient client(info.host, false);
    auto res = client.request("patch", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
