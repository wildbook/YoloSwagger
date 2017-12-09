#pragma once
#include "../client.hpp"
#include "ClubName.hpp"
#include "PlayerClub.hpp"
namespace leagueapi {
  PlayerClub_t PostLolClubsV1ClubsMembership (const ClientInfo& info,
    const ClubName_t& name)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(name).dump();
    std::string path = "/lol-clubs/v1/clubs/membership";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
