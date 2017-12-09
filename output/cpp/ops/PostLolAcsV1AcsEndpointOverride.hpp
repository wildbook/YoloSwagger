#pragma once
#include "../client.hpp"
#include "LolAcsAcsEndPoint.hpp"
namespace leagueapi {
  nlohmann::json PostLolAcsV1AcsEndpointOverride (const ClientInfo& info,
    const LolAcsAcsEndPoint_t& data)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(data).dump();
    std::string path = "/lol-acs/v1/acs-endpoint-override";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
