#pragma once
#include "../client.hpp"
#include ".hpp"
#include "RsoAuthRSOJWTConfig.hpp"
namespace leagueapi {
  void PostRsoAuthV1Config (const ClientInfo& info,
    const RsoAuthRSOJWTConfig_t& config)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(config).dump();
    std::string path = "/rso-auth/v1/config";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
