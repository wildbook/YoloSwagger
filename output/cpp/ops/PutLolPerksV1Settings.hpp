#pragma once
#incldue "../client.hpp"
#include "LolPerksUISettings.hpp"
namespace leagueapi {
  nlohmann::json_t PutLolPerksV1Settings (const ClientInfo& info,
    const LolPerksUISettings_t& showLongDescriptions)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(showLongDescriptions).dump();
    const std::string path = "/lol-perks/v1/settings";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
