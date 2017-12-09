#pragma once
#include "../client.hpp"
#include "LolLeaguesSignedSummonerLeagueItemsDTO.hpp"
namespace leagueapi {
  LolLeaguesSignedSummonerLeagueItemsDTO_t GetLolLeaguesV2SummonerLeaguesCurrentSummonerSignedLeagues (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-leagues/v2/summoner-leagues/current-summoner/signed-leagues";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
