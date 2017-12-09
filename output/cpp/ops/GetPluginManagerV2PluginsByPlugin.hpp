#pragma once
#include "../client.hpp"
#include "PluginResource.hpp"
namespace leagueapi {
  //Get diagnostic information for a single plugin.
  PluginResource_t GetPluginManagerV2PluginsByPlugin (const ClientInfo& info,
    //Plugin name
    const std::string& plugin)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/plugin-manager/v2/plugins/"+UrlCode::encode(to_string(plugin))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
