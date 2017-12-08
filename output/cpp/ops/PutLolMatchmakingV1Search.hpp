#pragma once
#incldue "../client.hpp"
#include "LolMatchmakingMatchmakingSearchResource.hpp"
namespace leagueapi {
  nlohmann::json_t PutLolMatchmakingV1Search (const ClientInfo& info,
    const LolMatchmakingMatchmakingSearchResource_t& search)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(search).dump();
    const std::string path = "/lol-matchmaking/v1/search";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
