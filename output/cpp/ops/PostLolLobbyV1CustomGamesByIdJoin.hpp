#pragma once
#incldue "../client.hpp"
#include "LolLobbyLobbyCustomJoinParameters.hpp"
namespace leagueapi {
  nlohmann::json PostLolLobbyV1CustomGamesByIdJoin (const ClientInfo& info,
    const uint64_t& id,
    const LolLobbyLobbyCustomJoinParameters_t& parameters)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(parameters).dump();
    const std::string path = "/lol-lobby/v1/custom-games/"+UrlCode::encode(to_string(id))+"/join";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
