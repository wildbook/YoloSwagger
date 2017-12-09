#pragma once
#include "../client.hpp"
namespace leagueapi {
  bool GetLolSummonerV1CheckNameAvailabilityByName (const ClientInfo& info,
    const std::string& name)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-summoner/v1/check-name-availability/"+UrlCode::encode(to_string(name))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
