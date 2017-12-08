#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PostRiotMessagingServiceV1Connect (const ClientInfo& info,
    const std::string_t& idToken)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(idToken).dump();
    const std::string path = "/riot-messaging-service/v1/connect";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}