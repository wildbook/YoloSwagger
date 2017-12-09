#pragma once
#include "../client.hpp"
#include "ClubInvite.hpp"
#include "PlayerClubMembership.hpp"
namespace leagueapi {
  PlayerClubMembership_t PatchLolClubsV1ClubsInvitations (const ClientInfo& info,
    const ClubInvite_t& invitation)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(invitation).dump();
    std::string path = "/lol-clubs/v1/clubs/invitations";
    HttpsClient client(info.host, false);
    auto res = client.request("patch", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
