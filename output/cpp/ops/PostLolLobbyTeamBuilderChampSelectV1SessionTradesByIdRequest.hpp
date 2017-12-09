#pragma once
#include "../client.hpp"
#include "LolLobbyTeamBuilderChampSelectTradeContract.hpp"
namespace leagueapi {
  LolLobbyTeamBuilderChampSelectTradeContract_t PostLolLobbyTeamBuilderChampSelectV1SessionTradesByIdRequest (const ClientInfo& info,
    const int32_t& id)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-lobby-team-builder/champ-select/v1/session/trades/"+UrlCode::encode(to_string(id))+"/request";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
