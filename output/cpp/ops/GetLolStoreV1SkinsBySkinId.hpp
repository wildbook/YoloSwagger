#pragma once
#include "../client.hpp"
#include "LolStoreCatalogItem.hpp"
namespace leagueapi {
  LolStoreCatalogItem_t GetLolStoreV1SkinsBySkinId (const ClientInfo& info,
    const int32_t& skinId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-store/v1/skins/"+UrlCode::encode(to_string(skinId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
