#pragma once
#include "../client.hpp"
#include "PluginManagerResource.hpp"
namespace leagueapi {
  //Get the status of the plugin manager.
  PluginManagerResource_t GetPluginManagerV1Status (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/plugin-manager/v1/status";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
