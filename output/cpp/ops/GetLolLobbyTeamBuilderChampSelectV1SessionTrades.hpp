#pragma once
#include "../client.hpp"
#include "LolLobbyTeamBuilderChampSelectTradeContract.hpp"
namespace leagueapi {
  std::vector<LolLobbyTeamBuilderChampSelectTradeContract_t> GetLolLobbyTeamBuilderChampSelectV1SessionTrades (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-lobby-team-builder/champ-select/v1/session/trades";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
