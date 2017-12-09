#pragma once
#include "../client.hpp"
#include "LolCollectionsCollectionsRunePage.hpp"
namespace leagueapi {
  LolCollectionsCollectionsRunePage_t PutLolCollectionsV1InventoriesBySummonerIdRuneBookPagesByPageId (const ClientInfo& info,
    const uint64_t& summonerId,
    const uint32_t& pageId,
    const LolCollectionsCollectionsRunePage_t& resource)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(resource).dump();
    std::string path = "/lol-collections/v1/inventories/"+UrlCode::encode(to_string(summonerId))+"/rune-book/pages/"+UrlCode::encode(to_string(pageId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
