#pragma once
#include "../client.hpp"
#include "RsoAuthRSOPlayerCredentials.hpp"
#include "RsoAuthAuthorization.hpp"
namespace leagueapi {
  RsoAuthAuthorization_t PostRsoAuthV1AuthorizationGas (const ClientInfo& info,
    const RsoAuthRSOPlayerCredentials_t& creds)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(creds).dump();
    std::string path = "/rso-auth/v1/authorization/gas";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
