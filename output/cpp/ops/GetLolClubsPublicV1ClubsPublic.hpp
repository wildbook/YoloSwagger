#pragma once
#include "../client.hpp"
#include "LolClubsPublicClubsPublicData.hpp"
namespace leagueapi {
  std::vector<LolClubsPublicClubsPublicData_t> GetLolClubsPublicV1ClubsPublic (const ClientInfo& info,
    const std::string& summonerNames)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-clubs-public/v1/clubs/public";
    Headers query;
      query["summonerNames"] = summonerNames;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
