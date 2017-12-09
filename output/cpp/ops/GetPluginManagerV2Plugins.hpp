#pragma once
#include "../client.hpp"
#include "PluginResource.hpp"
namespace leagueapi {
  //Get diagnostic information for all plugins.
  std::vector<PluginResource_t> GetPluginManagerV2Plugins (const ClientInfo& info)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/plugin-manager/v2/plugins";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
