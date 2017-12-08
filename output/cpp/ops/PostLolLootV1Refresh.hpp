#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  std::string_t PostLolLootV1Refresh (const ClientInfo& info,
    const bool_t& force)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/lol-loot/v1/refresh?force=" + UrlCode::encode(to_string(force));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}