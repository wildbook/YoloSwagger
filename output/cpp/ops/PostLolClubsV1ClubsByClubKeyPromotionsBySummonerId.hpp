#pragma once
#incldue "../client.hpp"
#include "ClubMemberLists.hpp"
namespace leagueapi {
  ClubMemberLists_t PostLolClubsV1ClubsByClubKeyPromotionsBySummonerId (const ClientInfo& info,
    const std::string& clubKey,
    const uint64_t& summonerId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-clubs/v1/clubs/"+UrlCode::encode(to_string(clubKey))+"/promotions/"+UrlCode::encode(to_string(summonerId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
