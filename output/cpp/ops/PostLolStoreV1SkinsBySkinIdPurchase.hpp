#pragma once
#incldue "../client.hpp"
#include "LolStoreItemCost.hpp"
namespace leagueapi {
  nlohmann::json PostLolStoreV1SkinsBySkinIdPurchase (const ClientInfo& info,
    const int32_t& skinId,
    const LolStoreItemCost_t& cost)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(cost).dump();
    const std::string path = "/lol-store/v1/skins/"+UrlCode::encode(to_string(skinId))+"/purchase";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
