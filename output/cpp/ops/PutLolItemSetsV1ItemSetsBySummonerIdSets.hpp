#pragma once
#include "../client.hpp"
#include ".hpp"
#include "LolItemSetsItemSets.hpp"
namespace leagueapi {
  void PutLolItemSetsV1ItemSetsBySummonerIdSets (const ClientInfo& info,
    const uint64_t& summonerId,
    const LolItemSetsItemSets_t& itemSets)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(itemSets).dump();
    std::string path = "/lol-item-sets/v1/item-sets/"+UrlCode::encode(to_string(summonerId))+"/sets";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
