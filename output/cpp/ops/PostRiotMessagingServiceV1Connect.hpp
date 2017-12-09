#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PostRiotMessagingServiceV1Connect (const ClientInfo& info,
    const std::string& idToken)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(idToken).dump();
    std::string path = "/riot-messaging-service/v1/connect";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
