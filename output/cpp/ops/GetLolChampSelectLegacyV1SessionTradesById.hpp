#pragma once
#include "../client.hpp"
#include "LolChampSelectLegacyChampSelectTradeContract.hpp"
namespace leagueapi {
  LolChampSelectLegacyChampSelectTradeContract_t GetLolChampSelectLegacyV1SessionTradesById (const ClientInfo& info,
    const int64_t& id)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-champ-select-legacy/v1/session/trades/"+UrlCode::encode(to_string(id))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
