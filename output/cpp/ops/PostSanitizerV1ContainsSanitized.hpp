#pragma once
#include "../client.hpp"
#include "SanitizerContainsSanitizedResponse.hpp"
#include "SanitizerContainsSanitizedRequest.hpp"
namespace leagueapi {
  SanitizerContainsSanitizedResponse_t PostSanitizerV1ContainsSanitized (const ClientInfo& info,
    const SanitizerContainsSanitizedRequest_t& request)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(request).dump();
    std::string path = "/sanitizer/v1/containsSanitized";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
