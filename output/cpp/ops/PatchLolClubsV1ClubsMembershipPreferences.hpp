#pragma once
#include "../client.hpp"
#include "ClubPreferences.hpp"
namespace leagueapi {
  ClubPreferences_t PatchLolClubsV1ClubsMembershipPreferences (const ClientInfo& info,
    const ClubPreferences_t& preferences)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(preferences).dump();
    std::string path = "/lol-clubs/v1/clubs/membership/preferences";
    HttpsClient client(info.host, false);
    auto res = client.request("patch", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
