#pragma once
#incldue "../client.hpp"
#include "LolClubsPublicClubTag.hpp"
namespace leagueapi {
  LolClubsPublicClubTag_t GetLolClubsPublicV1ClubsPublicBySummonerIdTag (const ClientInfo& info,
    const uint64_t& summonerId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-clubs-public/v1/clubs/public/"+UrlCode::encode(to_string(summonerId))+"/tag";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
