#pragma once
#incldue "../client.hpp"
#include "LolCollectionsCollectionsTopChampionMasteries.hpp"
namespace leagueapi {
  LolCollectionsCollectionsTopChampionMasteries_t GetLolCollectionsV1InventoriesBySummonerIdChampionMasteryTop (const ClientInfo& info,
    const uint64_t& summonerId,
    const uint64_t& limit,
    const std::optional<std::string>& sortRule = std::nullopt)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/lol-collections/v1/inventories/"+UrlCode::encode(to_string(summonerId))+"/champion-mastery/top?limit=" + UrlCode::encode(to_string(limit));
    if(sortRule) {
      path.append("&sortRule="+UrlCode::encode(to_string(*sortRule)));
    }
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
