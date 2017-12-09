#pragma once
#include "../client.hpp"
#include "PlayerClubMembership.hpp"
namespace leagueapi {
  PlayerClubMembership_t DeleteLolClubsV1ClubsByClubKey (const ClientInfo& info,
    const std::string& clubKey)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-clubs/v1/clubs/"+UrlCode::encode(to_string(clubKey))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("delete", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
