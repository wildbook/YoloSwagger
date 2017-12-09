#pragma once
#include "../client.hpp"
#include "SanitizerContainsSanitizedRequest.hpp"
#include "SanitizerContainsSanitizedResponse.hpp"
namespace leagueapi {
  SanitizerContainsSanitizedResponse_t PostSanitizerV1ContainsSanitized (const ClientInfo& info,
    const SanitizerContainsSanitizedRequest_t& request)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(request).dump();
    std::string path = "/sanitizer/v1/containsSanitized";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
