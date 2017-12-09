#pragma once
#include "../client.hpp"
#include "LolSettingsSettingCategory.hpp"
namespace leagueapi {
  nlohmann::json PutLolSettingsV2AccountByPpTypeByCategory (const ClientInfo& info,
    const std::string& ppType,
    const std::string& category,
    const LolSettingsSettingCategory_t& settingsResource)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(settingsResource).dump();
    std::string path = "/lol-settings/v2/account/"+UrlCode::encode(to_string(ppType))+"/"+UrlCode::encode(to_string(category))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
