#pragma once
#include "../client.hpp"
#include "LolStoreCatalogItem.hpp"
namespace leagueapi {
  std::vector<LolStoreCatalogItem_t> GetLolStoreV1Catalog (const ClientInfo& info,
    const std::optional<std::vector<std::string>>& inventoryType = std::nullopt,
    const std::optional<std::vector<int32_t>>& itemId = std::nullopt)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-store/v1/catalog";
    Headers query;
    if({0})
      query["inventoryType"] = *inventoryType;
    if({0})
      query["itemId"] = *itemId;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
