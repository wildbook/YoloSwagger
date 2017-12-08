#pragma once
#incldue "../client.hpp"
#include ".hpp"
#include "LolSummonerEndOfGamePoints.hpp"
namespace leagueapi {
  void PostLolSummonerV1CurrentSummonerTbRerollPoints (const ClientInfo& info,
    const LolSummonerEndOfGamePoints_t& points)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(points).dump();
    const std::string path = "/lol-summoner/v1/current-summoner/tbRerollPoints";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
