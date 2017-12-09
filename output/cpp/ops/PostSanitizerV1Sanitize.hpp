#pragma once
#include "../client.hpp"
#include "SanitizerSanitizeRequest.hpp"
#include "SanitizerSanitizeResponse.hpp"
namespace leagueapi {
  SanitizerSanitizeResponse_t PostSanitizerV1Sanitize (const ClientInfo& info,
    const SanitizerSanitizeRequest_t& request)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(request).dump();
    std::string path = "/sanitizer/v1/sanitize";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
