#pragma once
#include "../client.hpp"
#include "LolCollectionsCollectionsMasteryBook.hpp"
namespace leagueapi {
  LolCollectionsCollectionsMasteryBook_t PutLolCollectionsV1InventoriesBySummonerIdMasteryBook (const ClientInfo& info,
    const uint64_t& summonerId,
    const LolCollectionsCollectionsMasteryBook_t& resource)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(resource).dump();
    std::string path = "/lol-collections/v1/inventories/"+UrlCode::encode(to_string(summonerId))+"/mastery-book";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
