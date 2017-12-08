#pragma once
#incldue "../client.hpp"
#include "LolEndOfGameEndOfGamePlayerComplaintV2.hpp"
namespace leagueapi {
  LolEndOfGameEndOfGamePlayerComplaintV2_t PostLolEndOfGameV2PlayerComplaints (const ClientInfo& info,
    const LolEndOfGameEndOfGamePlayerComplaintV2_t& complaint)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(complaint).dump();
    const std::string path = "/lol-end-of-game/v2/player-complaints";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
