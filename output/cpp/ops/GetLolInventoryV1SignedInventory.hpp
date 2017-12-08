#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  std::map<std::string, std::string> GetLolInventoryV1SignedInventory (const ClientInfo& info,
    const std::vector<std::string>& inventoryTypes)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/lol-inventory/v1/signedInventory?inventoryTypes=" + UrlCode::encode(to_string(inventoryTypes));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
