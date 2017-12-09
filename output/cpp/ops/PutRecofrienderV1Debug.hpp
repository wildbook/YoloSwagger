#pragma once
#include "../client.hpp"
#include "RecofrienderDebugConfig.hpp"
namespace leagueapi {
  RecofrienderDebugConfig_t PutRecofrienderV1Debug (const ClientInfo& info,
    const RecofrienderDebugConfig_t& debugConfiguration)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(debugConfiguration).dump();
    std::string path = "/recofriender/v1/debug";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
