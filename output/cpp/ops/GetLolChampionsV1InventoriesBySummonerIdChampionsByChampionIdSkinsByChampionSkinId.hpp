#pragma once
#include "../client.hpp"
#include "LolChampionsCollectionsChampionSkin.hpp"
namespace leagueapi {
  LolChampionsCollectionsChampionSkin_t GetLolChampionsV1InventoriesBySummonerIdChampionsByChampionIdSkinsByChampionSkinId (const ClientInfo& info,
    const uint64_t& summonerId,
    const int32_t& championId,
    const int32_t& championSkinId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-champions/v1/inventories/"+UrlCode::encode(to_string(summonerId))+"/champions/"+UrlCode::encode(to_string(championId))+"/skins/"+UrlCode::encode(to_string(championSkinId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
