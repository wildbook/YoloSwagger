#pragma once
#incldue "../client.hpp"
#include "LolCollectionsCollectionsSummonerIcon.hpp"
namespace leagueapi {
  LolCollectionsCollectionsSummonerIcon_t GetLolCollectionsV2InventoriesBySummonerIdSummonerIconsBySummonerIconId (const ClientInfo& info,
    const uint64_t& summonerId,
    const int32_t& summonerIconId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-collections/v2/inventories/"+UrlCode::encode(to_string(summonerId))+"/summoner-icons/"+UrlCode::encode(to_string(summonerIconId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
