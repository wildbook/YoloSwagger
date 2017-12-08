#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PutLolBetaOptInV1MigrationError (const ClientInfo& info,
    const std::string& errString)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/lol-beta-opt-in/v1/migration-error?errString=" + UrlCode::encode(to_string(errString));
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
