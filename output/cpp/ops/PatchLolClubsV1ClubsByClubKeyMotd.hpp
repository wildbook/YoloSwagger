#pragma once
#incldue "../client.hpp"
#include "ClubMOTD.hpp"
#include "PlayerClub.hpp"
namespace leagueapi {
  PlayerClub_t PatchLolClubsV1ClubsByClubKeyMotd (const ClientInfo& info,
    const std::string_t& clubKey,
    const ClubMOTD_t& motd)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(motd).dump();
    const std::string path = "/lol-clubs/v1/clubs/"+UrlCode::encode(to_string(clubKey))+"/motd";
    HttpsClient client(info.host, false);
    auto res = client.request("patch", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}