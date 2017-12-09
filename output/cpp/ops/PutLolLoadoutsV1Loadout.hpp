#pragma once
#include "../client.hpp"
#include "LolLoadoutsLoadout.hpp"
namespace leagueapi {
  LolLoadoutsLoadout_t PutLolLoadoutsV1Loadout (const ClientInfo& info,
    const LolLoadoutsLoadout_t& loadout)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(loadout).dump();
    std::string path = "/lol-loadouts/v1/loadout";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
