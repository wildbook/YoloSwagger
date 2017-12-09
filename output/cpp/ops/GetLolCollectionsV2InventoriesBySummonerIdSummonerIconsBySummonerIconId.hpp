#pragma once
#include "../client.hpp"
#include "LolCollectionsCollectionsSummonerIcon.hpp"
namespace leagueapi {
  LolCollectionsCollectionsSummonerIcon_t GetLolCollectionsV2InventoriesBySummonerIdSummonerIconsBySummonerIconId (const ClientInfo& info,
    const uint64_t& summonerId,
    const int32_t& summonerIconId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-collections/v2/inventories/"+UrlCode::encode(to_string(summonerId))+"/summoner-icons/"+UrlCode::encode(to_string(summonerIconId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
