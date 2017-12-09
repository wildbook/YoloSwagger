#pragma once
#include "../client.hpp"
#include "LolChampionsCollectionsChampionChroma.hpp"
namespace leagueapi {
  std::vector<LolChampionsCollectionsChampionChroma_t> GetLolChampionsV1InventoriesBySummonerIdChampionsByChampionIdSkinsBySkinIdChromas (const ClientInfo& info,
    const uint64_t& summonerId,
    const int32_t& championId,
    const int32_t& skinId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-champions/v1/inventories/"+UrlCode::encode(to_string(summonerId))+"/champions/"+UrlCode::encode(to_string(championId))+"/skins/"+UrlCode::encode(to_string(skinId))+"/chromas";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
