#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Set the data for the specified key from the install settings.
  void PostDataStoreV1InstallSettingsByPath (const ClientInfo& info,
    //The path to the settings key
    const std::string_t& path,
    //The data to assign to the key
    const nlohmann::json_t& data)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(data).dump();
    const std::string path = "/data-store/v1/install-settings/"+UrlCode::encode(to_string(path))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
