#pragma once
#incldue "../client.hpp"
#include "ClubInvite.hpp"
#include "PlayerClubMembership.hpp"
namespace leagueapi {
  PlayerClubMembership_t PatchLolClubsV1ClubsInvitations (const ClientInfo& info,
    const ClubInvite_t& invitation)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(invitation).dump();
    const std::string path = "/lol-clubs/v1/clubs/invitations";
    HttpsClient client(info.host, false);
    auto res = client.request("patch", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
