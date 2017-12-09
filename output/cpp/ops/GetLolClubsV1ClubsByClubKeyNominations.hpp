#pragma once
#include "../client.hpp"
#include "ClubMember.hpp"
namespace leagueapi {
  std::vector<ClubMember_t> GetLolClubsV1ClubsByClubKeyNominations (const ClientInfo& info,
    const std::string& clubKey)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-clubs/v1/clubs/"+UrlCode::encode(to_string(clubKey))+"/nominations";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
