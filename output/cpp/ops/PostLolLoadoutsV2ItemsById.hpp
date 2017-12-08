#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  nlohmann::json PostLolLoadoutsV2ItemsById (const ClientInfo& info,
    const uint32_t& id,
    const std::map<std::string, nlohmann::json>& items)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(items).dump();
    const std::string path = "/lol-loadouts/v2/items/"+UrlCode::encode(to_string(id))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
