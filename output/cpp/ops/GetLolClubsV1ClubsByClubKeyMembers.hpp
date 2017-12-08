#pragma once
#incldue "../client.hpp"
#include "ClubMember.hpp"
namespace leagueapi {
  std::vector<ClubMember_t> GetLolClubsV1ClubsByClubKeyMembers (const ClientInfo& info,
    const std::string& clubKey)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-clubs/v1/clubs/"+UrlCode::encode(to_string(clubKey))+"/members";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
