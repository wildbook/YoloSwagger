#pragma once
#include "../client.hpp"
namespace leagueapi {
  //Download the header for a backend asset
  nlohmann::json HeadByPluginAssetsByPath (const ClientInfo& info,
    //Plugin name to serve from
    const std::string& plugin,
    //Path to the asset to serve
    const std::string& path,
    //optional ETag of the asset that the caller has cached
    const std::optional<std::string>& if-none-match = std::nullopt)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    if(if-none-match)
      headers["if-none-match"] = UrlCode::encode(to_string(*if-none-match));
    const std::string body ="";
    std::string path = "/"+UrlCode::encode(to_string(plugin))+"/assets/"+UrlCode::encode(to_string(path))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("head", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
