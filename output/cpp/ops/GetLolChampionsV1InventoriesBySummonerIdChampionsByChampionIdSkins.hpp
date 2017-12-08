#pragma once
#incldue "../client.hpp"
#include "LolChampionsCollectionsChampionSkin.hpp"
namespace leagueapi {
  std::vector<LolChampionsCollectionsChampionSkin_t> GetLolChampionsV1InventoriesBySummonerIdChampionsByChampionIdSkins (const ClientInfo& info,
    const uint64_t_t& summonerId,
    const int32_t_t& championId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-champions/v1/inventories/"+UrlCode::encode(to_string(summonerId))+"/champions/"+UrlCode::encode(to_string(championId))+"/skins";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
