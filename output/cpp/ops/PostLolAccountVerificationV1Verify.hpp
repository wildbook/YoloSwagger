#pragma once
#include "../client.hpp"
#include "LolAccountVerificationVerifyResponse.hpp"
#include "LolAccountVerificationVerifyRequest.hpp"
namespace leagueapi {
  LolAccountVerificationVerifyResponse_t PostLolAccountVerificationV1Verify (const ClientInfo& info,
    const LolAccountVerificationVerifyRequest_t& VerifyRequest)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(VerifyRequest).dump();
    std::string path = "/lol-account-verification/v1/verify";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
