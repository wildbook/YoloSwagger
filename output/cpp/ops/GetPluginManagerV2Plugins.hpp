#pragma once
#include "../client.hpp"
#include "PluginResource.hpp"
namespace leagueapi {
  //Get diagnostic information for all plugins.
  std::vector<PluginResource_t> GetPluginManagerV2Plugins (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/plugin-manager/v2/plugins";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
