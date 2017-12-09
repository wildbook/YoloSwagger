#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PostLolSummonerV1CurrentSummonerRerollPointsDecrement (const ClientInfo& info)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-summoner/v1/current-summoner/rerollPoints/decrement";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
