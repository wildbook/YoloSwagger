#pragma once
#include "../client.hpp"
#include "RsoAuthAuthError.hpp"
namespace leagueapi {
  RsoAuthAuthError_t GetRsoAuthV1AuthorizationError (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/rso-auth/v1/authorization/error";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
