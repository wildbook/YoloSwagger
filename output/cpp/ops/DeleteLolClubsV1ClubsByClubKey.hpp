#pragma once
#include "../client.hpp"
#include "PlayerClubMembership.hpp"
namespace leagueapi {
  PlayerClubMembership_t DeleteLolClubsV1ClubsByClubKey (const ClientInfo& info,
    const std::string& clubKey)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-clubs/v1/clubs/"+UrlCode::encode(to_string(clubKey))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("delete", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
