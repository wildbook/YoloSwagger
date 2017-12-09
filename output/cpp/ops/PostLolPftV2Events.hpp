#pragma once
#include "../client.hpp"
#include "LolPftPFTEvent.hpp"
namespace leagueapi {
  nlohmann::json PostLolPftV2Events (const ClientInfo& info,
    const LolPftPFTEvent_t& pftEvent)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(pftEvent).dump();
    std::string path = "/lol-pft/v2/events";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
