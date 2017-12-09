#pragma once
#include "../client.hpp"
#include "LolEmailVerificationEmailVerificationSession.hpp"
namespace leagueapi {
  LolEmailVerificationEmailVerificationSession_t GetLolEmailVerificationV1Email (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-email-verification/v1/email";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
