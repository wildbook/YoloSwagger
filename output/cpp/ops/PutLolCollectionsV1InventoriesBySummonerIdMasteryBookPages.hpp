#pragma once
#incldue "../client.hpp"
#include "LolCollectionsCollectionsMasteryPage.hpp"
namespace leagueapi {
  LolCollectionsCollectionsMasteryPage_t PutLolCollectionsV1InventoriesBySummonerIdMasteryBookPages (const ClientInfo& info,
    const uint64_t_t& summonerId,
    const LolCollectionsCollectionsMasteryPage_t& resource)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(resource).dump();
    const std::string path = "/lol-collections/v1/inventories/"+UrlCode::encode(to_string(summonerId))+"/mastery-book/pages";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}