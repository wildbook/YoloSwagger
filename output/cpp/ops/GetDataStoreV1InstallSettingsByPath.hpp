#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  //Get the data for the specified key from the install settings.
  nlohmann::json_t GetDataStoreV1InstallSettingsByPath (const ClientInfo& info,
    //The path to the settings key
    const std::string_t& path)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/data-store/v1/install-settings/"+UrlCode::encode(to_string(path))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}