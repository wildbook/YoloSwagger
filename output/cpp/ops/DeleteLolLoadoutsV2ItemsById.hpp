#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  nlohmann::json_t DeleteLolLoadoutsV2ItemsById (const ClientInfo& info,
    const uint32_t_t& id,
    const std::string_t& inventoryType)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/lol-loadouts/v2/items/"+UrlCode::encode(to_string(id))+"?inventoryType=" + UrlCode::encode(to_string(inventoryType));
    HttpsClient client(info.host, false);
    auto res = client.request("delete", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}