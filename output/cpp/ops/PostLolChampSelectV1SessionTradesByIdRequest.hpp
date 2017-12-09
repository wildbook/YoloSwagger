#pragma once
#include "../client.hpp"
#include "LolChampSelectChampSelectTradeContract.hpp"
namespace leagueapi {
  LolChampSelectChampSelectTradeContract_t PostLolChampSelectV1SessionTradesByIdRequest (const ClientInfo& info,
    const int64_t& id)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-champ-select/v1/session/trades/"+UrlCode::encode(to_string(id))+"/request";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
