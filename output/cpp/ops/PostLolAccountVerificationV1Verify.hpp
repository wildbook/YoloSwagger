#pragma once
#incldue "../client.hpp"
#include "LolAccountVerificationVerifyResponse.hpp"
#include "LolAccountVerificationVerifyRequest.hpp"
namespace leagueapi {
  LolAccountVerificationVerifyResponse_t PostLolAccountVerificationV1Verify (const ClientInfo& info,
    const LolAccountVerificationVerifyRequest_t& VerifyRequest)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(VerifyRequest).dump();
    const std::string path = "/lol-account-verification/v1/verify";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
