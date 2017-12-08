#pragma once
#incldue "../client.hpp"
#include "RsoAuthAuthorization.hpp"
#include "RsoAuthRSOPlayerCredentials.hpp"
namespace leagueapi {
  RsoAuthAuthorization_t PostRsoAuthV1AuthorizationGas (const ClientInfo& info,
    const RsoAuthRSOPlayerCredentials_t& creds)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(creds).dump();
    const std::string path = "/rso-auth/v1/authorization/gas";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
