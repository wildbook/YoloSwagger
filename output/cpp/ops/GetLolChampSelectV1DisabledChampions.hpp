#pragma once
#include "../client.hpp"
#include "LolChampSelectChampSelectDisabledChampions.hpp"
namespace leagueapi {
  LolChampSelectChampSelectDisabledChampions_t GetLolChampSelectV1DisabledChampions (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-champ-select/v1/disabled-champions";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
