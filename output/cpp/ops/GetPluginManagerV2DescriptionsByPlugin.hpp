#pragma once
#incldue "../client.hpp"
#include "PluginDescriptionResource.hpp"
namespace leagueapi {
  //Get a plugin description.
  PluginDescriptionResource_t GetPluginManagerV2DescriptionsByPlugin (const ClientInfo& info,
    //Plugin name
    const std::string_t& plugin)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/plugin-manager/v2/descriptions/"+UrlCode::encode(to_string(plugin))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
