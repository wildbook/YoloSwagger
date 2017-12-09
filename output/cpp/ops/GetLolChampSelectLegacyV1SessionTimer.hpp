#pragma once
#include "../client.hpp"
#include "LolChampSelectLegacyChampSelectTimer.hpp"
namespace leagueapi {
  LolChampSelectLegacyChampSelectTimer_t GetLolChampSelectLegacyV1SessionTimer (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-champ-select-legacy/v1/session/timer";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
