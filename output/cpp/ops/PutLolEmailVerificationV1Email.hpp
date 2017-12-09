#pragma once
#include "../client.hpp"
#include "LolEmailVerificationEmailUpdate.hpp"
namespace leagueapi {
  nlohmann::json PutLolEmailVerificationV1Email (const ClientInfo& info,
    const LolEmailVerificationEmailUpdate_t& EmailUpdate)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(EmailUpdate).dump();
    std::string path = "/lol-email-verification/v1/email";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
