#pragma once
#incldue "../client.hpp"
#include "PlayerPreferences.hpp"
namespace leagueapi {
  nlohmann::json_t PutLolPlayerPreferencesV1Preference (const ClientInfo& info,
    const PlayerPreferences_t& preferences)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(preferences).dump();
    const std::string path = "/lol-player-preferences/v1/preference";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}