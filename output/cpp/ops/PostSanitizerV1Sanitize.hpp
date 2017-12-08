#pragma once
#incldue "../client.hpp"
#include "SanitizerSanitizeResponse.hpp"
#include "SanitizerSanitizeRequest.hpp"
namespace leagueapi {
  SanitizerSanitizeResponse_t PostSanitizerV1Sanitize (const ClientInfo& info,
    const SanitizerSanitizeRequest_t& request)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(request).dump();
    const std::string path = "/sanitizer/v1/sanitize";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
