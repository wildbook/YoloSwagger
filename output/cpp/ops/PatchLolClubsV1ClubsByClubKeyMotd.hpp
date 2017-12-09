#pragma once
#include "../client.hpp"
#include "PlayerClub.hpp"
#include "ClubMOTD.hpp"
namespace leagueapi {
  PlayerClub_t PatchLolClubsV1ClubsByClubKeyMotd (const ClientInfo& info,
    const std::string& clubKey,
    const ClubMOTD_t& motd)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(motd).dump();
    std::string path = "/lol-clubs/v1/clubs/"+UrlCode::encode(to_string(clubKey))+"/motd";
    HttpsClient client(info.host, false);
    auto res = client.request("patch", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
