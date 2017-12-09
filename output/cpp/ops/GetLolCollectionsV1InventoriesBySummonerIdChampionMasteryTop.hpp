#pragma once
#include "../client.hpp"
#include "LolCollectionsCollectionsTopChampionMasteries.hpp"
namespace leagueapi {
  LolCollectionsCollectionsTopChampionMasteries_t GetLolCollectionsV1InventoriesBySummonerIdChampionMasteryTop (const ClientInfo& info,
    const uint64_t& summonerId,
    const uint64_t& limit,
    const std::optional<std::string>& sortRule = std::nullopt)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-collections/v1/inventories/"+UrlCode::encode(to_string(summonerId))+"/champion-mastery/top";
    Headers query;
      query["limit"] = limit;
    if({0})
      query["sortRule"] = *sortRule;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
