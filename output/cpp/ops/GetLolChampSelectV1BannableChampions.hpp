#pragma once
#include "../client.hpp"
#include "LolChampSelectChampSelectBannableChampions.hpp"
namespace leagueapi {
  LolChampSelectChampSelectBannableChampions_t GetLolChampSelectV1BannableChampions (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-champ-select/v1/bannable-champions";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
