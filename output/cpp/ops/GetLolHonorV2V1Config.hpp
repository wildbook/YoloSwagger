#pragma once
#include "../client.hpp"
#include "LolHonorV2HonorConfig.hpp"
namespace leagueapi {
  LolHonorV2HonorConfig_t GetLolHonorV2V1Config (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-honor-v2/v1/config";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
