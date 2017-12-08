#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  //Download a backend asset
  nlohmann::json_t GetByPluginAssetsByPath (const ClientInfo& info,
    //Plugin name to serve from
    const std::string_t& plugin,
    //Path to the asset to serve
    const std::string_t& path,
    //optional ETag of the asset that the caller has cached
    const std::optional<std::string_t>& if-none-match = std::nullopt)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    if(if-none-match)
      headers["if-none-match"] = UrlCode::encode(to_string(*if-none-match));
    const std::string body ="";
    const std::string path = "/"+UrlCode::encode(to_string(plugin))+"/assets/"+UrlCode::encode(to_string(path))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
