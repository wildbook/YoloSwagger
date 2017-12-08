#pragma once
#incldue "../client.hpp"
#include "LolStoreCatalogItem.hpp"
namespace leagueapi {
  LolStoreCatalogItem_t GetLolStoreV1SkinsBySkinId (const ClientInfo& info,
    const int32_t_t& skinId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-store/v1/skins/"+UrlCode::encode(to_string(skinId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}