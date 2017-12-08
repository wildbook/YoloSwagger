#pragma once
#incldue "../client.hpp"
#include "LolStoreCatalogItem.hpp"
namespace leagueapi {
  std::vector<LolStoreCatalogItem_t> GetLolStoreV1Catalog (const ClientInfo& info,
    const std::optional<std::vector<std::string>>& inventoryType = std::nullopt,
    const std::optional<std::vector<int32_t>>& itemId = std::nullopt)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/lol-store/v1/catalog";
    bool first = true;
    if(inventoryType) {
      if(first) {
        first = false;
        path.append('?')
      } else {
        path.append('&');
      }      path.append("inventoryType="+UrlCode::encode(to_string(*inventoryType)));
    }
    if(itemId) {
      if(first) {
        first = false;
        path.append('?')
      } else {
        path.append('&');
      }      path.append("itemId="+UrlCode::encode(to_string(*itemId)));
    }
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
