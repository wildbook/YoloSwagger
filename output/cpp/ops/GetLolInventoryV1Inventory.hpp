#pragma once
#include "../client.hpp"
#include "LolInventoryInventoryItem.hpp"
namespace leagueapi {
  std::vector<LolInventoryInventoryItem_t> GetLolInventoryV1Inventory (const ClientInfo& info,
    const std::vector<std::string>& inventoryTypes)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-inventory/v1/inventory";
    Headers query;
      query["inventoryTypes"] = inventoryTypes;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
