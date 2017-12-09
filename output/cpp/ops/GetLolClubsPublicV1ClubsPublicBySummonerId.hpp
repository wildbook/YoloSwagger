#pragma once
#include "../client.hpp"
#include "LolClubsPublicClubsPublicData.hpp"
namespace leagueapi {
  LolClubsPublicClubsPublicData_t GetLolClubsPublicV1ClubsPublicBySummonerId (const ClientInfo& info,
    const uint64_t& summonerId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-clubs-public/v1/clubs/public/"+UrlCode::encode(to_string(summonerId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
