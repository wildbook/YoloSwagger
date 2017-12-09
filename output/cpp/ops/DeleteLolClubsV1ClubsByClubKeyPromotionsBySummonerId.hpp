#pragma once
#include "../client.hpp"
#include "ClubMemberLists.hpp"
namespace leagueapi {
  ClubMemberLists_t DeleteLolClubsV1ClubsByClubKeyPromotionsBySummonerId (const ClientInfo& info,
    const std::string& clubKey,
    const uint64_t& summonerId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-clubs/v1/clubs/"+UrlCode::encode(to_string(clubKey))+"/promotions/"+UrlCode::encode(to_string(summonerId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("delete", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
