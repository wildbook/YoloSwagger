#pragma once
#include "../client.hpp"
#include "LolCollectionsCollectionsWardSkin.hpp"
namespace leagueapi {
  std::vector<LolCollectionsCollectionsWardSkin_t> GetLolCollectionsV1InventoriesBySummonerIdWardSkins (const ClientInfo& info,
    const uint64_t& summonerId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-collections/v1/inventories/"+UrlCode::encode(to_string(summonerId))+"/ward-skins";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
