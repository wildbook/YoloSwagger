#pragma once
#include "../client.hpp"
namespace leagueapi {
  //Get the setting for the specified key.
  nlohmann::json GetDataStoreV1SystemSettingsByPath (const ClientInfo& info,
    //The path to the settings key
    const std::string& path)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/data-store/v1/system-settings/"+UrlCode::encode(to_string(path))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
