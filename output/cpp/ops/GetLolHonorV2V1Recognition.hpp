#pragma once
#include "../client.hpp"
#include "LolHonorV2Honor.hpp"
namespace leagueapi {
  std::vector<LolHonorV2Honor_t> GetLolHonorV2V1Recognition (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-honor-v2/v1/recognition";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
