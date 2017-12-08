#pragma once
#incldue "../client.hpp"
#include "ClubName.hpp"
#include "PlayerClub.hpp"
namespace leagueapi {
  PlayerClub_t PostLolClubsV1ClubsMembership (const ClientInfo& info,
    const ClubName_t& name)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(name).dump();
    const std::string path = "/lol-clubs/v1/clubs/membership";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
