#pragma once
#include "../client.hpp"
#include "RsoAuthIdToken.hpp"
namespace leagueapi {
  RsoAuthIdToken_t GetRsoAuthV1AuthorizationIdToken (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/rso-auth/v1/authorization/id-token";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
