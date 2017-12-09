#pragma once
#include "../client.hpp"
#include "LolHonorV2ApiHonorPlayerServerRequest.hpp"
namespace leagueapi {
  std::string PostLolHonorV2V1HonorPlayer (const ClientInfo& info,
    const LolHonorV2ApiHonorPlayerServerRequest_t& honorPlayerRequest)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(honorPlayerRequest).dump();
    std::string path = "/lol-honor-v2/v1/honor-player";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
