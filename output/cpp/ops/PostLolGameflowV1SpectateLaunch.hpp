#pragma once
#include "../client.hpp"
namespace leagueapi {
  nlohmann::json PostLolGameflowV1SpectateLaunch (const ClientInfo& info,
    const std::optional<std::string>& summonerName = std::nullopt)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(summonerName).dump();
    std::string path = "/lol-gameflow/v1/spectate/launch";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
